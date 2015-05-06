// Haiku Scientific Calculator
// Bryan DeGrendel (c) 2015
//
// See LICENSE for licensing information.

#ifndef ___APPLICATION_H___
#define ___APPLICATION_H___

#include <AppKit.h>

class Window;

class Application : public BApplication
{
public:
  Application();

  void ReadyToRun();

private:
  Window *window;
};

#endif // ___APPLICATION_H___
