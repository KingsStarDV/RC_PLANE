#include <SPI.h>
#include <RF24.h>

int Channel = 108;
const byte address[6] = "complex";

RF24 nrf(4, 5);

struct RCDATA {
  int CH1;
  int CH2;
  int CH3;
  int CH4;
  int CH5;
  int CH6;
};

void setup(){
  Serial.begin(115200);
  pinMode(27, INPUT_PULLUP);
  pinMode(14, INPUT_PULLUP);

  nrf.begin();
  nrf.setPALevel(RF24_PA_MAX);
  nrf.setDataRate(RF24_250KBPS);
  nrf.setChannel(Channel);
  nrf.openWritingPipe(address);
  nrf.stopListening();
}

void loop(){
  RCDATA data;

  data.CH1 = analogRead(34);
  data.CH2 = analogRead(35);
  data.CH3 = analogRead(32);
  data.CH4 = analogRead(33);
  data.CH5 = digitalRead(27);
  data.CH6 = digitalRead(14);

  bool sent = nrf.write(&data, sizeof(data));

  Serial.print("Joystick 1:   ");
  Serial.print("X :");
  Serial.print(data.CH1);
  Serial.print("Y :");
  Serial.println(data.CH2);

  Serial.print("Joystick 2:   ");
  Serial.print("X :");
  Serial.print(data.CH3);
  Serial.print("Y :");
  Serial.println(data.CH4);

  Serial.print("Button:   ");
  Serial.print("BTN1 :");
  Serial.print(data.CH5);
  Serial.print("BTN2 :");
  Serial.println(data.CH6);

  Serial.print("Sent Status:");
  Serial.println(sent);

  delay(20);
}