#include "roomswithpeople.h"
#include "moveitems.h"
#include "room.h"
#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::string;

void roomswithpeople::dostuff(string thebag[], int &thetime)
{
    cout << "It has been " << thetime << " minutes since the ship began to sink." << endl;
    cout << endl;
    string todo;//what type of thing the user wants to do
    string repeat = "yes";//to see if the user wants to do something additional in the room

    thetime++;//time for moving into a room

    cout << "You are in " << roomname << ". There is one other person here." << endl;
    cout << "You can do the following:" << endl;
    cout << endl;
    cout << "A. See what the other passenger has to say" << endl;
    cout << "B. See what you can take from the room." << endl;
    cout << "C. Take something from the room." << endl;
    cout << "D. Move on." << endl;
    cout << "Enter the letter A, B, C, or D" << endl;

    cin >> todo;

    while (todo != "A" && todo != "a" && todo != "B" && todo != "b" && todo != "C" && todo != "c" && todo != "D" && todo != "d")
    {
        cout << "Would you enter that in as the letter A, B, C, or D?" << endl;
        cin >> todo;
    }

    while (repeat != "No" && repeat != "no")
    {
        cout << endl;

        if (todo == "A" || todo == "a")
        {
            cout << "The passenger turns to you and says: " << person << endl;
            cout << endl;
            thetime++;//time for talking to someone

        }
        else if (todo == "B" || todo == "b")
        {
            cout << "You look around the room and see what there is to take: " << endl;
            cout << endl;
            for (unsigned int i = 0; i<items.size(); i++)//printing the items in the room
            {
                if (items[i] != "empty")
                {
                    cout << items[i] << endl;
                }
            }
            cout << endl;
        }
        else if (todo == "C" || todo == "c")
        {
            moveitems(items, thebag, thetime);//lets user move things from items into thebag
        }
        else
        {
            repeat = "No";
        }

        if (todo != "d" && todo != "D")
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
                cout << "A. See what the other passenger has to say" << endl;
                cout << "B. See what you can take from the room." << endl;
                cout << "C. Take something from the room." << endl;
                cout << "D. Move on." << endl;
                cout << "Enter the letter A, B, C, or D" << endl;

                cin >> todo;

                while (todo != "A" && todo != "a" && todo != "B" && todo != "b" && todo != "C" && todo != "c" && todo != "D" && todo != "d")//checking user input
                {
                    cout << "Would you enter that in as the letter A, B, C, or D?" << endl;
                    cin >> todo;
                }
            }
        }

    }
}

string roomswithpeople::getperson()
{
    return person;
}

void roomswithpeople::setperson(string theperson)
{
    person = theperson;
}

