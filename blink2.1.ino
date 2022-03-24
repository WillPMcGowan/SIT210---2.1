int led1 = D7; 

int newWord = 3000;
int newLetter = 1500;
int letterBreak = 800;

int di = 100;
int dah = 500;


void setup() {

  pinMode(led1, OUTPUT);
}

void loop() {

  // W
  digitalWrite(led1, HIGH);
  delay(di);
  digitalWrite(led1, LOW);
  delay(letterBreak);
  
  digitalWrite(led1, HIGH);
  delay(dah);
  digitalWrite(led1, LOW);
  delay(letterBreak);
  
  digitalWrite(led1, HIGH);
  delay(dah);
  digitalWrite(led1, LOW);
  delay(letterBreak);
  
  // I 
  digitalWrite(led1, HIGH);
  delay(di);
  digitalWrite(led1, LOW);
  delay(letterBreak);
  
  digitalWrite(led1, HIGH);
  delay(di);
  digitalWrite(led1, LOW);
  delay(letterBreak);
  
  // L
  digitalWrite(led1, HIGH);
  delay(di);
  digitalWrite(led1, LOW);
  delay(letterBreak);

  digitalWrite(led1, HIGH);
  delay(dah);
  digitalWrite(led1, LOW);
  delay(letterBreak);
  
  digitalWrite(led1, HIGH);
  delay(di);
  digitalWrite(led1, LOW);
  delay(letterBreak);

  digitalWrite(led1, HIGH);
  delay(dah);
  digitalWrite(led1, LOW);
  delay(letterBreak);

  
  delay(newWord);
}
