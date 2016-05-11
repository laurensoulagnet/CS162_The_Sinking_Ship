#include "ocean.h"
#include <iostream>
#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::string;

void ocean::dostuff(int thebag[], int &thetime)
{
    cout << "You drop into the ocean! To survive you will need " << key << "." << endl;
}

room* ocean::picknextroom(string thebag[], int &thetime)
{
    bool keyorno = false;//yes if the user has the necessary item
    string direction;//which direction the user would like to go
    //room* directionptr;//pointer in the direction the user chose

    cout << "You jump into the ocean!" << endl;
    for (int i = 0; i<5; i++)//to check if the user has the necessary item
    {
        if (thebag[i] == key)
        {
            keyorno = true;
        }
    }

    if (keyorno == false)
    {
        cout << "Unfortunately, you do not have " << key << "." << endl;
        cout << diephrase;

        return NULL;
    }
    else//checking where the user wants to go next
    {
        cout << "You have " << key << ", so you pull it from your bag and climb in. " << endl;
        cout << endl;
        cout << "Which way would you like to go now? To the North you see" << endl;
        cout << "some tentacles waving, perhaps a friendly sea creature." << endl;
        cout << "To the East you see a ship, but it does have an ominous skull" << endl;
        cout << "and crossbones sail. Still, pirates are people too!" << endl;
        cout << "To the South you see a small island in the distance, and dry" << endl;
        cout << "land does sound nice. To the West you see nothing but more water." << endl;
        cout << "Still, perhaps that's safest! Which way would you like to go? " << endl;

        cin >> direction;
        while(direction != "N" && direction != "n" && direction != "E" && direction != "e" && direction != "S" && direction != "s" && direction != "W" && direction != "w")//checking user input
        {
            cout << "Would you retype that as the letter N, E, S, or W?" << endl;
            cin >> direction;
        }

        if(direction == "N" || direction == "n")
        {
            return north;
        }
        if(direction == "E" || direction == "e")
        {
            return east;
        }
        if(direction == "S" || direction == "s")
        {
            return south;
        }
        if(direction == "W" || direction == "w")
        {
            return west;
        }


    }


}

string ocean::getkey()
{
    return key;
}

string ocean::getlivephrase()
{
    return livephrase;
}

string ocean::getdiephrase()
{
    return diephrase;
}

void ocean::setkey(string thekey)
{
    key = thekey;
}

void ocean::setlivephrase(string thelivephrase)
{
    livephrase = thelivephrase;
}

void ocean::setdiephrase(string thediephrase)
{
    diephrase = thediephrase;
}

string ocean::getroomname(int &thetime)
{
    floodtime = thetime + 100;// making sure the ocean is never "flooded"
    if (thetime >= floodtime)
    {
        roomname = "a flooded room";
    }

    return roomname;
}
