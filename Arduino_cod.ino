// C++ code
//

long start_time= 0;
int button1;
int green_led=8;
int red_led=4;
int yellow_led=7;
int switch_input=2;

void setup()
{
 
  pinMode(switch_input, INPUT);
  pinMode(red_led, OUTPUT);
  pinMode(yellow_led, OUTPUT);
  pinMode(green_led, OUTPUT);
  
}

void loop()
{
  button1 = digitalRead(switch_input) ;
  long present_time= millis();
  long time_period=present_time-start_time;
  if (time_period>1000 && time_period<10000){
   digitalWrite(green_led,HIGH);
   digitalWrite(yellow_led,LOW);
   digitalWrite(red_led,LOW);
    
  }
   else if (time_period>10000 && time_period<20000){
   digitalWrite(green_led,LOW);
   digitalWrite(yellow_led,HIGH);
   digitalWrite(red_led,LOW);
    
  }
 
   
  
  else if (time_period>20000 && time_period<30000){
   digitalWrite(green_led,LOW);
   digitalWrite(yellow_led,LOW);
   digitalWrite(red_led,HIGH);
  }
  else if(time_period>30000){
   start_time=present_time; 
  }
  
 
  
  if ( button1 == HIGH){
   digitalWrite(red_led,HIGH);
   digitalWrite(yellow_led,LOW);
   digitalWrite(green_led,LOW);
    delay(10000);
    digitalWrite(red_led,LOW);
    start_time=millis();
  }
  
}
