
int time1 = 1000;

void setup() {
  // put your setup code here, to run once:
   pinMode(4, OUTPUT);
}

void loop() {
  time1 = 1000;
  while (time1 > 0)
  {
    time1 -= 50;
    on_off(time1);
  }
  while (time1 <= 1000)
  {
    time1 += 50;
    on_off(time1);
  }
}

void on_off(int time1){
    digitalWrite(4, HIGH);
    delay(time1);
    digitalWrite(4,LOW);
    delay(time1);
  
}
