//#include <OBCI32_SD.h>
#include <DSPI.h>
#include <EEPROM.h>
#include "OpenBCI_Board.h"

OpenBCI_Board board;

void setup() {
  // put your setup code here, to run once:
  board.begin();
}

void loop() {
  // put your main code here, to run repeatedly:
  board.readSerial();
}
