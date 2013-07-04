


#include "WS2803.h"


// Constructor /////////////////////////////////////////////////////////////////
// Function that handles the creation and setup of instances

#include "Arduino.h"
#include <SPI.h>

WS2803::WS2803()
{
  // initialize this instance's variables
  _position = 0;

 pinMode(10, OUTPUT); //necessary to use SPI library

  SPI.setBitOrder(MSBFIRST);
  int mode = 0;
  SPI.setDataMode(mode);
  SPI.begin();


}

// Public Methods //////////////////////////////////////////////////////////////
// Functions available in Wiring sketches, this library, and other libraries

void WS2803::setPosition(char position)
{
	_position = position;
}

// Private Methods /////////////////////////////////////////////////////////////
// Functions only available to other functions in this library

void WS2803::setRGB(char red, char green, char blue)
{
	values[_position*3+0] = red;
	values[_position*3+1] = green;
	values[_position*3+2] = blue;
}

void WS2803::setRGB(char position, char red, char green, char blue)
{
	setPosition(position);
	setRGB(red, green, blue);
}

void WS2803::update()
{
	for(int j=0; j<18; j++)
    {
      //SPI.transfer(values[j]);
    }
  delayMicroseconds(600);
}

// TODO: mark these as private

