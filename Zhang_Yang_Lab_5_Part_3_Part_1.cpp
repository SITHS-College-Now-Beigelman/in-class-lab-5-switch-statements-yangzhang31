//Yang Zhang
//Lab 5 part 3 part 1
//10.8.2024

#include <iostream>
#include <iomanip>
#include <ctime>

using namespace std;

int main() {

    srand(time(0));

    //Variables
    int numberOfSteps = 25;
    int direction;
    int north = 0;
    int east = 0;
    int totalBlocksTraveled;
    string uselessVaraible;
    
    while (numberOfSteps != 0) {
        direction = rand() % 4 + 1; //random number between 1 and 4 so each is 25% - 1 means North, 2 means South, 3 means East and 4 means West
        cout << endl;
        switch (direction) { //does the code for one case based on the random gen
        case (1): //North
            cout << "Robot has moved 1 block north! " << endl;
            north = north + 1;
        break;

        case (2): //South
            cout << "Robot has moved 1 block south! " << endl;
            north = north - 1;
        break;

        case (3): //East
            cout << "Robot has moved 1 block east! " << endl;
            east = east + 1;
        break;

        case (4): //West
            cout << "Robot has moved 1 block west! " << endl;
            east = east - 1;
        break;
        }

        if (north >= 0) {
                cout << "The robot has moved " << north << " blocks north and ";
            }
        if (north < 0) {
            cout << "The robot has moved " << north * (-1) << " blocks south and ";
        }
        if (east >= 0) {
            cout << east << " blocks east" << endl;
        }
        if (east < 0) {
            cout << east * (-1) << " blocks west" << endl;
        }
        cout << "----------------------------------------------------";
        
    
        numberOfSteps = numberOfSteps - 1; //Makes sure the while loop doesn't loop forever

    }
    return 0;
}

/*
Robot has moved 1 block north!
The robot has moved 1 blocks north and 0 blocks east
----------------------------------------------------
Robot has moved 1 block west!
The robot has moved 1 blocks north and 1 blocks west
----------------------------------------------------
Robot has moved 1 block north!
The robot has moved 2 blocks north and 1 blocks west
----------------------------------------------------
Robot has moved 1 block west!
The robot has moved 2 blocks north and 2 blocks west
----------------------------------------------------
Robot has moved 1 block east!
The robot has moved 2 blocks north and 1 blocks west
----------------------------------------------------
Robot has moved 1 block west!
The robot has moved 2 blocks north and 2 blocks west
----------------------------------------------------
Robot has moved 1 block south!
The robot has moved 1 blocks north and 2 blocks west
----------------------------------------------------
Robot has moved 1 block north!
The robot has moved 2 blocks north and 2 blocks west
----------------------------------------------------
Robot has moved 1 block south!
The robot has moved 1 blocks north and 2 blocks west
----------------------------------------------------
Robot has moved 1 block north!
The robot has moved 2 blocks north and 2 blocks west
----------------------------------------------------
Robot has moved 1 block north!
The robot has moved 3 blocks north and 2 blocks west
----------------------------------------------------
Robot has moved 1 block south!
The robot has moved 2 blocks north and 2 blocks west
----------------------------------------------------
Robot has moved 1 block north!
The robot has moved 3 blocks north and 2 blocks west
----------------------------------------------------
Robot has moved 1 block west!
The robot has moved 3 blocks north and 3 blocks west
----------------------------------------------------
Robot has moved 1 block east!
The robot has moved 3 blocks north and 2 blocks west
----------------------------------------------------
Robot has moved 1 block north!
The robot has moved 4 blocks north and 2 blocks west
----------------------------------------------------
Robot has moved 1 block west!
The robot has moved 4 blocks north and 3 blocks west
----------------------------------------------------
Robot has moved 1 block east!
The robot has moved 4 blocks north and 2 blocks west
----------------------------------------------------
Robot has moved 1 block north!
The robot has moved 5 blocks north and 2 blocks west
----------------------------------------------------
Robot has moved 1 block east!
The robot has moved 5 blocks north and 1 blocks west
----------------------------------------------------
Robot has moved 1 block north!
The robot has moved 6 blocks north and 1 blocks west
----------------------------------------------------
Robot has moved 1 block north!
The robot has moved 7 blocks north and 1 blocks west
----------------------------------------------------
Robot has moved 1 block south!
The robot has moved 6 blocks north and 1 blocks west
----------------------------------------------------
Robot has moved 1 block west!
The robot has moved 6 blocks north and 2 blocks west
----------------------------------------------------
Robot has moved 1 block east!
The robot has moved 6 blocks north and 1 blocks west
----------------------------------------------------
*/