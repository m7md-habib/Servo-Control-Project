
#include <Servo.h>
Servo servo1;
Servo servo2;  
Servo servo3;  
Servo servo4;  


int pos = 0;    

void setup() {
  servo1.attach(10);
  servo2.attach(11);
  servo3.attach(12);
  servo4.attach(13);
}

void loop() {
  for (pos = 0; pos <= 180; pos += 1) { 
    
    servo1.write(pos);              
    delay(10); 
    servo2.write(pos);              
    delay(10); 
    servo3.write(pos);              
    delay(10); 
    servo4.write(pos);              
    delay(10); 
  }
  for (pos = 180; pos >= 0; pos -= 1) { 
    servo1.write(pos);              
    delay(10);
    servo2.write(pos);              
    delay(10);
    servo3.write(pos);              
    delay(10);
    servo4.write(pos);              
    delay(10);
    
    
  }

}
