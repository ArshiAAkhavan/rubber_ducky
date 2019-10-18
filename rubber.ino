#include "DigiKeyboard.h"

#include <stdlib.h>

#define KEY_PrintScreen     70
#define KEY_Menu     118
#define KEY_Tab    43

void background_prank(){
DigiKeyboard.update();
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(3000);
  DigiKeyboard.sendKeyStroke(KEY_M, MOD_GUI_LEFT); //minimize all windows
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_PrintScreen); //prntscr
  DigiKeyboard.delay(50);
  DigiKeyboard.sendKeyStroke(KEY_F10, MOD_SHIFT_LEFT); //Open Menu
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(KEY_V);
  DigiKeyboard.delay(50);
  DigiKeyboard.sendKeyStroke(KEY_D);
  DigiKeyboard.delay(500); 
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT); //run
  DigiKeyboard.delay(100);
  DigiKeyboard.println("mspaint");
  DigiKeyboard.delay(1200);
  DigiKeyboard.sendKeyStroke(KEY_V, MOD_CONTROL_LEFT); //paste
  DigiKeyboard.delay(500); 
  DigiKeyboard.sendKeyStroke(KEY_S, MOD_CONTROL_LEFT); //save
  DigiKeyboard.delay(500); 
  
  DigiKeyboard.print("%userprofile%\\"); //save in users folder
  DigiKeyboard.print(48+random(1, 10)); //save in users folder
  DigiKeyboard.println(".bmp"); //save in users folder
  DigiKeyboard.delay(500);
  
  DigiKeyboard.sendKeyStroke(KEY_F, MOD_ALT_LEFT); //file
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_K); //set as desktop
  DigiKeyboard.delay(100); 
  DigiKeyboard.sendKeyStroke(KEY_T); //tile
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_F4, MOD_ALT_LEFT); //close paint
  DigiKeyboard.delay(300);
  DigiKeyboard.sendKeyStroke(KEY_M, MOD_GUI_LEFT | MOD_SHIFT_LEFT); //back to desktop as it was
 
  digitalWrite(1, HIGH); //turn on led when program finishes
  DigiKeyboard.delay(90000);
  digitalWrite(1, LOW);
  DigiKeyboard.delay(5000);
}
//char* make_path(){
//  int name=random(1000, 10000);
//  char path[1000]={"%userprofile%\\",48+random(1, 10),48+random(1, 10)};
//  int index=14;
//    t/=10;
//  }
//  return path;
//}

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
