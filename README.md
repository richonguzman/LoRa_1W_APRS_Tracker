# LORA (1 Watt Module) APRS Tracker

This LORA APRS Tracker will work with very cheep hardware (amazon, ebay or aliexpress):
- ESP32 ( ESP32 Dev Module)
- Ebyte E22 400M30S (1 Watt (30dB) Lora SPI Module)
- GY-GPSNEO6MV2 (NEO6M GPS Module)

This project uses Enconded APRS GPS packet to extends range by saving bytes (increased battery life, higher chances of good packet reception (increased range), lower probability of packet collisions (more channel capacity) and 1 Watt LoRa Module (over the usual 0.1 Watt in commercial boards like the LILYGO T-Beam V.1).

_____________________________________________________________________________

Achievements:

- configurations saved on ESP32 memory (SPIFFS).
- changing CALLSINGs with the "long" push of a button.
- custom smartbeacon values for each CALLSIGN
- force Tx with the "short" push of a button.
- send enconded GPS data packet for shorter and realiable comunication.

To add (shortly) aka "working on it" :
- turn_slope for course angle smartbeacon
- oled screen (allready bought ... and waiting..  )
- SendAltitude: encoded instead of just "Course+Speed" without adding lenght to the APRS packet.
- SendComment: for a GPS position or distance to certain GPS point
- Send Status: for a GPS position or distance to certain GPS point
- Send Message to anothe APRS capable Radio/Handy/tracker/iGate or even Twitter ;)
- Battery Monitoring (voltage, consumption, low_battery warning, charging?)


_____________________________________________________________________________
This Repository is based on lots of other Lora APRS Tracker ideas like:

- https://github.com/lora-aprs/LoRa_APRS_Tracker      (the start with LILYGO T-BEAM v.1)
- https://github.com/aprs434/lora.tracker             (the great encoding position modification)
- https://github.com/Mane76/lora.tracker              (great ideas about changing callsign and other mods)
- https://github.com/sh123/esp32_loraprs              (inspiration for accesing the Lora Module with Radiolib library)
_____________________________________________________________________________



things to do (also):
- add wiki 
- add translation to Spanish (and German?)
- add schematic for the wiring
- add info of 5V DC stepup and charging battery
- add photos of prototipe
- add PCB (with eagle and gerber)
