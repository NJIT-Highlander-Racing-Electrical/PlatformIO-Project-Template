/**********************************************
 * NJIT Highlander Racing
 * PROJECT NAME
 * Author(s): First Last
 * 2025-2026 Season
 **********************************************/

#include <Arduino.h>
// The current version of the CAN Bus library includes a watchdog timer that reboots the ESP=32 after ~5 seconds if it cannot find any CAN modules to connect to. Keep the include statement commented out unless a physical connection to other CAN modules is present.
// #include "BajaCAN.h"

// put function declarations here:
int myFunction(int, int);

void setup() {
  // put your setup code here, to run once:
  int result = myFunction(2, 3);
}

void loop() {
  // put your main code here, to run repeatedly:

  // setupCAN(/* device name */);
}

// put function definitions here:
int myFunction(int x, int y) {
  return x + y;
}