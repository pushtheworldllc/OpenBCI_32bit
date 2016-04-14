#include <DSPI.h>
#include <EEPROM.h>
#include <OpenBCI_32bit.h>
#include <OpenBCI_32bit_Definitions.h>

void setup() {
  // Bring up the OpenBCI Board
  board.begin();
}

void loop() {
  // Check to see if there is new data available
  if (board.isSerialAvailableForRead()) {
    char newChar = board.readOneSerialChar();
    boolean cmd_recognized = board.processChar(newChar);
  }

  if (board.isADSDataAvailable()) {
    board.updateChannelData();
    // Can now send channel data
    board.sendChannelData();
  }
}
