// Sensores
#define leftS A1
#define rightS A2
#define centerS A3

// Motores
#define leftM 4
#define rightM 3

// Setas
#define leftA 10
#define rightA 9

// Freio
#define bothB 11

void setup() {
  pinMode(leftS, INPUT);
  pinMode(rightS, INPUT);
  pinMode(leftM, OUTPUT);
  pinMode(rightM, OUTPUT);
  pinMode(leftA, OUTPUT);
  pinMode(rightA, OUTPUT);
}

void loop() {
  if (analogRead(leftS) > 90) {
    digitalWrite(leftM, HIGH);
    digitalWrite(leftA, LOW);
  } else {
    digitalWrite(leftM, LOW);
    digitalWrite(leftA, HIGH);
  }


  if (analogRead(rightS) > 90) {
    digitalWrite(rightM, HIGH);
    digitalWrite(rightA, LOW);
  } else {
    digitalWrite(rightM, LOW);
    digitalWrite(rightA, HIGH);
  }

  if (analogRead(rightS) > 90 && analogRead(centerS) > 90 && analogRead(leftS) > 90) {
    digitalWrite(rightM, LOW);
    digitalWrite(leftM, LOW);
    digitalWrite(bothB, HIGH);
  } else {
    digitalWrite(bothB, LOW);
  }
}

// abracadabra, é aqui que a magia acontece