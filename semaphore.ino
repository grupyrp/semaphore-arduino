
#define ON LOW
#define OFF HIGH

#define A0 RED
#define A1 YELLOW
#define A2 GREEN

void setup() {
  // initialize serial:
  Serial.begin(9600);

  pinMode(RED, OUTPUT);
  pinMode(YELLOW, OUTPUT);
  pinMode(GREEN, OUTPUT);
  shutlights();
}

void shutlights() {
  digitalWrite(RED, ON);
  digitalWrite(YELLOW, OFF);
  digitalWrite(GREEN, OFF);
}

void loop() {
  char inChar = (char)Serial.read();
  
  switch (inChar) {
    case 'a':
      Serial.write("semaphore\n");
      break;
    case 'r':
      shutlights();
      digitalWrite(RED, OFF);
      break;
    case 'y':
      shutlights();
      digitalWrite(YELLOW, ON);
      break;
    case 'g':
      shutlights();
      digitalWrite(GREEN, ON);
      break;
  }
}

