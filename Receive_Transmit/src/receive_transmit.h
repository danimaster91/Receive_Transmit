#ifndef RECEIVE_TRANSMIT_H
#define RECEIVE_TRANSMIT_H
#include<nRF24L01.h>
#include<RF24.h>
#include<SPI.h>


class Receive_Transmit{
private:
  size_t _pin1;
  size_t _pin2;
  bool _receive;
public:
  RF24 radio = RF24(_pin1,_pin2);
  Receive_Transmit(size_t pin1,size_t pin2, bool receive);
  void initialize();
  void dash();
  void transmit(int x);
};

#endif
