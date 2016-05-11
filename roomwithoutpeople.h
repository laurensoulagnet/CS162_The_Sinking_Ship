#ifndef ROOMWITHOUTPEOPLE_H
#define ROOMWITHOUTPEOPLE_H

#include "room.h"
#include <iostream>

/*
void dostuff(string thebag[], int &thetime);

    Purpose: lets the user see what's in the room, and take items from the room
    Entry: takes the bag array that holds things the user has taken from previous rooms and the time
    Exit: items may be taken from the room, items may be added to the passenger's bag, and time is increased, nothing returned

*/

class roomwithoutpeople: public room
{
    public:
        void dostuff(string thebag[], int &thetime);

};

#endif // ROOMWITHOUTPEOPLE_H
