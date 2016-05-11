#ifndef MOVEITEMS_H
#define MOVEITEMS_H

#include <iostream>
#include <vector>
#include <string>
using std::vector;
using std::string;

/*
void moveitems(vector<string> &theitems, string thebag[], int &thetime);

    Purpose: allows user to take items from a room and move it into their bag
    Entry: takes a vector of the items in a room, the bag array of "empty" or what the user
    has previously taken, and the time
    Exit: one of theitems may have been replaced by "empty", part of the bag array marked
    "empty" may be filled with something previously in theitems, and if so time will have
    been increased

*/

void moveitems(vector<string> &theitems, string thebag[], int &thetime);


#endif // MOVEITEMS_H
