#include "moveitems.h"
#include <iostream>
#include <vector>
#include <string>
using std::vector;
using std::string;
using std::cout;
using std::cin;
using std::endl;


void moveitems(vector<string> &theitems, string thebag[], int &thetime)
{
    string anitem;//to hold the item the user would like
    string yesorno;//to check if the user would like to take an item
    int notempty = 0;//measures how many of the spaces are now empty


    for (unsigned int i = 0; i < theitems.size(); i++)
    {
        int bagposition = -1;//the position in the bag where there is an empty spot
        if (theitems[i] != "empty")//if the room has items in it
        {
            notempty++;
            cout << "Would you like to take " << theitems[i] << "?" << endl;
            cin >> yesorno;
            while (yesorno != "Yes" && yesorno != "yes" && yesorno != "no" && yesorno != "No")//checking user input
            {
                cout << "Would you retype that as the word yes or no?" << endl;
                cin >> yesorno;
            }
            if (yesorno == "yes" || yesorno == "Yes")//taking item from room
            {

                thetime++;
                for (unsigned int j = 0; j < 5; j++)//finding the empty spot in the bag
                {
                    if(thebag[j] == "empty")
                    {
                        bagposition = j;
                    }
                }
                if (bagposition < 0)//if there's not any empty space in he bag
                {
                    cout << "Unfortunately, you don't have any free space in your bag!" << endl;
                    cout << "You can't take any more items with you!" << endl;
                }
                else//if there's space for another item
                {
                    anitem = theitems[i];
                    theitems[i] = "empty";
                    thebag[bagposition] = anitem;
                }
            }


        }
    }

    if (notempty == 0)
    {
        cout << "There's nothing left in the room for you to take." << endl;
    }

}
