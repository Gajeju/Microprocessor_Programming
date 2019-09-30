const int numRows = 2;
const int numCols = 4;

int keys[numRows][numCols] = {
  {2093, 2349, 2637, 2793},
  {3136, 3520, 3951, 4186},
};

int rowPins[] = {14, 15};
int colPins[] = {16, 17, 18, 19};

void setup() {
  for (int i = 0; i < numRows; i++) {
    pinMode(rowPins[i], INPUT_PULLUP);
  }
  for (int i = 0; i < numCols; i++) {
    pinMode(colPins[i], OUTPUT);
    digitalWrite(colPins[i], HIGH);
  }
}

void loop() {
  int key = keypadRead();
  if (key != 0) {
    tone(13, key, 500);
  };
}

int keypadRead() {
  int key = 0;
  for (int i = 0; i < numCols; i++) {
    digitalWrite(colPins[i], LOW);
    for (int j = 0; j < numRows; j++) {
      if (digitalRead(rowPins[j]) == LOW)
      {
        delay(10);

        while (digitalRead(rowPins[j]) == LOW);

        key = keys[j][i];
      };
    }
    digitalWrite(colPins[i], HIGH);
  }
  return key;
}
