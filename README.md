# TAG - *The Animal Guardian* 🐘

## Background

This project aims to improve the efficacy of wildlife conservation by providing a feasible solution to the following challenges: (i) Illegal poaching activities, (ii) Human-animal conflict, (iii) Aggressive animal behaviour tracking, and (iv) Environmental issues, such as wildfire. Our animal monitoring tag can be attached to an animal to collect various data to achieve the following functionalities: (i) Location tracking, (ii) Activity and heartbeat monitoring, (iii) Mood prediction, (iv) Human presence detection, (v) Geofencing alert, (vi) Poaching risk alert, and (vii) Wildfire detection alert.


## Architecture Overview

![Architecture Overview](https://github.com/shade-12/tag/blob/main/docs/img/Architecture_Overview.jpg?raw=true)


## Features

1. Location tracking
 - Real-time GPS coordinates display for every registered tag on a map

2. Activity and heartbeat monitoring 
 - Animal heartbeat rate over time display on a line graph 
 - Animal daily activities display in a pie chart, eg. 10% walking, 20% resting, 65% sleeping, 5% abnormal behaviour
 - Real-time notification is sent to user for any detected abnormal behaviour

3. Geofencing alert
 - Real-time notification is sent to user when animal is moving out of defined area or moving into pre-defined risky zones
 - Geofence and risky zone boundaries customization for every registered tag with multiple GPS coordinates that form an enclosed area when connected with adjacent coordinates

4. Human presence detection
 - Real-time notification is sent to user when a human is detected near the animal tag

5. Wildfire detection alert
- Ambient temperature over time display on a line graph, with optimal temperature overlays on the graph for a better comparison between the current temperature and the optimal temperature
- Real-time notification is sent to user when the detected temperature goes beyond 50 degree celcius


## Team

This is a project built by Group 10 for CPEN 391 Winter 2021 @ UBC, taught by Professor Cristian Grecu.

- [Aayush Bisht](https://github.com/bisht10)

- [Andrew Shieh](https://github.com/Shiehand)

- [Elbert Ng](https://github.com/ngelbert)

- [Shade Wong](https://github.com/shade-12)

- [Vincent Sastra](https://github.com/VincentSastra)