#define RXD2 16
#define TXD2 17
const char* my="350";
void setup() 
{
  Serial.begin(115200);
  Serial2.begin(9600, SERIAL_8N1, RXD2, TXD2);
}
 
void loop() { //Choose Serial1 or Serial2 as required
 Serial2.write(my); //Write the serial data
}
