# Remote Control Car

Remote controlled car using ESP32 and PS3 controller.

Requirements:

- Any [ESP32](https://www.aliexpress.com/item/1005005246146177.html) board with bluetooth support.
- 1 Positional rotation Servo. I used [SG92R](https://www.aliexpress.com/item/4000844077554.html).
- 1 DC motor. I used [N60 (3V-6V)](https://www.aliexpress.com/item/32472051974.html) 12x30mm with 5mm shaft.
- 1 Motor driver. I used [DC Motor Drive Module](https://www.aliexpress.com/item/1005002886003476.html)

Additionally:
- Chassis for the car or 3d printed model.
- Li-Po battery 2s 7.4v

Photos:
![car](https://github.com/sky9t-sulia/remote-control-car/blob/main/images/1.jpg?raw=true)
![car esp32 placement](https://github.com/sky9t-sulia/remote-control-car/blob/main/images/2.jpg?raw=true)
![car motor placement, motor driver](https://github.com/sky9t-sulia/remote-control-car/blob/main/images/3.jpg?raw=true)

## How to connect my PS3 controller to ESP32?

You need to write MAC address of your ESP32 to PS3 controller.
More information you can find here:\
https://github.com/jvpernis/esp32-ps3?utm_source=platformio&utm_medium=piohome#pairing-the-ps3-controller

Be careful ``SixaxisPairTool`` is hard to find on internet and many of download links will download trojans.\
I added executable that works well on Windows 11.  **!!!USE IT ON YOUR OWN RISK!!!**