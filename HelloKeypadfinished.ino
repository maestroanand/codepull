/* @file HelloKeypad.pde
  || @version 1.0
  || @author Alexander Brevig
  || @contact alexanderbrevig@gmail.com
  ||
  || @description
  || | Demonstrates the simplest use of the matrix Keypad library.
  || #
*/

//developed by ANAND
#include <LiquidCrystal.h>
#include <Keypad.h>
unsigned long myTime;
int ON = 11;
int OFF = 10;
int count = 0;
int i = 0;
int key1 = 0;
int t1 ;
int t2 ;
LiquidCrystal lcd(A0, A1, A2, A3, A4, A5);

const byte ROWS = 4; //four rows
const byte COLS = 3; //three columns
char keys[ROWS][COLS] = {
  {'7', '8', '8'},
  {'4', '5', '6'},
  {'1', '2', '3'},
  {'*', '0', '#'}
};
byte rowPins[ROWS] = {5, 4, 3, 2}; //connect to the row pinouts of the keypad
byte colPins[COLS] = {8, 7, 6}; //connect to the column pinouts of the keypad

Keypad keypad = Keypad( makeKeymap(keys), rowPins, colPins, ROWS, COLS );

String inputString;
long inputInt;

void setup() {
  pinMode(ON, OUTPUT);
  pinMode(OFF, OUTPUT);
  Serial.begin(9600);
  lcd.begin(16, 2);
  // inputString.reserve(10);
}







void    newFunction(){
     
      
      digitalWrite(ON, HIGH);
      delay(t1);
      digitalWrite(ON, LOW);


      digitalWrite(OFF, HIGH);
      delay(t2);
      digitalWrite(OFF, LOW);
    
    }

void loop() {
  myTime = millis();
  int   bigb = myTime;

  char key = keypad.getKey();

  /*
      digitalWrite(ON, HIGH);
      delay(3000);
      digitalWrite(ON, LOW);

      digitalWrite(OFF, HIGH);
      delay(3000);
      digitalWrite(OFF, LOW);
  */




  if (key ) {
    lcd.print(key);

    key1 = key1 * 10 + key-'0';
   t1 =  key1;
   t2 = 3000-t1;

   

  if(bigb>1000 ){
    newFunction();
    }

   
    

   
    

  








    /* if (key >= '0' && key <= '9') {     // only act on numeric keys
       inputString += key;

      // append new character to input string
      } else if (key == '#') {
       if (inputString.length() > 0) {
         inputInt = inputString.toInt(); // YOU GOT AN INTEGER NUMBER
         inputString = "";               // clear input
         // DO YOUR WORK HERE

       }
      } else if (key == '*') {
       inputString = "";                 // clear input
      } */

  }



}
