#include "DigiKeyboard.h"

void test() {
  DigiKeyboard.delay(500);
  DigiKeyboard.println("Hello its me again");
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  DigiKeyboard.println("Sorry to bother you!");
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
}
void windows_powerShell() {

  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);

  DigiKeyboard.delay(500);
  DigiKeyboard.println("powershell");
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
}
void ubuntu_terminal() {
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_T , MOD_CONTROL_LEFT | MOD_ALT_LEFT);
  DigiKeyboard.delay(500);
}

void macOs_terminal() {
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_SPACE, MOD_GUI_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.print("terminal");
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000);
}

void setup()
{
//  Serial.println(random(1,10));
//  srand(time(NULL));
//  int r = rand() % 20;
  test();
  Serial.begin(9600);
  randomSeed(analogRead(0));
  DigiKeyboard.println(random(1,10));

  //  windows_powerShell();
  //  ubuntu_terminal();
  //  macOs_terminal();

}
void loop()
{
  //  test();
  background_prank();
  /* 
   */
}
