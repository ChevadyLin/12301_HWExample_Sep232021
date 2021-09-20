// C++ code
//

int PIR = 2;


void setup()
{
  Serial.begin(9600);
  
  pinMode(PIR, INPUT);
  for(int i = 3; i <= 4; i++)
  {
    pinMode(i, OUTPUT);
  }
}

void loop()
{
  // When PIR sensor is triggered
  if(digitalRead(PIR)){
    // User random() to generate a random number between 3 and 4 (included)
    long dice = random(3, 5);
    
    // I use for loop here because I want to light up multiple leds.
    // If you only want to light up the one corresponding to the value of dice,
    // you don't have to use for loop
    for(int i = 3; i <= dice; i++)
    {
      digitalWrite(i, HIGH);
    }
    
    // Use delay to let leds shine for 3 seconds
    delay(3000);
    
    // Dim all shining leds
    for(int i = 3; i <= dice; i++)
    {
      digitalWrite(i, LOW);
    }
  }
}
