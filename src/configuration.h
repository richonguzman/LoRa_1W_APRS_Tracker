#ifndef CONFIGURATION_H_
#define CONFIGURATION_H_

#include <iterator>
#include <list>

#include <Arduino.h>

class Configuration {
public:
  class Beacon {
  public:
    class Smart_Beacon {
    public:
      Smart_Beacon() : active(false), turn_min(25), slow_rate(300), slow_speed(10), fast_rate(60), fast_speed(100), min_tx_dist(100), min_bcn(5) {
      }

      bool active;
      int  turn_min;
      int  slow_rate;
      int  slow_speed;
      int  fast_rate;
      int  fast_speed;
      int  min_tx_dist;
      int  min_bcn;
    };

    Beacon() : callsign("NOCALL-10"), path("WIDE1-1"), message("LoRa Tracker"), timeout(1), symbol("["), overlay("/"), enhance_precision(true) {
    }

    String       callsign;
    String       path;
    String       message;
    int          timeout;
    String       symbol;
    String       overlay;
    Smart_Beacon smart_beacon;
    bool         enhance_precision;
  };

  /*class LoRa {
  public:
    LoRa() : frequencyRx(433775), frequencyTx(433775), power(20), spreadingFactor(12), signalBandwidth(125), codingRate4(5) {
    }

    long frequencyRx;
    long frequencyTx;
    int  power;
    int  spreadingFactor;
    long signalBandwidth;
    int  codingRate4;
  };

  class Button {
  public:
    Button() : tx(false), alt_message(false) {
    }

    bool tx;
    int  alt_message;
  };
  */
  
  Configuration() : debug(false) {
  }

  bool              debug;
  std::list<Beacon> beacons;
  //LoRa              lora;
  //Button            button;
  
};

class ConfigurationManagement {
public:
  explicit ConfigurationManagement(String FilePath);

  Configuration readConfiguration();
  void          writeConfiguration(Configuration conf);

private:
  const String mFilePath;
};

#endif