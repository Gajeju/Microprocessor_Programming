//키메트릭스 핀 개수
const int numRows = 2;
const int numCols = 4;

//키메트릭스 핀번호
int rowPins_key[] = {2, 3};
int colPins_key[] = {4, 5, 6, 7};

//개이름 주파수
int keys[numRows][numCols] = {
  {2093, 2349, 2637, 2793},
  {3136, 3520, 3951, 4186},
};

//도트메트릭스 핀번호 배열
const int colPins[] = {54, 55, 56, 57, 58, 59, 60, 61};
const int rowPins[] = {62, 63, 64, 65, 66, 67, 68, 69};

//키메트릭스 입력변수
int key = 0;

void setup() {
  for (int i = 0; i < numRows; i++) {
    pinMode(rowPins_key[i], INPUT_PULLUP);
  }
  for (int i = 0; i < numCols; i++) {
    pinMode(colPins_key[i], OUTPUT);
    digitalWrite(colPins_key[i], HIGH);
  }

  for (int i = 0; i < 8; i++)
  {
    pinMode(colPins[i], OUTPUT);
    pinMode(rowPins[i], OUTPUT);
  }


}

void loop() {

  if (key == 0)
    key = keypadRead();

    switch (key) {
      case 2093:
        output(key, 7);
        break;
      case 2349:
        output(key, 6);
        break;
      case 2637:
        output(key, 5);
        break;
      case 2793:
        output(key, 4);
        break;
      case 3136:
        output(key, 3);
        break;
      case 3520:
        output(key, 2);
        break;
      case 3951:
        output(key, 1);
        break;
      case 4186:
        output(key, 0);
        break;
  }
}

//키메트릭스 값 판단 함수
int keypadRead() {
  int key = 0;
  for (int i = 0; i < numCols; i++) {
    digitalWrite(colPins_key[i], LOW);
    for (int j = 0; j < numRows; j++) {
      if (digitalRead(rowPins_key[j]) == LOW)
      {
        delay(10);

        while (digitalRead(rowPins_key[j]) == LOW);

        key = keys[j][i];
      };
    }
    digitalWrite(colPins_key[i], HIGH);
  }
  return key;
}

//오선 그리는 함수

void colSet()
{
  for (int i = 0; i < 4; i++)
  {
    digitalWrite(colPins[i], HIGH);
  }
  for (int i = 4; i < 8; i++)
  {
    digitalWrite(colPins[i], LOW);
  }
}

void rowSet()
{
  for (int i = 0; i < 8; i++)
  {
    digitalWrite(rowPins[i], LOW);
  }
  digitalWrite(rowPins[1], HIGH);
  digitalWrite(rowPins[3], HIGH);
  digitalWrite(rowPins[5], HIGH);
}

//도트메트릭스 초기화 배열

void colClear()
{
  for (int i = 0; i < 8; i++)
  {
    digitalWrite(colPins[i], HIGH);
  }
}

void rowClear()
{
  for (int i = 0; i < 8; i++)
  {
    digitalWrite(rowPins[i], LOW);
  }
}

void output(int frq, int arr)
{
  
  tone(13, frq, 500);
  for (;;)
  {
    colSet();
    rowSet();
    delay(10);
    colClear();
    rowClear();
    digitalWrite(colPins[1], LOW);
    digitalWrite(rowPins[arr], HIGH);
    delay(10);
    colClear();
    rowClear();

    key = keypadRead();
    if (key != frq && key != 0) break;
  }
}
