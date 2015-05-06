// Haiku Scientific Calculator
// Bryan DeGrendel (c) 2015
//
// See LICENSE for licensing information.

#include "Display.hpp"
#include "Window.hpp"

Window::Window(BRect frame)
  : BWindow(frame, "Scientific Calculator", B_TITLED_WINDOW, B_QUIT_ON_WINDOW_CLOSE),
    layout(NULL), display(NULL)
{
  display = new Display();
  layout = BLayoutBuilder::Group<>(this, B_VERTICAL)
    .SetInsets(0, 0, 0, 0)
    .Add(display);
}

