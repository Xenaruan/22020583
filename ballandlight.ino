
int Trig = 3;
int Echo = 2;
int duration;
int distance;
//以下为led设置
int LED1 = 8;
int LED2 = 7;

//以上为led设置



void setup() {
  Serial.begin(9600);
  pinMode(Trig, OUTPUT);
  pinMode(Echo, INPUT);
//以下为led设置
  pinMode(LED1 , OUTPUT);
  pinMode(LED2 , OUTPUT);

//以上为led设置
  Serial.begin(9600);
}
void loop() {
  //发一个10ms的高脉冲去触发TrigPin
  digitalWrite(Trig, HIGH);
  delay(1);
  digitalWrite(Trig, LOW);
  duration = pulseIn(Echo,HIGH);
  distance = duration / 50.2;


  if(distance>0 && distance<60){
    Serial.println(distance);
    //
    digitalWrite(LED1, HIGH);
    digitalWrite(LED2, HIGH);
  

    delay(100);
  
    }
}

  

