// Code generated by Arduino IoT Cloud, DO NOT EDIT.

#include <ArduinoIoTCloud.h>
#include <Arduino_ConnectionHandler.h>

const char SSID[]     = SECRET_SSID;    // Network SSID (name)
const char PASS[]     = SECRET_OPTIONAL_PASS;    // Network password (use for WPA, or use as key for WEP)

void onPlantSchedule1Change();
void onPlantSchedule2Change();
void onPlantSchedule3Change();
void onAutomaticModeChange();
void onRelay1Change();
void onRelay2Change();
void onRelay3Change();

int sensor_1;
int sensor_2;
int sensor_3;
CloudSchedule plant_schedule_1;
CloudSchedule plant_schedule_2;
CloudSchedule plant_schedule_3;
bool automatic_mode;
bool relay_1;
bool relay_2;
bool relay_3;

void initProperties(){

  ArduinoCloud.addProperty(sensor_1, READ, ON_CHANGE, NULL);
  ArduinoCloud.addProperty(sensor_2, READ, ON_CHANGE, NULL);
  ArduinoCloud.addProperty(sensor_3, READ, ON_CHANGE, NULL);
  ArduinoCloud.addProperty(plant_schedule_1, READWRITE, ON_CHANGE, onPlantSchedule1Change);
  ArduinoCloud.addProperty(plant_schedule_2, READWRITE, ON_CHANGE, onPlantSchedule2Change);
  ArduinoCloud.addProperty(plant_schedule_3, READWRITE, ON_CHANGE, onPlantSchedule3Change);
  ArduinoCloud.addProperty(automatic_mode, READWRITE, ON_CHANGE, onAutomaticModeChange);
  ArduinoCloud.addProperty(relay_1, READWRITE, ON_CHANGE, onRelay1Change);
  ArduinoCloud.addProperty(relay_2, READWRITE, ON_CHANGE, onRelay2Change);
  ArduinoCloud.addProperty(relay_3, READWRITE, ON_CHANGE, onRelay3Change);

}

WiFiConnectionHandler ArduinoIoTPreferredConnection(SSID, PASS);