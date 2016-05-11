#include "finalroom.h"
#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::string;

void finalroom::dostuff(string thebag[], int &thetime)
{
    cout << endl;
    cout << "While paddling over, you realize that you will need " << key << " to survive." << endl;
}

room* finalroom::picknextroom(string thebag[], int &thetime)
{
    bool keyorno = false;//yes if the user has the necessary item
    for (unsigned int i = 0; i<5; i++)// checking if the key is in the room
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
    else
    {
        cout << "You do have " << key << "! " << endl;
        cout << livephrase << endl;
        return NULL;

    }
}
