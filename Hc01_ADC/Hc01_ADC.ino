const int analogInPin = A0;  // Pino Analógico ADC do HC-01 = A0

int sensorValue = 0;  
int outputValue = 0;  

void setup() {
  // Iniciando a comunicação serial em 115200
  Serial.begin(115200);
}

void loop() {
  // lendo o valor analógico
  sensorValue = analogRead(analogInPin);
  
  outputValue = map(sensorValue, 0, 1023, 0, 255);
  
  // mostrando as leituras no Monitor Serial
  Serial.print("sensor = ");
  Serial.print(sensorValue);
  Serial.print("\t output = ");
  Serial.println(outputValue);

  delay(1000);
}
