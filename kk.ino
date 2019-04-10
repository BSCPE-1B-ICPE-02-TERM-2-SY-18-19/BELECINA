#include <Keypad.h>
#include "primcheck.h"

class baybayin{
  public:
  void kpadsetup();
  void setup();
  void led();
  void loop();
  void work();
};


void baybayin::kpadsetup(){
const byte ROWS = 4; //four rows
const byte COLS = 4; //four columns
//define the cymbols on the buttons of the keypads
char keys[ROWS][COLS] = {
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}
};
byte rowPins[ROWS] = {9, 8, 7, 6}; //connect to the row pinouts of the keypad
byte colPins[COLS] = {5, 4, 3, 2}; //connect to the column pinouts of the keypad

//initialize an instance of class NewKeypad
Keypad keypad = Keypad( makeKeymap(keys), rowPins, colPins, ROWS, COLS); 
}

void baybayin::setup(){
  Serial.begin(9600);
  pinMode(22, OUTPUT);
  pinMode(24, OUTPUT);
  pinMode(26, OUTPUT);
  pinMode(28, OUTPUT);
  pinMode(30, OUTPUT);
  pinMode(32, OUTPUT);
  pinMode(34, OUTPUT);
  pinMode(36, OUTPUT);
  pinMode(38, OUTPUT);
  pinMode(40, OUTPUT);
  pinMode(42, OUTPUT);
  pinMode(44, OUTPUT);
  pinMode(46, OUTPUT);
  pinMode(48, OUTPUT);
  pinMode(50, OUTPUT);
  pinMode(31, OUTPUT);
  pinMode(33, OUTPUT);
  pinMode(35, OUTPUT);
  pinMode(37, OUTPUT);
  pinMode(39, OUTPUT);
  pinMode(41, OUTPUT);
  pinMode(43, OUTPUT);
  pinMode(45, OUTPUT);
  pinMode(47, OUTPUT);
  pinMode(49, OUTPUT);
}
 
 int num=0;

void baybayin::loop(){
  char key = keypad.getKey();
  if (key=='A'){
    work();
  }
  if (key=='1'){
    num=(num*10)+1;
  }
  if(key=='2'){
    num=(num*10)+2;
  }
   if(key=='3'){
    num=(num*10)+3;
  }
  if (key=='4'){
    num=(num*10)+4;
  }
  if(key=='5'){
    num=(num*10)+5;
  }
   if(key=='6'){
    num=(num*10)+6;
  }
  if (key=='7'){
    num=(num*10)+7;
  }
  if(key=='8'){
    num=(num*10)+8;
  }
   if(key=='9'){
    num=(num*10)+9;
  }
   if(key=='0'){
    num=(num*10)+0;
  }
   if(key=='D'){
    num=(num/10);
  }
  if(key=='C'){
        digitalWrite(22,LOW);
        digitalWrite(24,LOW);
        digitalWrite(26,LOW);
        digitalWrite(28,LOW);
        digitalWrite(30,LOW);
        digitalWrite(32,LOW);
        digitalWrite(34,LOW);
        digitalWrite(36,LOW);
        digitalWrite(38,LOW);
        digitalWrite(40,LOW);
        digitalWrite(42,LOW);
        digitalWrite(44,LOW);
        digitalWrite(46,LOW);
        digitalWrite(48,LOW);
        digitalWrite(50,LOW);
        digitalWrite(31,LOW);
        digitalWrite(33,LOW);
        digitalWrite(35,LOW);
        digitalWrite(37,LOW);
        digitalWrite(39,LOW);
        digitalWrite(41,LOW);
        digitalWrite(43,LOW);
        digitalWrite(45,LOW);
        digitalWrite(47,LOW);
        digitalWrite(49,LOW);
    num=0;
  }
}

