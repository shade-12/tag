import React, {useEffect, useState} from "react";
import { TagNavbar } from "./components/Navbar";
import { HomePage } from "./pages/home";
import { PetsPage } from "./pages/pets";
import { Route, Switch, BrowserRouter as Router } from "react-router-dom";

import Amplify, {Auth, Hub} from "aws-amplify";
import awsconfig from "./aws-exports";
import {
	AmplifySignUp,
	AmplifyAuthenticator,
	AmplifySignOut,
} from "@aws-amplify/ui-react";
import { PetForm } from "./pages/petForm";
import {NotificationToast, Notification} from "./components/widget/NotificationToast";
import "./components/widget/NotificationToast.css";

Amplify.configure(awsconfig);

function App() {

	// JSX Element
	const [toastArray, setToastArray] = useState<Array<JSX.Element>>([])

	// Notification Model
	let notificationArray: Array<Notification> = []

	// When the user login/logout, refresh the page
	Hub.listen("auth", () => window.location.reload())

	// Turn an array of notification into a JSX Element array to be displayed
	const genToastArray: (notificationArray: Array<Notification>) => Array<JSX.Element> = (notificationArray) => {
		return notificationArray.map(
			(value: Notification) => {
				return NotificationToast(value, () => {
					const index = notificationArray.indexOf(value);
					if (index > -1) {
						notificationArray.splice(index, 1);
					}
					setToastArray(genToastArray(notificationArray))
				})
			}
		)
	}

	// When mounted
	useEffect(() => {
		// Get username
		Auth.currentUserInfo()
			.then(auth => {
				// Listen for notification
				const websocket = new WebSocket("wss://ivrpe7bcyl.execute-api.us-west-2.amazonaws.com/dev?username=" + auth.username);
				websocket.addEventListener('message', (message) => {
					let data = JSON.parse(message.data.toString())
					if (data.type === "notification") {
						notificationArray.push(data)
						setToastArray(genToastArray(notificationArray))
					}
				})
			})
			.catch(err => {

			})
	}, [])

	return (
		// Amplify wrapper for AUTH
		<AmplifyAuthenticator usernameAlias="username">
			<AmplifySignUp
				slot="sign-up"
				usernameAlias="username"
				formFields={[
					{
						type: "given_name",
						label: "Enter your first name",
						placeholder: "John",
						required: true,
					},
					{
						type: "family_name",
						label: "Enter your last name",
						placeholder: "Doe",
						required: true,
					},
					{
						type: "email",
						label: "Enter your e-mail",
						placeholder: "johndoe@gmail.com",
						required: true,
					},
					{
						type: "username",
						label: "Enter your Username",
						placeholder: "Username",
						required: true,
					},
					{
						type: "password",
						label: "Enter your Password",
						placeholder: "Password",
						required: true,
					},
				]}
			/>
			{/* Router for the main responsive pages */}
			<Router>
				<TagNavbar />
				<AmplifySignOut />
				<Switch>
					<Route path="/create-pet">
						<PetForm />
					</Route>
					<Route path="/pets">
						<PetsPage />
					</Route>
					<Route path="/">
						<HomePage />
					</Route>
				</Switch>
			</Router>
			{/* Notification is outside router because it stays there even after page changes */}
			<div className="NotificationToast">
				{toastArray}
			</div>
		</AmplifyAuthenticator>
	);
}

// @ts-ignore
export default App;