int amb_inp=A1;int light_value;int pir_in=7;int alarm=8;int stop=12;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9200);
  pinMode(pir_in,INPUT);
  pinMode(alarm,OUTPUT);
  pinMode(stop,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  light_value=analogRead(A1);
  Serial.println(light_value);
  if(light_value<=850){
        if(digitalRead(pir_in)==1){
          digitalWrite(alarm,HIGH);
        }

        if(digitalRead(stop)==1){
          digitalWrite(alarm,LOW);
        }
  }

  delay(1000);
}
