// Haiku Scientific Calculator
// Bryan DeGrendel (c) 2015
//
// See LICENSE for licensing information.


#include "Application.hpp"
#include "Window.hpp"

#include "Actions/Action.hpp"
#include "Actions/Go.hpp"

const int DEFAULT_WINDOW_X = 100;
const int DEFAULT_WINDOW_Y = 100;
const int DEFAULT_WINDOW_WIDTH = 800;
const int DEFAULT_WINDOW_HEIGHT = 800;

Application::Application()
  : BApplication("application/com.degrendel.haiku-scientific-calculator"), window(NULL)
{
}

void Application::ReadyToRun()
{
  BRect frame(DEFAULT_WINDOW_X, DEFAULT_WINDOW_Y, DEFAULT_WINDOW_WIDTH, DEFAULT_WINDOW_HEIGHT);
  window = new Window(frame);
  window->Show();
}

