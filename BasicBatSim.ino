/* 
Bat Simulator for checking ultrasonic microphones
Connect +ve terminal of transducer to Arduino Pin 8, and -ve to GND
*/
 
int times = 0;
boolean flag = false;
 
void setup() {
// initialize digital pin 13 as an output.
pinMode(13, OUTPUT);
}
 
void loop()
{
if (flag == false)
{
for (times=0; times < 5; times++)
{
digitalWrite(13, HIGH); // set the LED on
delay(1000); // wait for a second
digitalWrite(13, LOW); // set the LED off
delay(1000); // wait for a second
}
delay(1000);
flag = true;
}
tone(8, 60000, 1);
delay(random(10,200));
}