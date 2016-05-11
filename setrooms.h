#ifndef SETROOMS_H
#define SETROOMS_H

#include <iostream>
#include <vector>
#include <string>
using std::vector;
using std::string;
#include "room.h"

/*
void setrooms(room*& firstroom);

    Purpose: creates all the rooms on the ship, sets all the necessary variables for each of these rooms
    Entry: a room pointer
    Exit: firstroom is set to the deck, the first room the passenger will visit

*/

void setrooms(room*& firstroom);

#endif // SETROOMS_H
