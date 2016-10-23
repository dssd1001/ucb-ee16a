/*
 Fading
 
 This example shows how to fade an LED using the analogWrite() function.
 
 The circuit:
 * LED attached from analog pin P2_5 to ground.
 */


int ledPin = P2_5;    // LED connected to analog pin P2_5
int blinkrate = 10; //ms

void setup()  { 
  Serial.begin(9600);  // nothing happens in setup 
} 

void loop()  { 
  // fade in from min to max in increments of 5 points:
  for(int fadeValue = 0 ; fadeValue <= 255; fadeValue +=2) { 
    // sets the value (range from 0 to 255):
    analogWrite(ledPin, fadeValue);      
    // wait for <blinkrate> milliseconds to see the dimming effect    
    delay(blinkrate);                            
  } 

  // fade out from max to min in increments of 5 points:
  for(int fadeValue = 255 ; fadeValue >= 0; fadeValue -=2) { 
    // sets the value (range from 0 to 255):
    analogWrite(ledPin, fadeValue); 
    // wait for <blinkrate> milliseconds to see the dimming effect    
    delay(blinkrate); 
Serial.println(fadeValue);

  } 
}


