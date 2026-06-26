# RC_PLANE

TRANSMITTER WIRING DIAGRAM--

<img width="803" height="340" alt="Screenshot 2026-06-24 205755" src="https://github.com/user-attachments/assets/2331040b-b8d7-4f5c-8571-c5aca6f80b0a" />



RECEIVER WIRING DIAGRAM--

<img width="706" height="344" alt="Screenshot 2026-06-24 211623" src="https://github.com/user-attachments/assets/73f95499-4c9c-451a-b5b4-eda3f1fa5274" />







SO, As you would already have seen that the project is about a DIY RC PLANE...

**What is the RC plane?**
It is just a simple RC PLANE that i built..
It is neither inspired from any real life plane nor copied from any existing model on the internet..

**Why did you build it?**
Mainly bacause of fun but also, i saw there were little to no cheap RC PLANE BUILDS..
This build is possible with off the shelf parts and no 3D Printing..

**Parts needed**
| S.No | Component                                                         | Quantity | Unit Price (INR) | Total Price (INR) | Source            | URL                                                                                                                                                                                                                                                                                                                                                                                                                                 |
|------|-------------------------------------------------------------------|----------|------------------|-------------------|-------------------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 1    | ESP32 NodeMCU-32 WiFi Bluetooth Development Board (30-pin)        | 2        | 385              | 770               | Robocraze         | https://robocraze.com/products/nodemcu-32-wifi-bluetooth-esp32-development-board30-pin                                                                                                                                                                                                                                                                                                                                              |
| 2    | NRF24L01 2.4GHz PA LNA SMA Transceiver Wireless Module            | 2        | 140              | 280               | Electropi         | https://www.electropi.in/nrf24l01-2.4ghz-pa-lna-sma-transceiver-wireless-module-india                                                                                                                                                                                                                                                                                                                                               |
| 3    | KY023 2-Axis XY Analog Joystick Module                            | 2        | 25               | 50                | Robosap           | https://robosap.in/product/2-axis-xy-analog-joystick-module/                                                                                                                                                                                                                                                                                                                                                                        |
| 4    | 100uF Capacitor                                                   | 2        | 10               | 20                | Local Market      | —                                                                                                                                                                                                                                                                                                                                                                                                                                   |
| 5    | 100nF Capacitor                                                   | 2        | 10               | 29                | Local Market      | —                                                                                                                                                                                                                                                                                                                                                                                                                                   |
| 6    | Push Button                                                       | 2        | 15               | 30                | Local Market      | —                                                                                                                                                                                                                                                                                                                                                                                                                                   |
| 7    | LM2596 DC-DC Step-Down Converter Module                           | 2        | 50               | 100               | MakerBazar        | https://makerbazar.in/products/lm2596-dc-dc-converter-step-down-module                                                                                                                                                                                                                                                                                                                                                              |
| 8    | Samsung SDI INR18650 Li-Ion Rechargeable Cell                     | 2        | 250              | 500               | MakerBazar        | https://makerbazar.in/products/samsung-sdi-inr18650-li-ion-rechargeable-cells                                                                                                                                                                                                                                                                                                                                                       |
| 9    | 2S BMS + Charger Circuit (18650 Lithium Battery Protection Board) | 1        | 100              | 100               | MakerBazar        | https://makerbazar.in/products/18650-bms-lithium-battery-protection-board                                                                                                                                                                                                                                                                                                                                                           |
| 10   | AMS1117 3.3v                                                      | 1        | 15               | 15                | Local Market      | --                                                                                                                                                                                                                                                                                                                                                                                                                                  |
| 11   | BLDC Motor + ESC (30A)   [Combo Pack]                             | 1        | 840              | 840               | Flyrobo           | https://www.flyrobo.in/combo-kit-1000kv-brushless-motor-plus-30a-esc-plus-1045-propeller-pair?search=1000KV%20brushless%20                                                                                                                                                                                                                                                                                                          |
| 12   | Li-Po 3S Battery                                                  | 1        | 1320             | 1320              | Quartz Components | https://quartzcomponents.com/products/absd-11-1v-2200mah-3s-80c-lithium-polymer-rechargeable-battery?variant=45067667407082&country=IN&currency=INR&utm_medium=product_sync&utm_source=google&utm_content=sag_organic&utm_campaign=sag_organic&gad_source=1&gad_campaignid=21214248935&gbraid=0AAAAACPPFdO68kSluVmaytwAzNARdf62l&gclid=Cj0KCQjwo_PRBhDNARIsAEcVALUQSvqcWy8VqZv2AwrofMq3pP0tzYax-E9r3Mq10JGzEL9fffXafUwaAsunEALw_wcB |
| 13   | SG90 Servo Motor                                                  | 3        | 125              | 375               | Flyrobo           | https://www.flyrobo.in/sg90-9g-micro-pro-servo?tracking=ads&srsltid=AfmBOooEF27YZeO98kDfORXjG0tXWtosEH0iwh--SIsNX3iQvTPiinMiTGg                                                                                                                                                                                                                                                                                                     |
| 14   | Miscellaneous Items (tape/metal wire/wooden sticks/color etc)     | 1        | 450              | 450               | Local Market      | —                                                                                                                                                                                                                                                                                                                                                                                                                                   |
| 15   | LiPo Charger                                                      | 1        | 340              | 340               | FlyRobo           | https://www.flyrobo.in/imax-b3-lipo-balance-charger-for-2-3-cell-lipo-battery?tracking=ads&tracking=5a0a0a&gad_source=1&gad_campaignid=17418069736&gbraid=0AAAAAC6AkE8ARMj0v3RzYHIsjYuzfbWZx&gclid=Cj0KCQjwo_PRBhDNARIsAEcVALUvKASaG0qqdQnqrd34SGS2g2HuzRpHgTZcDCWmvrU8fjwtiQvCuVIaAhQ-EALw_wcB                                                                                                                                     |
| 16   | Hard Cardboard Ply                                                | 2        | 100              | 200               | Local Market      | ---                                                                                                                                                                                                                                                                                                                                                                                                                                 |
| 17   | Hardened Thermocol Sheet                                          | 2        | 50               | 100               | Local Market      | ---                                                                                                                                                                                                                                                                                                                                                                                                                                 |




