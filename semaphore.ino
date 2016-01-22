
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
  digitalWrite(RED, LOW);
  digitalWrite(YELLOW, LOW);
  digitalWrite(GREEN, LOW);
}

void loop() {
  char inChar = (char)Serial.read();

  switch (inChar) {
    case 'a':
      Serial.write("semaphore\n");
      break;
    case 'r':
      shutlights();
      digitalWrite(RED, HIGH);
      break;
    case 'y':
      shutlights();
      digitalWrite(YELLOW, HIGH);
      break;
    case 'g':
      shutlights();
      digitalWrite(GREEN, HIGH);
      break;
    case 'o':
      shutlights();
      break;
  }
}

