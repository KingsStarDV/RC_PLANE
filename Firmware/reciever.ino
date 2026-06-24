#include <ESP32Servo.h>
#include <SPI.h>
#include <RF24.h>
int Channel = 108;
const byte address[6] = "complex";

RF24 nrf(4, 5);

Servo s1;
Servo s2;
Servo s3;
Servo s4;
Servo s5;


struct RCDATA {
  int CH1;
  int CH2;
  int CH3;
  int CH4;
  int CH5;
  int CH6;
};

void setup() {
  Serial.begin(115200);
  nrf.begin();
  nrf.setPALevel(RF24_PA_MAX);
  nrf.setDataRate(RF24_250KBPS);
  nrf.setChannel(Channel);
  nrf.openReadingPipe(1, address);
  nrf.startListening();
  
  s1.attach(12);
  s2.attach(13);
  s3.attach(14);
  s4.attach(27);
  s5.attach(25);
  

}

void loop(){
  
  if (nrf.available()){
    RCDATA data;
    nrf.read(&data, sizeof(data));


    //For the Servo 1
    
    int mappedX1 = map(data.CH1, 0, 4095, 1000, 1500);
    s1.writeMicroseconds(mappedX1);  

    
    // For the Esc
    
    int mappedY1 = map(data.CH2, 0, 4095, 1000, 2000);
    s2.writeMicroseconds(mappedY1);


    //For the Servo2
    
    int mappedX2 = map(data.CH3, 0, 4095, 1000, 1500);
    s3.writeMicroseconds(mappedX2);

    //For Servo3
    
    int mappedY2 = map(data.CH4, 0, 4095, 1000, 1500);
    s4.writeMicroseconds(mappedY2);




  }        
}
