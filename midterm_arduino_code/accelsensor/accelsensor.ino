#include <Adafruit_LSM303_Accel.h>
#include <Adafruit_Sensor.h>
#include <Wire.h>

#include <Adafruit_NeoPixel.h>
#ifdef __AVR__
#include <avr/power.h>
#endif

int ledPin = 8;

/* Assign a unique ID to this sensor at the same time */
Adafruit_LSM303_Accel_Unified accel = Adafruit_LSM303_Accel_Unified(54321);

Adafruit_NeoPixel strip = Adafruit_NeoPixel(4, ledPin, NEO_GRB + NEO_KHZ800);


void displaySensorDetails(void) {
  sensor_t sensor;
  accel.getSensor(&sensor);
  Serial.println("------------------------------------");
  Serial.print("Sensor:       ");
  Serial.println(sensor.name);
  Serial.print("Driver Ver:   ");
  Serial.println(sensor.version);
  Serial.print("Unique ID:    ");
  Serial.println(sensor.sensor_id);
  Serial.print("Max Value:    ");
  Serial.print(sensor.max_value);
  Serial.println(" m/s^2");
  Serial.print("Min Value:    ");
  Serial.print(sensor.min_value);
  Serial.println(" m/s^2");
  Serial.print("Resolution:   ");
  Serial.print(sensor.resolution);
  Serial.println(" m/s^2");
  Serial.println("------------------------------------");
  Serial.println("");
  delay(100);
}

void setup(void) {
  
  pinMode(ledPin,OUTPUT);
  
#ifndef ESP8266
  while (!Serial); // will pause Zero, Leonardo, etc until serial console opens
#endif
  Serial.begin(9600);
  Serial.println("Accelerometer Test");
  Serial.println("");

  /* Initialise the sensor */
  if (!accel.begin()) {
    /* There was a problem detecting the ADXL345 ... check your connections */
    Serial.println("Ooops, no LSM303 detected ... Check your wiring!");
    while (1)
      ;
  }

  /* Display some basic information on this sensor */
  displaySensorDetails();

  accel.setRange(LSM303_RANGE_4G);
  Serial.print("Range set to: ");
  lsm303_accel_range_t new_range = accel.getRange();
  switch (new_range) {
  case LSM303_RANGE_2G:
    Serial.println("+- 2G");
    break;
  case LSM303_RANGE_4G:
    Serial.println("+- 4G");
    break;
  case LSM303_RANGE_8G:
    Serial.println("+- 8G");
    break;
  case LSM303_RANGE_16G:
    Serial.println("+- 16G");
    break;
  }

  accel.setMode(LSM303_MODE_NORMAL);
  Serial.print("Mode set to: ");
  lsm303_accel_mode_t new_mode = accel.getMode();
  switch (new_mode) {
  case LSM303_MODE_NORMAL:
    Serial.println("Normal");
    break;
  case LSM303_MODE_LOW_POWER:
    Serial.println("Low Power");
    break;
  case LSM303_MODE_HIGH_RESOLUTION:
    Serial.println("High Resolution");
    break;
  }
}

void loop(void) {
  /* Get a new sensor event */
  sensors_event_t event;
  accel.getEvent(&event);

  /* Display the results (acceleration is measured in m/s^2) */

  int PosX = map(event.acceleration.x, -20, 20, -100, 100);
  int PosY = map(event.acceleration.y, -20, 20, -100, 100);
  int PosZ = map(event.acceleration.z, -20, 20, -100, 100);
  
  Serial.print("X: ");
  Serial.print(PosX);
  Serial.print("  ");
  Serial.print("Y: ");
  Serial.print(PosY);
  Serial.print("  ");
  Serial.print("Z: ");
  Serial.print(PosZ);
  Serial.print("  ");
  Serial.println("m/s^2");



  if (PosY < 30){      
      colorWipe(strip.Color(255, 137, 0), 50);
  }
  else{
      colorWipe(strip.Color(0, 0, 0), 50);
  } 


}

// Fill the dots one after the other with a color
void colorWipe(uint32_t c, uint8_t wait) {
  for(uint16_t i=0; i<strip.numPixels(); i++) {
    strip.setPixelColor(i, c);
    strip.show();
    delay(wait);
  }
  }