**Step by step assembly instructions**

*These intructions can vary for your model.*
*You may refer to the youtube video by JakeMakes-* https://youtu.be/zVdXEjUrwiI?si=U4ZD6KPrB3ZJLI3x

 
Fuselage-
1) make a cuboid of (Length x Breadth x Height) of 65cm x 8cm x 7cm.
2)On one side of the cuboid (along the length), make the nose of the airplane..
3)Add a tail to the airplane of roughly 10m height.



Wings-
1)Make a 60cm x 13 cm rectangle shape out of thermocol.
2)From each side of the longer edge cut a rectangle out at a distance of 35cm..
     [Or if you didnt understood, here is a image]
     <img width="572" height="199" alt="Screenshot 2026-06-26 101207" src="https://github.com/user-attachments/assets/aaf77841-2f66-459c-a90b-c2d7fdcfcd3f" />
<img width="553" height="194" alt="Screenshot 2026-06-26 101155" src="https://github.com/user-attachments/assets/72184700-3446-49de-b32e-2c1cc6fa3081" />
3) Reattach the cut part with help of some strong tape..Remember the flap must b eable to move both up and down.

Tail Wings-
1) Similar to the wings make a rectangle of 20cm x 7cm and cut out a part for the flap..
2) similar to the wings reaatach the flap with tape leaving room for movement..


Assembly-
1)Attach the wing to the fuselage at about 17cm of distance from the extreme point of nose.
2)Secure it with rubber bands.
3)Attach the tail wings with either glue (NOT SUPER GLUE AS IT WOULD BURN THE THERMOCOL) or you can use Hot Glue..

4)Attach the Servo Motors of the wing and tail wings and make a hinge syste so that they can allow the flaps to move.
5)Attach the BLDC motor with rubber bands and place the ESC, Receiver and Batery according to the wieght distrubution, so that the plane is balanced at around the middle of wings.

6)And you are all set.

**Configure the Receiver and Transmitter**
Open the TRASMITTER code provided and set a address of your choice in the code. Remeber this address exactly.

In the reciver code, enter the same exact code.
Both the transmitter and receiver by default code are set to maximum power delivery and balanced between low latency and bandwidth.

.............................................................................................................................

<img width="519" height="322" alt="Screenshot 2026-06-26 091734" src="https://github.com/user-attachments/assets/2321360a-7c05-486b-8914-4b5b2c4349ef" />
<img width="509" height="297" alt="Screenshot 2026-06-24 192730" src="https://github.com/user-attachments/assets/bfab35bd-0a62-479f-b1fb-e2ef4ba8326f" />
<img width="356" height="314" alt="Screenshot 2026-06-24 151250" src="https://github.com/user-attachments/assets/1361f154-4149-4253-9cf8-1c8051210ee5" />
<img width="476" height="416" alt="Screenshot 2026-06-24 112642" src="https://github.com/user-attachments/assets/a95c0567-c217-49e8-b1eb-5796c30a74f4" />

