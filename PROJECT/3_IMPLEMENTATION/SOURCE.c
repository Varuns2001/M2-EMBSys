#include <IRremote.h>      
#define Next_button 60891  
#define Prev_button 49467  
#define left_button 58747  
#define right_button 15355 
#define Stop_button 7611  

int receiver_pin = 2;      

int left_motor1 = 11;     
int left_motor2 = 12;      
int right_motor1  =6;     
int right_motor2 = 5;      
IRrecv receiver(receiver_pin); 
decode_results output;

void setup() {
  Serial.begin(9600);
  receiver.enableIRIn(); 
  
  pinMode(left_motor1, OUTPUT);
  pinMode(left_motor2, OUTPUT);
  pinMode(right_motor1, OUTPUT);
  pinMode(right_motor2, OUTPUT);
}

void loop() {
  if (receiver.decode(&output)) {
    unsigned int value = output.value;
    switch(value) {
      case Next_button:
           digitalWrite(left_motor1,LOW);
           digitalWrite(left_motor2,HIGH);
           digitalWrite(right_motor1,HIGH);
           digitalWrite(right_motor2,LOW);
           break;
      case Prev_button:
           digitalWrite(left_motor1,HIGH);
           digitalWrite(left_motor2,LOW);
           digitalWrite(right_motor1,LOW);
           digitalWrite(right_motor2,HIGH);
           break;
      case left_button: 
           digitalWrite(left_motor1,LOW);
           digitalWrite(left_motor2,HIGH);
           digitalWrite(right_motor1,HIGH);
           digitalWrite(right_motor2,HIGH);
           break;
      case right_button:
           digitalWrite(left_motor1,HIGH);
           digitalWrite(left_motor2,HIGH);
           digitalWrite(right_motor1,HIGH);
           digitalWrite(right_motor2,LOW);
           break;
      case Stop_button:
           digitalWrite(left_motor1,LOW);
           digitalWrite(left_motor2,LOW);
           digitalWrite(right_motor1,LOW);
           digitalWrite(right_motor2,LOW);
           break;
    }
    receiver.resume();
  }
}