void baybayin::led(){
  //A
          digitalWrite(22, HIGH);
          digitalWrite(24, HIGH);
          digitalWrite(28, HIGH);
          digitalWrite(32, HIGH);
          digitalWrite(34, HIGH);
          digitalWrite(36, HIGH);
          digitalWrite(38, HIGH);
          digitalWrite(40, HIGH);
          digitalWrite(50, HIGH);
          digitalWrite(39, HIGH);
          digitalWrite(49, HIGH);
          digitalWrite(47, HIGH);
          digitalWrite(45, HIGH); 

          delay(1000);      
          digitalWrite(22, LOW);
          digitalWrite(24, LOW);
          digitalWrite(28, LOW);
          digitalWrite(32, LOW);
          digitalWrite(34, LOW);
          digitalWrite(36, LOW);
          digitalWrite(38, LOW);
          digitalWrite(40, LOW);
          digitalWrite(50, LOW);
          digitalWrite(39, LOW);
          digitalWrite(49, LOW);
          digitalWrite(47, LOW);
          digitalWrite(45, LOW);

//E/I
          delay(1000);

          digitalWrite(24, HIGH);
          digitalWrite(34, HIGH);
          digitalWrite(44, HIGH);
          digitalWrite(33, HIGH);
          digitalWrite(43, HIGH);
          digitalWrite(38, HIGH);
          digitalWrite(36, HIGH);
          digitalWrite(48, HIGH);
          digitalWrite(35, HIGH);
          digitalWrite(37, HIGH);
          digitalWrite(47, HIGH);

          delay(1000);      
          digitalWrite(24, LOW);
          digitalWrite(34, LOW);
          digitalWrite(44, LOW);
          digitalWrite(33, LOW);
          digitalWrite(43, LOW);
          digitalWrite(38, LOW);
          digitalWrite(36, LOW);
          digitalWrite(48, LOW);
          digitalWrite(35, LOW);
          digitalWrite(37, LOW);
          digitalWrite(47, LOW);
//O/U
          delay(1000);

          digitalWrite(22, HIGH);
          digitalWrite(32, HIGH);
          digitalWrite(42, HIGH);
          digitalWrite(31, HIGH);
          digitalWrite(41, HIGH);
          digitalWrite(43, HIGH);
          digitalWrite(45, HIGH);
          digitalWrite(47, HIGH);
          digitalWrite(49, HIGH);
          digitalWrite(30, HIGH);
          digitalWrite(40, HIGH);
          digitalWrite(50, HIGH);
          digitalWrite(39, HIGH); 
          digitalWrite(36, HIGH);
          digitalWrite(46, HIGH);
          digitalWrite(35, HIGH); 
          
          delay(1000);

          digitalWrite(22, LOW);
          digitalWrite(32, LOW);
          digitalWrite(42, LOW);
          digitalWrite(31, LOW);
          digitalWrite(41, LOW);
          digitalWrite(43, LOW);
          digitalWrite(45, LOW);
          digitalWrite(47, LOW);
          digitalWrite(49, LOW);
          digitalWrite(30, LOW);
          digitalWrite(40, LOW);
          digitalWrite(50, LOW);
          digitalWrite(39, LOW); 
          digitalWrite(36, LOW);
          digitalWrite(46, LOW);
          digitalWrite(35, LOW); 
//BA          
          delay(1000);
          digitalWrite(26, HIGH);
          digitalWrite(28, HIGH);
          digitalWrite(30, HIGH);
          digitalWrite(34, HIGH);
          digitalWrite(40, HIGH);
          digitalWrite(42, HIGH);
          digitalWrite(48, HIGH);
          digitalWrite(33, HIGH);
          digitalWrite(39, HIGH);
          digitalWrite(45, HIGH);
          digitalWrite(47, HIGH);
          digitalWrite(49, HIGH);

          delay(1000);
          digitalWrite(26, LOW);
          digitalWrite(28, LOW);
          digitalWrite(30, LOW);
          digitalWrite(34, LOW);
          digitalWrite(40, LOW);
          digitalWrite(42, LOW);
          digitalWrite(48, LOW);
          digitalWrite(33, LOW);
          digitalWrite(39, LOW);
          digitalWrite(45, LOW);
          digitalWrite(47, LOW);
          digitalWrite(49, LOW);
          
//KA 
          delay(1000);
          digitalWrite(26, HIGH);
          digitalWrite(30, HIGH);
          digitalWrite(34, HIGH);
          digitalWrite(38, HIGH);
          digitalWrite(44, HIGH);
          digitalWrite(46, HIGH);
          digitalWrite(48, HIGH);
          digitalWrite(33, HIGH);
          digitalWrite(39, HIGH);
          digitalWrite(45, HIGH);
          digitalWrite(47, HIGH);
          digitalWrite(49, HIGH);

          delay(1000);
          digitalWrite(26, LOW);
          digitalWrite(30, LOW);
          digitalWrite(34, LOW);
          digitalWrite(38, LOW);
          digitalWrite(44, LOW);
          digitalWrite(46, LOW);
          digitalWrite(48, LOW);
          digitalWrite(33, LOW);
          digitalWrite(39, LOW);
          digitalWrite(45, LOW);
          digitalWrite(47, LOW);
          digitalWrite(49, LOW);         

          delay(1000);
//DA
          digitalWrite(22, HIGH);
          digitalWrite(32, HIGH);
          digitalWrite(34, HIGH);
          digitalWrite(36, HIGH);
          digitalWrite(38, HIGH);
          digitalWrite(40, HIGH);
          digitalWrite(42, HIGH);
          digitalWrite(50, HIGH);
          digitalWrite(31, HIGH);
          digitalWrite(39, HIGH);
          digitalWrite(41, HIGH);
          digitalWrite(49, HIGH);

          delay(1000);
          digitalWrite(22, LOW);
          digitalWrite(32, LOW);
          digitalWrite(34, LOW);
          digitalWrite(36, LOW);
          digitalWrite(38, LOW);
          digitalWrite(40, LOW);
          digitalWrite(42, LOW);
          digitalWrite(50, LOW);
          digitalWrite(31, LOW);
          digitalWrite(39, LOW);
          digitalWrite(41, LOW);
          digitalWrite(49, LOW);   

//GA
          delay(1000);
          digitalWrite(22, HIGH);
          digitalWrite(26, HIGH);
          digitalWrite(30, HIGH);
          digitalWrite(32, HIGH);
          digitalWrite(36, HIGH);
          digitalWrite(40, HIGH);
          digitalWrite(42, HIGH);
          digitalWrite(44, HIGH);
          digitalWrite(46, HIGH);
          digitalWrite(48, HIGH);
          digitalWrite(50, HIGH);
          digitalWrite(33, HIGH);
          digitalWrite(43, HIGH);
          digitalWrite(45, HIGH);
          digitalWrite(47, HIGH);
          delay(1000);
          digitalWrite(22, LOW);
          digitalWrite(26, LOW);
          digitalWrite(30, LOW);
          digitalWrite(32, LOW);
          digitalWrite(36, LOW);
          digitalWrite(40, LOW);
          digitalWrite(42, LOW);
          digitalWrite(44, LOW);
          digitalWrite(46, LOW);
          digitalWrite(48, LOW);
          digitalWrite(50, LOW);
          digitalWrite(33, LOW);   
          digitalWrite(43, LOW);
          digitalWrite(45, LOW);
          digitalWrite(47, LOW); 

//HA
          delay(1000);
          digitalWrite(28, HIGH);
          digitalWrite(36, HIGH);
          digitalWrite(46, HIGH);
          digitalWrite(35, HIGH);
          digitalWrite(43, HIGH);
          delay(1000);
          digitalWrite(28, LOW);
          digitalWrite(36, LOW);
          digitalWrite(46, LOW);
          digitalWrite(35, LOW);
          digitalWrite(43, LOW);   
}


 
void work(){
    PrimeCheck foo;
    foo.GetInput();
    foo.output();
}
