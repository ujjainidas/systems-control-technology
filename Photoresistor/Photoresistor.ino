//One leg is connected to 5V
//Other is connected to 100K ohm resistor that's grounded, and in front of that, to analog port 0

int sensorPin = A0; // select the input pin for LDR

int sensorValue = 0; // variable to store the value coming from the sensor
void setup() {
  Serial.begin(9600); //sets serial port for communication
}
void loop() {

sensorValue = analogRead(sensorPin); // read the value from the sensor
Serial.println(sensorValue); //prints the values coming from the sensor on the screen

delay(100);

}
