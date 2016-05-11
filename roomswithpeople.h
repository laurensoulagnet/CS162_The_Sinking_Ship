#ifndef ROOMSWITHPEOPLE_H
#define ROOMSWITHPEOPLE_H

#include "room.h"
#include <string>
#include <iostream>
using std::string;

/*
void dostuff(string thebag[], int &thetime);

    Purpose: lets the user talk to another passenger, see what's in the room, and take items from the room
    Entry: takes the bag array that holds things the user has taken from previous rooms and the time
    Exit: items may be taken from the room, items may be added to the passenger's bag, and time is increased, nothing returned

string getperson();

    Purpose: returns the phrase the other passenger says
    Entry: none
    Exit: returns person

void setperson(string theperson);

    Purpose: sets the phrase the other passenger says
    Entry: the phrase the other passenger says
    Exit: person is set

*/

class roomswithpeople: public room
{
    public:
        void dostuff(string thebag[], int &thetime);
        string getperson();
        void setperson(string theperson);
    protected:
        string person;// the phrase another character says


};

#endif // ROOMSWITHPEOPLE_H

