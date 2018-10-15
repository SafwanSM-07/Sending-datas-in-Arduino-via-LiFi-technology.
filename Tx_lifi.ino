int ledPin = A0;
int ms=10;
int i = 0;
char input;


void setup()
{
    pinMode (ledPin,OUTPUT);
 Serial.begin(9600);
}

void loop()
{
  if (Serial.available()) 
  {
  input = Serial.read(); //storing pressed key value in a char
  switch(input)
  {
    case '1'  :   for(i=0; i<1; i++)
                  {
                    digitalWrite(ledPin, HIGH);
                    delay(ms);   
                    digitalWrite(ledPin, LOW);
                    delay(ms);
                  }
                  break;

    case '2'  :   for(i=0; i<2; i++)
                  {
                    digitalWrite(ledPin, HIGH);
                    delay(ms);   
                    digitalWrite(ledPin, LOW);
                    delay(ms);
                  }
                  break;

    case '3'  :   for(i=0; i<3; i++)
                  {
                    digitalWrite(ledPin, HIGH);
                    delay(ms);   
                    digitalWrite(ledPin, LOW);
                    delay(ms);
                  }
                  break;

    case '4'  :   for(i=0; i<4; i++)
                  {
                    digitalWrite(ledPin, HIGH);
                    delay(ms);   
                    digitalWrite(ledPin, LOW);
                    delay(ms);
                  }
                  break;

    case '5'  :   for(i=0; i<5; i++)
                  {
                    digitalWrite(ledPin, HIGH);
                    delay(ms);   
                    digitalWrite(ledPin, LOW);
                    delay(ms);
                  }
                  break;
                  
    case '6'  :   for(i=0; i<6; i++)
                  {
                    digitalWrite(ledPin, HIGH);
                    delay(ms);   
                    digitalWrite(ledPin, LOW);
                    delay(ms);
                  }
                  break;
                  
    case '7'  :   for(i=0; i<7; i++)
                  {
                    digitalWrite(ledPin, HIGH);
                    delay(ms);   
                    digitalWrite(ledPin, LOW);
                    delay(ms);
                  }
                  break;
                  
    case '8'  :   for(i=0; i<8; i++)
                  {
                    digitalWrite(ledPin, HIGH);
                    delay(ms);   
                    digitalWrite(ledPin, LOW);
                    delay(ms);
                  }
                  break;
                  
    case '9'  :   for(i=0; i<9; i++)
                  {
                    digitalWrite(ledPin, HIGH);
                    delay(ms);   
                    digitalWrite(ledPin, LOW);
                    delay(ms);
                  }
                  break;
                  
    case 'A'  :   for(i=0; i<10; i++)
                  {
                    digitalWrite(ledPin, HIGH);
                    delay(ms);   
                    digitalWrite(ledPin, LOW);
                    delay(ms);
                  }
                  break;
                  
    case 'B'  :   for(i=0; i<11; i++)
                  {
                    digitalWrite(ledPin, HIGH);
                    delay(ms);   
                    digitalWrite(ledPin, LOW);
                    delay(ms);
                  }
                  break;
                  
  case 'C'  :   for(i=0; i<12; i++)
                  {
                    digitalWrite(ledPin, HIGH);
                    delay(ms);   
                    digitalWrite(ledPin, LOW);
                    delay(ms);
                  }
                  break;
                  
  case 'D'  :   for(i=0; i<13; i++)
                  {
                    digitalWrite(ledPin, HIGH);
                    delay(ms);   
                    digitalWrite(ledPin, LOW);
                    delay(ms);
                  }
                  break;
                  
  case '*'  :   for(i=0; i<14; i++)
                  {
                    digitalWrite(ledPin, HIGH);
                    delay(ms);   
                    digitalWrite(ledPin, LOW);
                    delay(ms);
                  }
                  break;
                  
   case '0'  :   for(i=0; i<15; i++)
                  {
                    digitalWrite(ledPin, HIGH);
                    delay(ms);   
                    digitalWrite(ledPin, LOW);
                    delay(ms);
                  }
                  break;
                  
  case '#'  :   for(i=0; i<16; i++)
                  {
                    digitalWrite(ledPin, HIGH);
                    delay(ms);   
                    digitalWrite(ledPin, LOW);
                    delay(ms);
                  }
                  break;
  }
}

}                
