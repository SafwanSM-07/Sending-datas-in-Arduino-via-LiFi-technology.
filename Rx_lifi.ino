

int pin = 2; 
volatile unsigned int pulse; 
char ch;
 
void setup() 
{ 
  Serial.begin(9600); 
  pinMode(pin, INPUT);     
  attachInterrupt(0, count_pulse, RISING); 

 
} 
 
void loop() 
{

 
  if(pulse != 0)
  {    
    interrupts(); 
    delay(3000); 
    //noInterrupts(); 
     
    Serial.print("Pulses per second: "); 
    Serial.println(pulse);
    if(pulse==10)
      Serial.print('A');
    else if(pulse==11)
      Serial.print('B');
    else if(pulse==12)
      Serial.print('C');
    else if(pulse==13)
      Serial.print('D');
    else if(pulse==14)
      Serial.print('*');
    else if(pulse==15)
      Serial.print('0');
    else if(pulse==16)
      Serial.print('#');
    else if(pulse==17)
      Serial.print('#');
    else 
      Serial.print(pulse);
    
    Serial.print("  ");
    pulse=0;
  }
} 
 
void count_pulse() 
{ 
  pulse++; 
} 
