# Remote Control Car

Remote controlled car using ESP32 and PS3 controller.

Requirements:

- Any [ESP32](https://www.aliexpress.com/item/1005005246146177.html) board with bluetooth support.
- 1 Positional rotation Servo. I used [SG92R](https://www.aliexpress.com/item/4000844077554.html).
- 2 DC motors. I used [N60 (3V-6V)](https://www.aliexpress.com/item/32472051974.html) 12x30mm with 5mm shaft.

Additionally:
- 4 wheels. I used [N20 44mm](https://www.aliexpress.com/item/1005004835223674.html)
- Chassis for the car itself. 

3d print model should available by this link: (ADD LINK HERE)


## How to connect my PS3 controller to ESP32?

You need to write MAC address of your ESP32 to PS3 controller.
More information you can find here:\
https://github.com/jvpernis/esp32-ps3?utm_source=platformio&utm_medium=piohome#pairing-the-ps3-controller

Be careful ``SixaxisPairTool`` is hard to find on internet and many of download links will download trojans.\
I added executable that works well on Windows 11.  **!!!USE IT ON YOUR OWN RISK!!!**