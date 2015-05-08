// Haiku Scientific Calculator
// Bryan DeGrendel (c) 2015
//
// See LICENSE for licensing information.

#ifndef ___WINDOW_H___
#define ___WINDOW_H___

#include <InterfaceKit.h>

class Display;

class Window : public BWindow
{
public:
  Window(BRect frame);

private:
  Display *display;
};

#endif // ___WINDOW_H___
