#include "setrooms.h"
#include "finalroom.h"
#include "ocean.h"
#include "room.h"
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

void setrooms(room*& firstroom)
{

    //creating all rooms
    room* thedeck = new roomswithpeople;
    room* thekitchen = new roomswithpeople;
    room* thearmory = new roomswithpeople;
    room* thelibrary = new roomswithpeople;
    room* thestorageroom = new roomswithpeople;
    room* thewizardsbedroom = new roomwithoutpeople;
    room* themillionairesbedroom = new roomwithoutpeople;
    room* thecaptainsbedroom = new roomwithoutpeople;
    room* thecooksbedroom = new roomwithoutpeople;
    room* theocean = new ocean;
    room* thesquid = new finalroom;
    room* thepirates = new finalroom;
    room* thedesertedisland = new finalroom;
    room* stranded = new finalroom;
    room* flooded = new roomwithoutpeople;

    //setting pointers for to other rooms
    thedeck->setdirections(theocean, theocean, thekitchen, theocean);
    thearmory->setdirections(theocean, thekitchen, thewizardsbedroom, theocean);
    thekitchen->setdirections(thedeck, thelibrary, thestorageroom, thearmory);
    thelibrary->setdirections(theocean, theocean, themillionairesbedroom, thekitchen);
    thewizardsbedroom->setdirections(thearmory, thestorageroom, thecaptainsbedroom, theocean);
    thestorageroom->setdirections(thekitchen, themillionairesbedroom, thecooksbedroom, thecaptainsbedroom);
    themillionairesbedroom->setdirections(thelibrary, theocean, flooded, thestorageroom);
    thecaptainsbedroom->setdirections(thewizardsbedroom, thecooksbedroom, flooded, flooded);
    thecooksbedroom->setdirections(thestorageroom, flooded, flooded, thecaptainsbedroom);
    theocean->setdirections(thesquid, thepirates, thedesertedisland, stranded);

    //setting time that the rooms flood
    thedeck->setfloodtime(50);
    thearmory->setfloodtime(40);
    thekitchen->setfloodtime(35);
    thelibrary->setfloodtime(45);
    thewizardsbedroom->setfloodtime(25);
    thestorageroom->setfloodtime(20);
    themillionairesbedroom->setfloodtime(30);
    thecaptainsbedroom->setfloodtime(15);
    thecooksbedroom->setfloodtime(10);
    flooded->setfloodtime(0);

    //setting the name of each room
    thedeck->setroomname("the deck");
    thearmory->setroomname("the armory");
    thekitchen->setroomname("the kitchen");
    thelibrary->setroomname("the library");
    thewizardsbedroom->setroomname("the wizard's bedroom");
    thestorageroom->setroomname("the storage room");
    themillionairesbedroom->setroomname("the millionaire's bedroom");
    thecaptainsbedroom->setroomname("the captain's bedroom");
    thecooksbedroom->setroomname("the cook's bedroom");
    flooded->setroomname("a flooded room");

    //putting items in each room
    thedeck->items.push_back("a table");
    thedeck->items.push_back("a plate of mashed potatoes");
    thedeck->items.push_back("a mime");
    thedeck->items.push_back("a Christmas tree");
    thedeck->items.push_back("a pet cat");
    thedeck->items.push_back("a bottle of wine");
    thedeck->items.push_back("a pile of magazines");

    thearmory->items.push_back("an axe");
    thearmory->items.push_back("a cannon ball");
    thearmory->items.push_back("a pair of boxing gloves");
    thearmory->items.push_back("a box of gunpowder");

    thekitchen->items.push_back("a blender");
    thekitchen->items.push_back("a carrot");
    thekitchen->items.push_back("a crate of eggs");
    thekitchen->items.push_back("a spoon");
    thekitchen->items.push_back("a bag of apples");
    thekitchen->items.push_back("a spatula");

    thelibrary->items.push_back("a book about wilderness survival");
    thelibrary->items.push_back("a book about fancy knots");
    thelibrary->items.push_back("a book about newts");
    thelibrary->items.push_back("a book about lip gloss");
    thelibrary->items.push_back("a book about dangerous sea creatures");
    thelibrary->items.push_back("a book about evolutionary theory");
    thelibrary->items.push_back("a book about credit card fraud");

    thestorageroom->items.push_back("a lifeboat");
    thestorageroom->items.push_back("a DVD player");
    thestorageroom->items.push_back("a string of lights");
    thestorageroom->items.push_back("snow shoes");
    thestorageroom->items.push_back("a magic wand that sparkles");
    thestorageroom->items.push_back("a set of keys");

    themillionairesbedroom->items.push_back("a side table");
    themillionairesbedroom->items.push_back("a lamp");
    themillionairesbedroom->items.push_back("a mattress");
    themillionairesbedroom->items.push_back("a bedspread");
    themillionairesbedroom->items.push_back("pillow");
    themillionairesbedroom->items.push_back("a credit card");
    themillionairesbedroom->items.push_back("a bag of cash");

    thecaptainsbedroom->items.push_back("a side table");
    thecaptainsbedroom->items.push_back("a lamp");
    thecaptainsbedroom->items.push_back("a mattress");
    thecaptainsbedroom->items.push_back("a bedspread");
    thecaptainsbedroom->items.push_back("pillow");
    thecaptainsbedroom->items.push_back("an egg");
    thecaptainsbedroom->items.push_back("a map");

    thecooksbedroom->items.push_back("a side table");
    thecooksbedroom->items.push_back("a lamp");
    thecooksbedroom->items.push_back("a mattress");
    thecooksbedroom->items.push_back("a bedspread");
    thecooksbedroom->items.push_back("pillow");
    thecooksbedroom->items.push_back("a bag of apples");

    thewizardsbedroom->items.push_back("a side table");
    thewizardsbedroom->items.push_back("a lamp");
    thewizardsbedroom->items.push_back("a mattress");
    thewizardsbedroom->items.push_back("a bedspread");
    thewizardsbedroom->items.push_back("pillow");
    thewizardsbedroom->items.push_back("a magic potion with the drawing of a fish on the bottle");
    thewizardsbedroom->items.push_back("a really cool hat");

    //setting what people in each room say to the user
    thedeck->setperson("There's a lifeboat around here somewhere, and we'll certainly need it when this ship sinks!");
    thearmory->setperson("What use is it being captain when I'll be ripped apart by the notorious apple-loving squid?");
    thekitchen->setperson("I heard that there are pirates nearby, but I bet they can be bribed.");
    thelibrary->setperson("I'm a wizard and can turn myself into a fish, but if you can find my transfiguration potion, it's yours!");
    thestorageroom->setperson("I heard there's land nearby, so if I can find a survival book, I'm fine.");

    //setting what key the user needs to survive the room
    theocean->setkey("a lifeboat");
    thepirates->setkey("a bag of cash");
    thesquid->setkey("a bag of apples");
    thedesertedisland->setkey("a book about wilderness survival");
    stranded->setkey("a magic potion with the drawing of a fish on the bottle");

    //setting what the user is told if they survive a room
    theocean->setlivephrase("You survive jumping into the freezing water and climb into your lifeboat!");
    thepirates->setlivephrase("You're able to bribe the pirates to take you back home!");
    thesquid->setlivephrase("You feed the squid her favorite food, apples, so she takes you home.");
    thedesertedisland->setlivephrase("You live a long life on the deserted island, thanks to the wilderness survival book.");
    stranded->setlivephrase("Drinking the potion turns you into a mermaid, and you live under the sea forever.");

    //setting what the user is told if they do not survive a room
    theocean->setdiephrase("You freeze to death within moments.");
    thepirates->setdiephrase("The pirates want nothing you have on you, and they cut off your head.");
    thesquid->setdiephrase("When the squid realizes that you don't have apples, it eats you whole.");
    thedesertedisland->setdiephrase("You have no wilderness skills and soon starve to death on the deserted island.");
    stranded->setdiephrase("You float in the open ocean for weeks, hoping for rescue, before you die of dehydration.");

    firstroom = thedeck;//setting the first room the user will visit
}
