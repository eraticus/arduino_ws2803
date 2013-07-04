/*
  Test.h - Test library for Wiring - description
  Copyright (c) 2006 John Doe.  All right reserved.
*/

// ensure this library description is only included once
#ifndef WS2803_h
#define WS2803_h

// Only handled one WS203
// TODO: modify so that multiple WS2803s can be addressed
class WS2803
{
  // user-accessible "public" interface
  public:
    WS2803();
    void setRGB(char red, char green, char blue);
	void setPosition(char position);
	void setRGB(char position, char red, char green, char blue);
	void update();

  // library-accessible "private" interface
  private:
	char _position;
	// r = position*3+0
	// g = position*3+1
	// b = position*3+2
	char values[18]; //6 LEDs * 3 colors
    
};

#endif

