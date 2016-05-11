#include "roomwithoutpeople.h"
#include "moveitems.h"
#include "room.h"
#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::string;

void roomwithoutpeople::dostuff(string thebag[], int &thetime)
{
    cout << "It has been " << thetime << " minutes since the ship began to sink." << endl;
    cout << endl;

    string todo;//what type of thing the user wants to do
    string repeat = "yes";//yes if the user still wants to do things in the room

    thetime++;//time for moving into a room

    cout << "You are in " << roomname << " and there is nobody else here." << endl;
    cout << "You can do the following:" << endl;
    cout << endl;
    cout << "A. See what you can take from the room." << endl;
    cout << "B. Take something from the room." << endl;
    cout << "C. Move on." << endl;
    cout << "Enter the letter A, B, or C." << endl;

    cin >> todo;

    while (todo != "A" && todo != "a" && todo != "B" && todo != "b" && todo != "C" && todo != "c")//checking user input
    {
        cout << "Would you enter that in as the letter A, B, or C?" << endl;
        cin >> todo;
    }

    while (repeat != "No" && repeat != "no")
    {
        cout << endl;

        if (todo == "A" || todo == "a")
        {
            cout << "You look around the room and see what there is to take: " << endl;
            cout << endl;
            for (unsigned int i = 0; i<items.size(); i++)//printing items in the room
            {
                if (items[i] != "empty")
                {
                    cout << items[i] << endl;
                }

            }
        }
        else if (todo == "B" || todo == "b")
        {
            moveitems(items, thebag, thetime);//lets user move things from items to thebag
        }
        else
        {
            repeat = "No";
        }

        if (todo != "c" && todo != "C")
        {
            cout << "Would you like to something else in this room?" << endl;
            cin >> repeat;
            while ((repeat != "yes") && (repeat != "Yes") && (repeat != "no") && (repeat != "No"))//checking user input
            {
                cout << "I'm sorry. Could you re-enter that as the word yes or no?" << endl;
                cin >> repeat;
            }

            if (repeat == "yes" || repeat == "Yes")
            {
                cout << "Then you can do the following:" << endl;
                cout << endl;
                cout << "A. See what you can take from the room." << endl;
                cout << "B. Take something from the room." << endl;
                cout << "C. Move on." << endl;
                cout << "Enter the letter A, B, or C." << endl;

                cin >> todo;

                while (todo != "A" && todo != "a" && todo != "B" && todo != "b" && todo != "C" && todo != "c" && todo != "D" && todo != "d")//checking user input
                {
                    cout << "Would you enter that in as the letter A, B, or C?" << endl;
                    cin >> todo;
                }
            }
        }

    }
}
