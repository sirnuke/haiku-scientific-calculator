// Haiku Scientific Calculator
// Bryan DeGrendel (c) 2015
//
// See LICENSE for licensing information.

#include "Actions/Action.hpp"

Action::Action(const char *name, ACTION_ID id)
  : BButton(name), id(id)
{
}

