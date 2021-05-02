#include <IRremote.h>

IRsend irsend(D2);

void setup() {
}
int i=0;
void loop() {
    irsend.sendSony(i++, 20);
    delay(200);
}
