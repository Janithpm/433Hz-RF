
#include<RCSwitch.h>
RCSwitch mySwitch = RCSwitch();


void setup() {
  mySwitch.enableTransmit(10);// put your setup code here, to run once:

}

void loop() {
  mySwitch.send("001");
  delay(100);
}
