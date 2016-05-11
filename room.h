#ifndef ROOM_H
#define ROOM_H

#include <iostream>
#include <vector>
#include <string>
using std::vector;
using std::string;

/*
virtual room* picknextroom(string thebag[], int &thetime);//tells the user what's in each direction and gets returns where they want to go

    Purpose: gets the direction the user would like to go, requires user to choose a new room if the room is flooded
    Entry: takes the bag array that holds things the user has taken from previous rooms and the time
    Exit: returns a pointer to another room on the ship or the ocean

void setdirections(room* thenorth, room* theeast, room* thesouth, room* thewest);

    Purpose: sets pointers to other rooms
    Entry: the pointers to the rooms to the north, south, east, and west, in order
    Exit: north, south, east, and west are set, nothing is returned

void setroomname(string thename);

    Purpose: sets roomname
    Entry: the name of the room
    Exit: roomname is set, nothing returned

void setfloodtime(int thefloodtime);

    Purpose: sets floodtime
    Entry: the time at which the room floods
    Exit: floodtime is set, nothing is returned

room* getnorth();

    Purpose: returns north
    Entry: none
    Exit: returns north

room* geteast();

    Purpose: returns east
    Entry: none
    Exit: returns east

room* getsouth();

    Purpose: returns south
    Entry: none
    Exit: returns south

room* getwest();

    Purpose: returns west
    Entry: none
    Exit: returns west

virtual string getroomname(int &thetime);

    Purpose: returns the name of the room or "a flooded room" if the time is past the room's floodtime
    Entry: the time
    Exit: the name of the room or "a flooded room" is returned

int getfloodtime();

    Purpose: returns floodtime
    Entry: none
    Exit: returns

*/

class room
{
    public:
        virtual void dostuff(string thebag[], int &thetime);//takes the time, lets user do stuff in the room, returns the time
        virtual room* picknextroom(string thebag[], int &thetime);//tells the user what's in each direction and gets returns where they want to go

        void setdirections(room* thenorth, room* theeast, room* thesouth, room* thewest);//sets pointers
        void setroomname(string thename);//sets roomname
        void setfloodtime(int thefloodtime);//sets floodtime
        room* getnorth();//returns north
        room* geteast();//returns east
        room* getsouth();//returns south
        room* getwest();//returns west
        virtual string getroomname(int &thetime);//the name of the room
        int getfloodtime();//the time the room floods

        vector<string> items;//holds the items in a room

        virtual string getkey();//returns the key
        virtual string getlivephrase();//returns the phrase used if the user lives
        virtual string getdiephrase();//returns the phrase used if the user dies
        virtual void setkey(string thekey);//sets what the user needs to survive
        virtual void setlivephrase(string thelivephrase);//sets the phrase used if the user lives
        virtual void setdiephrase(string thediephrase);//sets the phrase used if the user dies
        virtual void setperson(string theperson);//sets the phrase a character says

    protected:
        string roomname;//the name of each room;
        room* north;//a pointer room to the north
        room* east;//a pointer room to the east
        room* south;//a pointer room to the south
        room* west;//a pointer room to the west or outside
        int floodtime;//the time at which a room is flooded

        string key;//what the user needs to survive a room
        string livephrase;//the phrase used if the user lives
        string diephrase;//the phrase used if the user dies
        string person;//the phrase a character says

};

#endif // ROOM_H
