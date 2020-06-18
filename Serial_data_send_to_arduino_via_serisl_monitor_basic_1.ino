
//input number through serial monitor and blink led for the same number
char text[3];                    //serial data directly saved in text to print on display
int text_integer;
void setup()
{
Serial.begin(9600); // begin serial communication
Serial.println("TEsT"); // debug string
pinMode(LED_BUILTIN, OUTPUT); // set ping 13 as output
}

void loop() //begin main loop
{
   if (Serial.available())                               //make sure we have all the data from serial 
{   delay(8);                            //wait for 5 millisecond,serial data is waiting, lets extract
    int i=0;                               //its a loop to save one by one string charater in text
    while(i<3)
    {text[i] = Serial.read();
     //Serial.println(text[i]);                 //to see what is happening on serial for debugging
      i++;
    }
    Serial.flush();                           //flush serial buffer of extra data>9999
    text_integer = atoi(text);               //convert numeric string to int var
    Serial.print("text_integer: ");          //to see what is happening on serial for debugging
    Serial.println(text_integer);             //to see what is happening on serial for debugging
}
    
    if (text_integer>10)
    {
    digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);   }  
    }
