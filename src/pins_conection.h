#ifndef PINS_H_
#define PINS_H_

#define GPS_TXD     16      // Conection Pinout for GPS
#define GPS_RXD     17
/*
GPS NEO-6M v.2----> ESP32
VCC					3.3V
GND					GND
TXD					16
RXD					17
*/

#define NSS         5           // Conection Pinout Ebyte E22 400M30S LoRa Module
#define DIO1        12
#define NRST        27
#define BUSY        14
#define RXEN        32
#define TXEN        25
/*
400M30S-------------------> ESP32
1-2-3-4-5-11-12-20-22 		GND
6 RXEN						32
7 TXEN						25
8 X (not connected)         -
9-10						5V      add 100uf (electro) + 100nF (polyester) from 5V to ground near pin 9-10
13 DIO1						12
14 BUSY						14
15 NRST						27
16 MISO						19
17 MOSI						23
18 SCK						18
19 NSS						5
21 ANTENA
*/

#define LED_BUILTIN 2       // Blue Led ESP32 Pin

#define BUTTON1_PIN 15      // Forced Beacon Tx (Switch pin1 to pin 15 , Swith pin2 to 220 ohms resistor to GND)

#endif