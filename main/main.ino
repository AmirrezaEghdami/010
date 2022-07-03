// Coded by AmirRayzo

// Buttons
int BUTTON_1, BUTTON_2, BUTTON_3, CLEAR_BUTTON = 12, 11, 10, 9;

// LEDs
int LED_1, LED_2, LED_3 = 5, 4, 3;

void setup() 
{
  // Set button pins to input mode
  pinMode(BUTTON_1, INPUT);
  pinMode(BUTTON_2, INPUT);
  pinMode(BUTTON_3, INPUT);
  pinMode(CLEAR_BUTTON, INPUT);

  // Set LED pins to output mode
  pinMode(LED_1, OUTPUT);
  pinMode(LED_2, OUTPUT);
  pinMode(LED_3, OUTPUT);
}

void loop() 
{
  // If voltage is received from any of the button pins
  if (digitalRead(BUTTON_1) == HIGH){ // Turn on the first LED
    digitalWrite(LED_1, HIGH);
  }
  else if (digitalRead(BUTTON_2) == HIGH){ //Turn on the second LED
    digitalWrite(LED_2, HIGH);
  }
  else if (digitalRead(BUTTON_3) == HIGH){ // Turn on the third LED
    digitalWrite(LED_3, HIGH);
  }
  else if (digitalRead(CLEAR_BUTTON) == HIGH){ // Turn off all LEDs (Reset)
    digitalWrite(LED_1, LOW);
    digitalWrite(LED_2, LOW);
    digitalWrite(LED_3, LOW);
  }
}
