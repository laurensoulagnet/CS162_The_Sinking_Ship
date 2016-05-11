#ifndef FINALROOM_H
#define FINALROOM_H

#include <iostream>
#include "ocean.h"

/*
void dostuff(string thebag[], int &thetime);

    Purpose: tells the user what they need to survive the room
    Entry: takes the bag array that holds things the user has taken from previous rooms and the time
    Exit: tells the user what they need to survive the room

room* picknextroom(string thebag[], int &thetime);

    Purpose: to tell the user if they have died or lived
    takes the bag array that holds things the user has taken from previous rooms
    Exit: returns NULL


*/

class finalroom: public ocean
{
    public:
        void dostuff(string thebag[], int &thetime);
        room* picknextroom(string thebag[], int &thetime);
};

#endif // FINALROOM_H
