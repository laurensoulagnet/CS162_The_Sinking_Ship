/*
Author:                      Lauren Miller
Date Created:                11/30/14
Date Last Modified:          12/3/14
File Name:                   main.cpp

Overview:
    The user plays a passenger on a sinking ship. The passenger can take items from rooms on the ship or talk to
    the other characters for ideas about what to take. However, every action takes time. The rooms fill with water,
    one by one, until the ship sinks. If the passenger has found a lifeboat, they survive. Then, depending on the
    direction the passenger goes, they may be stranded, picked up by pirates, washed ashore a deserted island, or
    be attacked by a giant squid. Each of these situations requires a different set of items to survive, without
    which the passenger will be sent to a watery grave.
Input:
    The user is prompted for and needs to enter things for their passenger to do.
Output:
    The user is told what room their character is in, what they can do, and, while they're on the ship, what time it is.
    Eventually, the user is either told that they survive or that they die.
*/

#include "room.h"
#include "setrooms.h"
#include "finalroom.h"
#include "ocean.h"
#include "roomswithpeople.h"
#include "roomwithoutpeople.h"
#include <iostream>
#include <vector>
#include <string>
using std::vector;
using std::string;
using std::cout;
using std::cin;
using std::endl;
int main()
{
    int time = 0;//minutes of time since the ship has begun to sink
    string bag[5] = {"empty", "empty", "empty", "empty", "empty"};//the bag the user carries with them.
    room* nextroom;//the next room the user will visit
    string seekey;//to check whether the grader wants to see the game key

    setrooms(nextroom);//putting the ship together


    cout << "Would you like to see a key to this game? Yes or no?" << endl;
    cin >> seekey;
    while ((seekey != "yes") && (seekey != "Yes") && (seekey != "no") && (seekey != "No"))//checking user input
    {
        cout << "I'm sorry. Could you re-enter that as the word yes or no?" << endl;
        cin >> seekey;
    }

    if (seekey == "Yes" || seekey == "yes")//if the grader wants to see the key
    {
        cout << "OK, so here's the basic idea: The user plays a passenger on a " << endl;
        cout << "sinking ship. The passenger can take items from rooms on the ship " << endl;
        cout << "or talk to the other characters for ideas about what to take. " << endl;
        cout << "However, every action takes time. The rooms fill with water, one by " << endl;
        cout << "one, until the ship sinks. If the passenger has found a lifeboat, they " << endl;
        cout << "survive. Then, depending on the direction the passenger goes, they may " << endl;
        cout << "be stranded, picked up by pirates, washed ashore a deserted island, or " << endl;
        cout << "be attacked by a giant squid. Each of these situations requires a " << endl;
        cout << "different set of items to survive, without which the passenger will be " << endl;
        cout << "sent to a watery grave. " << endl;

        cout << endl;

        cout << "To survive the ocean you need a lifeboat, which you can take from the " << endl;
        cout << "storage room, two rooms South of the deck. Then, additionally, you need... " << endl;
        cout << endl;
        cout << "apples, which you can take from the kitchen, one room South of the deck, " << endl;
        cout << " if you want to survive the squid. You need to get a bag of cash from the " << endl;
        cout << "millionaire's bedroom, one room East of the storage room, to survive pirates." << endl;
        cout << "To survive the deserted island, you need a survival wilderness book from the " << endl;
        cout << "library, which is one room to the North of the millionaire's bedroom. To " << endl;
        cout << "survive being stranded, take a potion from the wizard's bedroom, which is " << endl;
        cout << "one room to the East of the storage room. If you have any questions about " << endl;
        cout << "where things are, there is a sketch included in my document that shows where" << endl;
        cout << "everything is. This is probably a pain for you to test. Sorry!" << endl;

    }

    cout << endl;
    cout << "Now let's begin..." << endl;
    cout << endl;

    cout << "You awake from your nap to realize that while you've been sleeping, " << endl;
    cout << "the cruise ship you're on has sprung a leak and is quickly sinking. " << endl;
    cout << "You only have about fifty minutes before the ship sinks and you drown. " << endl;
    cout << "Still, there must be something you can do! You have your bag, but it can " << endl;
    cout << "only hold five items, and they're really a pain to take out. What to " << endl;
    cout << "take? What to do? You look around... " << endl;
    cout << endl;

    while (nextroom != NULL)//keeps going till the passenger dies or wins
    {
        nextroom->dostuff(bag, time);
        nextroom = (nextroom->picknextroom(bag, time));
    }


    return 0;
}
