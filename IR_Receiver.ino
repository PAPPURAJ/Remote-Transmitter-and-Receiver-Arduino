#include <IRremote.h>
int RECV_PIN = 11; 
IRrecv irrecv(RECV_PIN); 
decode_results results; 
unsigned long long int a;
 
void setup(){
    Serial.begin(9600); 
    Serial.println("Enabling IR Receiver"); 
    irrecv.enableIRIn();
    Serial.println("Enabled IR Receiver"); 
}
 
void loop() {
    if (irrecv.decode(&results)) 
    {
    Serial.print("Decoded Signal = "); 
    a=results.value;
    Serial.println(String(a)); 
    irrecv.resume();
    }
    delay(100);
}
