int LED_M=12;int LED_T=13;int LED_G=8;int moistValue;float temp_reading;float voltage;float gas_sensor;float moisture_percentage;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9200);
}

void loop() {
  // put your main code here, to run repeatedly:
  moistValue=analogRead(A0);
  voltage=analogRead(A1);
  voltage=voltage*5/1024;
  temp_reading=100*(voltage-0.4965);
  moisture_percentage=(moistValue/539.00)*100;
  //moisture sensor
  if(moisture_percentage>=50){
    digitalWrite(LED_M,HIGH);
    delay(100);
    digitalWrite(LED_M,LOW);
    delay(100);
    Serial.print("Moisture percentage= ");Serial.print(moisture_percentage);Serial.print("%");Serial.print("High mositure level detected\n");
  }

  else{
    Serial.print("\nMoisture Value=");Serial.print(moistValue);
    Serial.print("Moisture percentage= ");
    Serial.print(moisture_percentage);
    Serial.print("%");
  }
  
  //temperature sensor
  if(temp_reading>=65){
    digitalWrite(LED_M,HIGH);
    delay(100);
    digitalWrite(LED_M,LOW);
    delay(100);
    Serial.print("\nTemperature=");Serial.print(temp_reading);Serial.print("C");Serial.print("\nCaution,high temperature");
  }
  else{
    digitalWrite(LED_T,LOW);
    Serial.print("\nTemperature=");Serial.print(temp_reading);Serial.print("C");
  }

  //gas sensor
  gas_sensor=analogRead(A2);
  if(gas_sensor>=70){
    digitalWrite(LED_G,HIGH);
    delay(100);
    digitalWrite(LED_G,LOW);
    delay(100);;
    Serial.print("\n");Serial.print(gas_sensor);Serial.print("\nHigh gas level detected");
  }

  else{
    digitalWrite(LED_G,LOW);
    Serial.print("\n");Serial.print("Gas level detected=");Serial.print(gas_sensor);
  }
  delay(1000);
}
