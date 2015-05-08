// Haiku Scientific Calculator
// Bryan DeGrendel (c) 2015
//
// See LICENSE for licensing information.

#include "Display.hpp"
#include "Window.hpp"

Window::Window(BRect frame)
  : BWindow(frame, "Scientific Calculator", B_TITLED_WINDOW, B_QUIT_ON_WINDOW_CLOSE),
    flow(NULL), display(NULL)
{
  flow = new BGroupLayout(B_VERTICAL);
  SetLayout(flow);

  display = new Display();

  flow->AddView(display);

}

