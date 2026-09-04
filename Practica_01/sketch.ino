int contador;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  Serial.println("Hello, ESP32!");

}

void loop() {
  // put your main code here, to run repeatedly:
  for(contador=0;contador<=8; contador++){
    Serial.print("Contando:");
    Serial.println(contador);
  }


  delay(10); // this speeds up the simulation
}
