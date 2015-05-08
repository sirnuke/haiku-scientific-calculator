// Haiku Scientific Calculator
// Bryan DeGrendel (c) 2015
//
// See LICENSE for licensing information.

#ifndef ___WINDOW_H___
#define ___WINDOW_H___

#include <InterfaceKit.h>
#include <interface/GroupLayout.h>

class Display;

class Window : public BWindow
{
public:
  Window(BRect frame);

private:
  BGroupLayout *flow;

  Display *display;
};

#endif // ___WINDOW_H___
