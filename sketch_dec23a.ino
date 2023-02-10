
const int buzzer = 9; //buzzer to arduino pin 9

void setup() {
  // put your setup code here, to run once:
pinMode(A0,INPUT);
 pinMode(buzzer, OUTPUT); // Set buzzer - pin 9 as an output
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
int value=analogRead(A0);
Serial.println(value);
if(value>250)
{
   tone(buzzer, 1000); // Send 1KHz sound signal...
  delay(1000);        // ...for 1 sec
  noTone(buzzer);     // Stop sound...
  delay(1000);        // ...for 1sec
  Serial.println("patient is calling");  
  }
delay(100);
}
