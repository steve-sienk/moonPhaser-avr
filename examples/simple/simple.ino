#include <moonPhaser.h>

moonPhaser moonPhase; // include a MoonPhase instance

void setup() {
  Serial.begin(115200);
  Serial.println();
  Serial.println( "moonPhase simple example." );
}

void printMoon() {
  moonData_t moon;                        // variable to receive the data
  
  // January 31st, 2020 @ 1:30PM UTC
  int32_t year = 2020;
  int32_t month = 1;
  int32_t day = 31;
  double hour = 13.5;

  moon = moonPhase.getPhase(year, month, day, hour);

  Serial.print( "Moon phase angle: " );
  Serial.print( moon.angle );             // angle is a integer between 0-360
  Serial.println( " degrees." );
  Serial.print( "Moon surface lit: " );
  Serial.println( moon.percentLit * 100 );  // percentLit is a real between 0-1
}

void loop() {
  // put your main code here, to run repeatedly:
  printMoon();
  delay(5000);
}
