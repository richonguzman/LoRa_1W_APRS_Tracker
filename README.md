# LORA (1 Watt Module) APRS Tracker

This LORA APRS Tracker will work with very cheep hardware (amazon, ebay or aliexpress):
- ESP32 -->( ESP32 Dev Module)
- Ebyte E22 400M30S --> (1 Watt (30dB) Lora SPI Module)
- GY-GPSNEO6MV2 --> (NEO6M GPS Module)

This project uses Enconded APRS GPS packet to extends range by saving bytes (increased battery life, higher chances of good packet reception (increased range), lower probability of packet collisions (more channel capacity) and 1 Watt LoRa Module (over the usual 0.1 Watt in commercial boards like the LILYGO T-Beam V.1).

______________________________________________________________________

Achievements:

- force Tx with the "short" push of a button.
- changing CALLSINGs with the "long" push of a button.
- custom smartbeacon values for each CALLSIGN
- send enconded GPS data packet for shorter and realiable comunication.
- Select to send "Course + Speed" or "Altitude + Speed" in encoded APRS data packet.
- Use SmartBeacon with "Turn_Min + Turn_Slope" formula.
- Smartbeacon now sends packet normally when moving, once per 15min (first hour) when standing still and then only one packet per hour (not sending beacons = saving battery + less innecesary packets on Air)

To add (shortly) working on it

- oled screen (allready bought ... and waiting..  )
- SendComment: for a GPS position or distance to certain GPS point
- Send Status: for a GPS position or distance to certain GPS point
- Send Message to anothe APRS capable Radio/Handy/tracker/iGate or even Twitter ;)
- Battery Monitoring (voltage, consumption, low_battery warning, charging?)

______________________________________________________________________
This Repository is based on lots of other Lora APRS Tracker ideas like:

- https://github.com/lora-aprs/LoRa_APRS_Tracker      (the start with LILYGO T-BEAM v.1)
- https://github.com/aprs434/lora.tracker             (the great encoding position modification)
- https://github.com/Mane76/lora.tracker              (great ideas about changing callsign and other mods)
- https://github.com/sh123/esp32_loraprs              (inspiration for accesing the Lora Module with Radiolib library)
______________________________________________________________________

things to do (also):
- add wiki 
- add translation to Spanish (and German?)
- add schematic for the wiring
- add info of 5V DC stepup and charging battery
- add photos of prototipe
- add PCB (with eagle and gerber)
