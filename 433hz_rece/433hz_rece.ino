
#include<RCSwitch.h>
RCSwitch mySwitch = RCSwitch();


void setup() {
  Serial.begin(9600);// put your setup code here, to run once:
  mySwitch.enableReceive(0);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (mySwitch.available()) {
    int v = mySwitch.getReceivedValue();
    Serial.println(v);


    mySwitch.resetAvailable();

  }
}
