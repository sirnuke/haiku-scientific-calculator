// Haiku Scientific Calculator
// Bryan DeGrendel (c) 2015
//
// See LICENSE for licensing information.

#include "Display.hpp"

Display::Display() : BTextView("display")
{
  SetText("hello\nworld\n");
}

