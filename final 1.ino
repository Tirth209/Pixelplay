int eNote = 7;
int dNote = 6;
int cNote = 5;
int bNote = 3;
int aNote = 2;
int Piezo = 5;
double a = 1000;  // the frequency of note a
double b = 656;  // the frequency of note b
double c = 312;  // the frequency of note c
double d = 331;  // the frequency of note d
double e = 350;  // the frequency of note e
double f = 0;    // the frequency of note f
void setup() {

  pinMode(aNote, INPUT);
  pinMode(bNote, INPUT);
  pinMode(cNote, INPUT);
  pinMode(dNote, INPUT);
  pinMode(eNote, INPUT);
  pinMode(Piezo, OUTPUT);
  Serial.begin(9600);
}

void loop() {


  Serial.println(digitalRead(aNote));
  Serial.println(digitalRead(bNote));
  if (digitalRead(aNote) == 1) {
    tone(Piezo, a, 100);  // plays note a
    
  }
  if (digitalRead(bNote) == 1) {
    tone(Piezo, b, 0);  // plays note b
  }
  if (digitalRead(cNote) == 1) {
    tone(Piezo, c, 0);  // plays note c
  }
  if (digitalRead(dNote) == 1) {
    tone(Piezo, d, 0);  // plays note d
  }
  if (digitalRead(eNote) == 1) {
    tone(Piezo, e, 0);  // plays note e
  }
  if (digitalRead(aNote) == 0 & digitalRead(bNote) == 0 & digitalRead(cNote) == 0 & digitalRead(dNote) == 0 & digitalRead(eNote) == 0) {
    noTone(Piezo);
  }
  
  delay(10);
}