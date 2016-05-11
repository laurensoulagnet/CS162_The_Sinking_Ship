#include "room.h"
#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::string;

void room::dostuff(string thebag[], int &thetime)
{

}

void room::setdirections(room* thenorth, room* theeast, room* thesouth, room* thewest)
{
    north = thenorth;
    east = theeast;
    south = thesouth;
    west = thewest;
}

void room::setroomname(string thename)
{
    roomname = thename;
}

void room::setfloodtime(int thefloodtime)
{
    floodtime = thefloodtime;
}

room* room::getnorth()
{
    return north;
}

room* room::geteast()
{
    return east;
}

room* room::getsouth()
{
    return south;
}

room* room::getwest()
{
    return west;
}

string room::getroomname(int &thetime)
{
    if (thetime >= floodtime)
    {
        roomname = "a flooded room";
    }

    return roomname;
}

int room::getfloodtime()
{
    return floodtime;
}

room* room::picknextroom(string thebag[], int &thetime)
{

    string direction;//which direction the user would like to go
    room* directionptr;//pointer in the direction the user chose

    cout << "Where would you like to go from here?" << endl;
    cout << "You can try to go North, South, East, or West." << endl;
    cout << "To go North, type the letter N. To go East, E. And so on." << endl;
    cout << "Which way would you like to go?" << endl;


    cin >> direction;
    while(direction != "N" && direction != "n" && direction != "E" && direction != "e" && direction != "S" && direction != "s" && direction != "W" && direction != "w")//checking user input
    {
        cout << "Would you retype that as the letter N, E, S, or W?" << endl;
        cin >> direction;
    }

    if(direction == "N" || direction == "n")
    {
        directionptr = north;
    }
    if(direction == "E" || direction == "e")
    {
        directionptr = east;
    }
    if(direction == "S" || direction == "s")
    {
        directionptr = south;
    }
    if(direction == "W" || direction == "w")
    {
        directionptr = west;
    }

    while (directionptr->getroomname(thetime) == "a flooded room")//so the user can't enter a flooded room
    {
        cout << "That room is flooded, so you can't go that way." << endl;
        cout << "Again, which way would you like to go." << endl;
        cin >> direction;
        while(direction != "N" && direction != "n" && direction != "E" && direction != "e" && direction != "S" && direction != "s" && direction != "W" && direction != "w")//checking user input
        {
            cout << "Would you retype that as the letter N, E, S, or W?" << endl;
            cin >> direction;
        }

        if(direction == "N" || direction == "n")
        {
            directionptr = north;
        }
        if(direction == "E" || direction == "e")
        {
            directionptr = east;
        }
        if(direction == "S" || direction == "s")
        {
            directionptr = south;
        }
        if(direction == "W" || direction == "w")
        {
            directionptr = west;
        }
    }

    cout << endl;

    if (thetime >= floodtime)//if the room floods while the user is in it.
    {
        cout << "Alas, while you were busy in this room, it flooded. You drown." << endl;
        return NULL;
    }
    else
    {
        return directionptr;
    }

}

string room::getkey()
{
    return "aaaaaack";//just for my own testing
}

string room::getlivephrase()
{
    return "aaaaaack";//just for my own testing
}

string room::getdiephrase()
{
    return "aaaaaack";//just for my own testing
}

void room::setkey(string thekey)
{

}

void room::setlivephrase(string thelivephrase)
{

}

void room::setdiephrase(string thediephrase)
{

}

void room::setperson(string theperson)
{

}


