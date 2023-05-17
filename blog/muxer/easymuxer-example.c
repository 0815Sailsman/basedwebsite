#pragma config(Sensor, S1,     ,               sensorEV3_GenericI2C)

#include "mindsensors-ev3smux.h"
// This is probably bad C code. But I am not a good C Developer, so I dont care :)
#include "easymuxer.c";

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
