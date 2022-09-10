#include "Keyboard.h"

void setup() {
  Keyboard.begin();
  delay(30000); // ms till lockscreen
  Keyboard.println("");
  delay(200); // ms till password ready
  Keyboard.print("password"); // password / pincode
}

void loop() {}