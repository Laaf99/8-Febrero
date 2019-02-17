int rojo=2;
int verde=4;
int amarillo=6;
int r;
int v;
int r2;
void setup() {
  {
  Serial.begin(9600);
  Serial.println("¿Cuanto tiempo quieres que prenda el led rojo?");
  delay(5000);
  while(Serial.available()==0){
  }
  r=Serial.parseInt();
  pinMode(rojo,OUTPUT);
  }
  {
  Serial.println("¿Cuanto tiempo quieres que prenda el led verde?");
  delay(5000);
  while(Serial.available()==0){
  }
  v=Serial.parseInt();
  pinMode(verde,OUTPUT);

  }
      
  {
  Serial.println("¿Cuanto tiempo quieres que prenda el led rojo 2?");
  delay(5000);
  while(Serial.available()==0){
  }
  r2=Serial.parseInt();
  pinMode(amarillo,OUTPUT);

}
}
  

void loop() {
digitalWrite(rojo,HIGH);
delay(r);
digitalWrite(rojo,LOW);
delay(r);

digitalWrite(verde,HIGH);
delay(v);
digitalWrite(verde,LOW);
delay(v);

digitalWrite(amarillo,HIGH);
delay(r2);
digitalWrite(amarillo,LOW);
delay(r2);

}
