#include <Mouse.h>


void setup() {
  //Initiate mouse
  Mouse.begin();
  
}

void loop() {
  //Move mouse down 20 pixels
  Mouse.move(20,0);
  
  //delay 1000 millisecondes(1 second)
  delay(1000);

  //Move mouse left 20 pixels
  Mouse.move(0,20);
  
  //delay 1000 millisecondes(1 second)
  delay(1000);
  
  //Move mouse back to initiale position
  Mouse.move(-20,0);
  delay(1000);
  Mouse.move(0,-20);
}