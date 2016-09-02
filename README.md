# The Sinking Ship
A C++, text-based console game simulating the player’s search for important items and escape from a sinking ship.

#Concept
You play a passenger on a sinking ship. The passenger can take items from rooms on the ship or talk to the non-player characters for ideas about what to take. However, every action takes time. The rooms fill with water, one by one, until every the ship finally sinks. 
If the passenger has found a lifeboat, they survive the sinking of the ship. The passenger must then select which direction to paddle.

Depending on the direction selected, the passenger will be stranded at sea, picked up by pirates, washed ashore a deserted island, or be attacked by a giant squid. Each scenario requires a different set of items taken from the boat to survive, without which the passenger will be sent to a watery grave.

#Design Summary
The passenger has a limited amount of escape the sinking ship. Moving to a room takes a minute. Talking to someone takes a minute. Putting an item in passenger's bag takes a minute. Removing an item from the bag takes a minute. When the countdown reaches zero minutes, the ship has sunk.

If the passenger is not on the deck and has a lifeboat when the ship sinks, they survive. If the passenger is in one of the rooms of the ship when that room is flooded or is on the deck without the lifeboat when it floods, they die and the game ends. To have the passenger survive the sinking of the ship, the player must have the passenger find the lifeboat, at least.

The passenger has an array/bag that can hold five items. The player can add and remove items from the bag. If the player tries to put an item in the bag and there is no space, the player is told that there is no space available.

The Room superclass will have 4 pointers to other rooms or the sea, a string that is the name of the room or “a flooded room”, a bool variable to say whether or not the room is filled with water, an int variable the determines at what minute the room is flooded, and a string vector of items that the passenger can take. The Room class also has a virtual "dostuff" function that either tells the passenger what's in the room, allows the passenger talk to NPCs, allows the passenger to add items to their bag. "dostuff" also manages the how many minutes are left until the ship sinks and tells the player the passenger's fate if they're in a room when it is submerged. The Room superclass also has a virtual "picknextroom" function that lets player choose which way to go, this is redefined for normal rooms on the ship, but not "final rooms", the ocean, and closets. The superclass also includes all the requisite setting and getting functions.

The subclasses of the Room class are public rooms with people in them, bedrooms, the ocean, and "final rooms" that are the scenarios the passenger will face if they survive the sinking of the ship.

Each public room subclass will include an additional string of what the NPC character says to the passenger and an array of items in the room. Each instance of the bedroom subclass has an array of strings standard set of bedroom items as well as personal items associated with characters found elsewhere on the ship.a redefined and limited "dostuff" function. The ocean subclass has no unique variables or functions. The "final rooms" subclass, used for the scenarios the passenger faces if they survive the ocean, has a key string that matches one of the items the passenger might have in their bag, a sting describing their situation if they have the item, and a string describing their situation if they do not have the key item.

The game also uses a vector of all the rooms; a set game function that sets the details of each individual room; and a room by room function that passes along time left before the ship sinks, the array of items in the passenger's bag, and checks the status to confirm that the passenger has not drowned while in the room. The game also uses a special bag function that moves an item from a room to the passenger's bag, moves an item from the passenger's bag to the room, or alerts the player that there is no space in the passenger's bag.
