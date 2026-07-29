#define LDR A0
const int leds[] = {2, 3, 4, 5, 6, 7}; 
int Sensor_read = 0;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  for (int i = 0; i < 6; i++) {
    pinMode(leds[i], OUTPUT);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  Sensor_read = analogRead(LDR);
  int read = map(Sensor_read, 0, 1023, 0, 100);
  Serial.print("Light percentage = ");
  Serial.print(read);
  Serial.println("%");   
  
  if (read <= 20){
    for(int i = 0; i<6; i++){
      digitalWrite(leds[i], HIGH);
    }
  }else {
    for(int i=0; i<6 ;i++){
      digitalWrite(leds[i], LOW);
    }
  }
  delay(100);
}
