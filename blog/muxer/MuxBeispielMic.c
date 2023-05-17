#pragma config(Sensor, S1,     ,               sensorEV3_GenericI2C)

#include "mindsensors-ev3smux.h"


// The SMUX can have up to 3 sensors attached to it.
tMSEV3 muxer1[3];
tEV3SensorTypeMode muxer1Modes[3] = {colorMeasureColor, colorMeasureColor, colorMeasureColor};

/* POSSIBLE SENSOR-TYPES:
****************************
colorReflectedLight	-> done
colorAmbientLight	-> done
colorMeasureColor	-> done
****************************
gyroAngle		-> done
gyroRate		-> done
****************************
infraRedProximity	-> todo
infraRedBeacon		-> todo
infraRedRemote		-> todo
****************************
sonarCM			-> done
sonarPresence		-> done
****************************
touchStateBump		-> done
****************************/

// Call once to initiate a mutliplexer with its given modes, nothing special.
// Return value indicates whether or not the initialization was successfull or not.
bool initMuxerWithModes(tMSEV3 *muxer, tEV3SensorTypeMode *mode) {
	return initSensor(&muxer[0], msensor_S1_1, mode[0]) && initSensor(&muxer[1], msensor_S1_2, mode[1]) && initSensor(&muxer[2], msensor_S1_3, mode[2]);
}

// This actually measures/grabs/reads sensor data.
// Every time you want your sensors to measure new data, this has to be manually called!
// But: I already call this in my custom get methods that return the specified value,
// so you only need to use this method if you dont use my methods.
bool measureAllMuxerValues(tMSEV3 *muxer) {
	return readSensor(&muxer[0]) && readSensor(&muxer[1]) && readSensor(&muxer[2]);
}

//**********
// GETTER METHODS FOR READING MUXERS SENSORS:
//**********

/*
To get the readings of a sensor on the multiplexer you effectively have 2 options:
	1. Read it directly with i.e muxer[port].color
	   TODO: List what attributes there are.
	   BUT: You have to manually tell the sensor to read new values, either
	   with my measureAllMuxerValues or manually with the readSensor method used in there.
	2. Use one of my custom methods below. They are more like the natural language
	   of robotC. In addition, they internally measure new sensor data before reading
	   them, so you dont have to worry about updating the sensors by hand.
*/

// Possible attributes for manually grabbing sensor data:
/*bool touch;
  short bumpCount;
  short light;
  short color;
  short angle;
  short rate;
  short distance;
  short beaconProx[4];
  short beaconHeading[4];
  short remote[4];
  bool presence;*/

// Returns the color code for the sensor PORT of muxer MUXER, nothing fancy here.
// Also updates sensor values before reading for ease of use.
// TODO: Find out what int is what color!
short getMuxColor(tMSEV3 *muxer, short port) {
	measureAllMuxerValues(muxer);
	return muxer[port].color;
}

// Returns the light value of the sensor PORT of muxer MUXER.
// Also updates sensor values before reading for ease of use.
// Same as ambient, but for easier use have both methods
short getMuxReflectedLight(tMSEV3 *muxer, short port) {
	measureAllMuxerValues(muxer);
	return muxer[port].light;
}

// Same as reflected, but for easuer use have both methods
short getMuxAmbientLight(tMSEV3 *muxer, short port) {
	measureAllMuxerValues(muxer);
	return muxer[port].light;
}

// Returns the measured angle value of the gyro sensor on PORT of MUXER
// The gyro only has 1 axis, so the angle comes of that
// NOTE: Maybe dont use this, the it seems to be difficult to use...
short getMuxGyroAngle(tMSEV3 *muxer, short port) {
	measureAllMuxerValues(muxer);
	return muxer[port].angle;
}

// Returns the measured rate of the gyro sensor
// NOTE: Same as above, seems to be unstable
short getMuxGyroRate(tMSEV3 *muxer, short port) {
	measureAllMuxerValues(muxer);
	return muxer[port].rate;
}

// Returns whether or not the touch sensor on PORT of MUXER is pressed.
bool getMuxTouchPressed(tMSEV3 *muxer, short port) {
	measureAllMuxerValues(muxer);
	return muxer[port].touch;
}

// Returns the measures distance in cm of ultra-sonic sensor
// on PORT of MUXER. Correct mode for this would be sonarCM
short getMuxSonarDistance(tMSEV3 *muxer, short port) {
	measureAllMuxerValues(muxer);
	return muxer[port].distance;
}

// Returns the "presence" reading of ultrasonic sensor on PORT
// of MUXER.
bool getMuxSonarPresence(tMSEV3 *muxer, short port) {
	measureAllMuxerValues(muxer);
	return muxer[port].presence;
}

// I dont really understand the infrared stuff and since we didnt use them much so far
// I didnt implement custom getter methods for them.
// TODO

// *********************************
// Example 1: Manually reading and getting sensor data
// *********************************
void example1() {
	// Either use my measure method
	measureAllMuxerValues(muxer1);
	// Or manually measure them
	readSensor(&muxer1[0]);
	readSensor(&muxer1[1]);
	readSensor(&muxer1[2]);

	// This is how to "manually" get the color value of the sensors
	int color0 = muxer1[0].color;
	int color0 = muxer1[1].color;
	int color0 = muxer1[2].color;

	displayTextLine(1*0 + 1, "Color: %d", color0);
	displayTextLine(1*1 + 1, "Color: %d", color1);
	displayTextLine(1*2 + 1, "Color: %d", color2);
}

// *********************************
// Example 2: Using my custom methods
// *********************************
void example2() {
	// Reading sensor values is as easy as that:
	int color0 = getMuxColor(muxer1, 0);
	int color1 = getMuxColor(muxer1, 1);
	int color2 = getMuxColor(muxer1, 2);

	displayTextLine(1*0 + 1, "Color: %d", color0);
	displayTextLine(1*1 + 1, "Color: %d", color1);
	displayTextLine(1*2 + 1, "Color: %d", color2);
}


// Example usage
task main() {
  displayCenteredTextLine(0, "Mindsensors");
  displayCenteredBigTextLine(1, "EV3 SMUX");
  displayCenteredTextLine(3, "Test 1");
  sleep(2000);
  eraseDisplay();

  // This needs to be done once at the start for every connected mutliplexer!
  // Just sets everything up...
  initMuxerWithModes(muxer1, muxer1Modes);

  while (true) {

	example1();
	// example2();

  	sleep(100);
  }
}
