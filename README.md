Traffic Light with Pedestrian Button (Arduino Simulation)

This project is a Tinkercad simulation of a traffic light system with a pedestrian crossing button.
The system cycles automatically through Green → Yellow → Red using non-blocking timing (millis()), and when the pedestrian button is pressed, it forces the light to Red for a fixed duration before resuming the normal cycle.

🔧 Features

-Automatic Traffic Light Cycle:

-Green for 10s

-Yellow for 10s

-Red for 10s

Pedestrian Button Control:

-When pressed, the light immediately switches to Red.

-Holds Red for 10 seconds (to simulate pedestrian crossing).

-Then resumes the normal cycle.

Uses millis() instead of delay() for timing, allowing parallel event handling.

🛠️ Hardware Setup

Arduino Uno (in Tinkercad)

LEDs:

-Green → Pin 8

-Yellow → Pin 7

-Red → Pin 4

Push Button → Pin 2 (with pull-down resistor / Tinkercad’s default pull-down).

📜 Code Summary

-millis() tracks elapsed time to switch lights without blocking.

-Normal cycle runs 30 seconds (10s each light).

-Button press overrides the cycle, forces Red, then resets timing.

🚦 Simulation Behavior

-Starts with Green (1s after reset).

-After 10s → Yellow.

-After 20s → Red.

-After 30s → cycle restarts.

-Button Pressed → immediate Red for 10s, then cycle restarts.

💡 Applications

-Demonstrates non-blocking timing with millis().

-Can be extended to real-world traffic light + pedestrian systems.
