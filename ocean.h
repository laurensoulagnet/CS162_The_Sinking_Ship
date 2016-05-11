#ifndef OCEAN_H
#define OCEAN_H

#include "room.h"
#include <iostream>
/*

string getkey();

    Purpose: returns key
    Entry: none
    Exit: returns key

string getlivephrase();

    Purpose: returns livephrase
    Entry: none
    Exit: returns livephrase

string getdiephrase();

    Purpose: returns diephrase
    Entry: none
    Exit: returns diephrase

void setkey(string thekey);

    Purpose: sets key
    Entry: the name of the item the user needs to survive
    Exit: key is changed, returns nothing

void setlivephrase(string thelivephrase);

    Purpose: sets livephrase
    Entry: the phrase the user is told if they live
    Exit: livephrase is set, returns nothing

void setdiephrase(string thediephrase);

    Purpose: sets diephrase
    Entry: the phrase the user is told when they die
    Exit: diephrase is set, returns nothing

string getroomname(int &thetime);

    Purpose: returns roomname
    Entry: the time
    Exit: returns roomname

room* picknextroom(string thebag[], int &thetime);

    Purpose: to tell the user if they have died, or ask where they would like to go next
    takes the bag array that holds things the user has taken from previous rooms
    Exit: returns a pointer to one of the four final rooms

void dostuff(string thebag[], int &thetime);

    Purpose: tells the user what they need to survive the room
    Entry: takes the bag array that holds things the user has taken from previous rooms and the time
    Exit: tells the user what they need to survive the room
*/


class ocean: public room
{
    public:
        void dostuff(int thebag[], int &thetime);
        room* picknextroom(string thebag[], int &thetime);
        string getkey();
        string getlivephrase();
        string getdiephrase();
        void setkey(string thekey);
        void setlivephrase(string thelivephrase);
        void setdiephrase(string thediephrase);
        string getroomname(int &thetime);


};

#endif // OCEAN_H
