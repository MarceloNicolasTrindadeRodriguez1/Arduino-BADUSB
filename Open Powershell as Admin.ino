#include <Keyboard.h>

void setup() {
  Keyboard.begin();
  delay(3000);
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.release(KEY_LEFT_GUI);
  Keyboard.release('r');
  delay(50);
  Keyboard.println("powershell.exe -command start-process powershell -verb runAs"); 
  delay(2000);

  Keyboard.press(KEY_LEFT_ARROW); 
  Keyboard.release(KEY_LEFT_ARROW); 
  Keyboard.press(KEY_RETURN); 
  Keyboard.release(KEY_RETURN);
  Keyboard.end();

}

void loop() {
  // put your main code here, to run repeatedly:

}
