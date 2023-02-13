#ifndef BEACON_CONFIG_H_
#define BEACON_CONFIG_H_

#define FirstUser               1           // Select the First User at Tracker Start Up (Example: 1 means User1)
#define AprsPath                "APLT00"    // APRS Destination (could be also "WIDE1-1" or even just "AP")
#define AprsOverlay             "/"
#define SendAltitude            true       // "true" adds Altitude to the APRS packet/message, "false" add Course+Speed
#define SendComment             true        // "true" adds comment to the APRS packet/message
#define AprsComment             "https://github.com/richonguzman/LoRa_1W_APRS_Tracker"   // To send this comment --> SendComment = true (edit the comment as you like)

#define User1_Callsign          "CD2RXU-7"  // This is my Callsign , so go on and change it to yours!!!
#define User1_Symbol            "["         // Runner
#define User1_SlowRate          120         // seg
#define User1_SlowSpeed         3           // km/h
#define User1_FastRate          60          // seg
#define User1_FastSpeed         15          // km/h
#define User1_MinDistTx         20          // TESTING VALUE -> should be 100mts 
#define User1_MinDeltaBcn       10          // seg between beacon update
#define User1_TurnMinDeg        3           // degrees
#define User1_TurnSlope         40          // constant

#define User2_Callsign          "CD2RXU-8"  // This is my Callsign , so go on and change it to yours!!!
#define User2_Symbol            "b"         // Bicycle
#define User2_SlowRate          120
#define User2_SlowSpeed         5
#define User2_FastRate          60
#define User2_FastSpeed         40
#define User2_MinDistTx         100
#define User2_MinDeltaBcn       12
#define User2_TurnMinDeg        12
#define User2_TurnSlope         60

#define User3_Callsign          "CD2RXU-9"  // This is my Callsign , so go on and change it to yours!!!
#define User3_Symbol            ">"         // Car
#define User3_SlowRate          120
#define User3_SlowSpeed         10
#define User3_FastRate          60
#define User3_FastSpeed         70
#define User3_MinDistTx         100
#define User3_MinDeltaBcn       8
#define User3_TurnMinDeg        10
#define User3_TurnSlope         80

uint32_t    txCommentInterval   = 120*60*1000;	// 120 min!!!
uint32_t 	tx15mInterval      	= 15*60*1000;	// 15 min!
uint32_t 	tx60mInterval  		= 60*60*1000;	// 60 min!


#endif