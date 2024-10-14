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
    int numberOfSteps = 0; //The number of steps taken
    int whileNumberOfSteps = 0; //The number of steps used by the while loop; This is so the original number of steps doesn't change when you exit the while loop.
    int direction; //Used by the random number gen
    int north = 0; //North & South; pos = north, neg = south
    int east = 0; //East & West; pos = east, neg = west
    
    int numberOfTimesCodeRan = 0;
    int first, second, third, fourth, fifth, sixth, seventh, eighth, nineth, tenth = 0; //For the extra credit; the 10 times the code will run

    while (whileNumberOfSteps >= 0) {
        direction = rand() % 4 + 1; //random number between 1 and 4 so each is 25% - 1 means North, 2 means South, 3 means East and 4 means West
        cout << endl;
        switch (direction) { //does the code for one case based on the random gen
        case (1): //North
            cout << "Step " << numberOfSteps << endl;
            north = north + 1;
            numberOfSteps = numberOfSteps + 1;
            whileNumberOfSteps = numberOfSteps;
        break;

        case (2): //South
            cout << "Step " << numberOfSteps << endl;
            north = north - 1;
            numberOfSteps = numberOfSteps + 1;
            whileNumberOfSteps = numberOfSteps;
        break;

        case (3): //East
            cout << "Step " << numberOfSteps << endl;
            east = east + 1;
            numberOfSteps = numberOfSteps + 1;
            whileNumberOfSteps = numberOfSteps;
        break;

        case (4): //West
            cout << "Step " << numberOfSteps << endl;
            east = east - 1;
            numberOfSteps = numberOfSteps + 1;
            whileNumberOfSteps = numberOfSteps;
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
    
        if (north == 3 && east == 2){
            whileNumberOfSteps = -1; //Breaks the while loop
        }   
    }

    return 0;
}

/*
    1) 60 steps
    2) 48 steps
    3) 1594 steps
    4) 354 steps
    5) 15084 steps
    6) 1350 steps
    7) 22 steps
    8) 87018 steps
    9) 20 steps
    10) 258 steps

    Average steps = 10580.8
*/


//The average of running it 10 times is 

/*

Step 0
The robot has moved 0 blocks north and 1 blocks west
----------------------------------------------------
Step 1
The robot has moved 1 blocks south and 1 blocks west
----------------------------------------------------
Step 2
The robot has moved 0 blocks north and 1 blocks west
----------------------------------------------------
Step 3
The robot has moved 1 blocks south and 1 blocks west
----------------------------------------------------
Step 4
The robot has moved 0 blocks north and 1 blocks west
----------------------------------------------------
Step 5
The robot has moved 1 blocks south and 1 blocks west
----------------------------------------------------
Step 6
The robot has moved 1 blocks south and 0 blocks east
----------------------------------------------------
Step 7
The robot has moved 1 blocks south and 1 blocks east
----------------------------------------------------
Step 8
The robot has moved 1 blocks south and 2 blocks east
----------------------------------------------------
Step 9
The robot has moved 2 blocks south and 2 blocks east
----------------------------------------------------
Step 10
The robot has moved 2 blocks south and 3 blocks east
----------------------------------------------------
Step 11
The robot has moved 2 blocks south and 4 blocks east
----------------------------------------------------
Step 12
The robot has moved 3 blocks south and 4 blocks east
----------------------------------------------------
Step 13
The robot has moved 2 blocks south and 4 blocks east
----------------------------------------------------
Step 14
The robot has moved 1 blocks south and 4 blocks east
----------------------------------------------------
Step 15
The robot has moved 1 blocks south and 3 blocks east
----------------------------------------------------
Step 16
The robot has moved 0 blocks north and 3 blocks east
----------------------------------------------------
Step 17
The robot has moved 0 blocks north and 4 blocks east
----------------------------------------------------
Step 18
The robot has moved 1 blocks south and 4 blocks east
----------------------------------------------------
Step 19
The robot has moved 1 blocks south and 3 blocks east
----------------------------------------------------
Step 20
The robot has moved 0 blocks north and 3 blocks east
----------------------------------------------------
Step 21
The robot has moved 1 blocks north and 3 blocks east
----------------------------------------------------
Step 22
The robot has moved 1 blocks north and 4 blocks east
----------------------------------------------------
Step 23
The robot has moved 1 blocks north and 3 blocks east
----------------------------------------------------
Step 24
The robot has moved 2 blocks north and 3 blocks east
----------------------------------------------------
Step 25
The robot has moved 2 blocks north and 4 blocks east
----------------------------------------------------
Step 26
The robot has moved 1 blocks north and 4 blocks east
----------------------------------------------------
Step 27
The robot has moved 1 blocks north and 3 blocks east
----------------------------------------------------
Step 28
The robot has moved 0 blocks north and 3 blocks east
----------------------------------------------------
Step 29
The robot has moved 1 blocks south and 3 blocks east
----------------------------------------------------
Step 30
The robot has moved 1 blocks south and 2 blocks east
----------------------------------------------------
Step 31
The robot has moved 0 blocks north and 2 blocks east
----------------------------------------------------
Step 32
The robot has moved 0 blocks north and 3 blocks east
----------------------------------------------------
Step 33
The robot has moved 0 blocks north and 2 blocks east
----------------------------------------------------
Step 34
The robot has moved 1 blocks south and 2 blocks east
----------------------------------------------------
Step 35
The robot has moved 1 blocks south and 3 blocks east
----------------------------------------------------
Step 36
The robot has moved 2 blocks south and 3 blocks east
----------------------------------------------------
Step 37
The robot has moved 1 blocks south and 3 blocks east
----------------------------------------------------
Step 38
The robot has moved 0 blocks north and 3 blocks east
----------------------------------------------------
Step 39
The robot has moved 0 blocks north and 2 blocks east
----------------------------------------------------
Step 40
The robot has moved 1 blocks south and 2 blocks east
----------------------------------------------------
Step 41
The robot has moved 1 blocks south and 3 blocks east
----------------------------------------------------
Step 42
The robot has moved 2 blocks south and 3 blocks east
----------------------------------------------------
Step 43
The robot has moved 2 blocks south and 2 blocks east
----------------------------------------------------
Step 44
The robot has moved 2 blocks south and 1 blocks east
----------------------------------------------------
Step 45
The robot has moved 2 blocks south and 2 blocks east
----------------------------------------------------
Step 46
The robot has moved 2 blocks south and 3 blocks east
----------------------------------------------------
Step 47
The robot has moved 2 blocks south and 2 blocks east
----------------------------------------------------
Step 48
The robot has moved 1 blocks south and 2 blocks east
----------------------------------------------------
Step 49
The robot has moved 0 blocks north and 2 blocks east
----------------------------------------------------
Step 50
The robot has moved 0 blocks north and 3 blocks east
----------------------------------------------------
Step 51
The robot has moved 1 blocks north and 3 blocks east
----------------------------------------------------
Step 52
The robot has moved 2 blocks north and 3 blocks east
----------------------------------------------------
Step 53
The robot has moved 1 blocks north and 3 blocks east
----------------------------------------------------
Step 54
The robot has moved 1 blocks north and 2 blocks east
----------------------------------------------------
Step 55
The robot has moved 2 blocks north and 2 blocks east
----------------------------------------------------
Step 56
The robot has moved 2 blocks north and 1 blocks east
----------------------------------------------------
Step 57
The robot has moved 1 blocks north and 1 blocks east
----------------------------------------------------
Step 58
The robot has moved 2 blocks north and 1 blocks east
----------------------------------------------------
Step 59
The robot has moved 3 blocks north and 1 blocks east
----------------------------------------------------
Step 60
The robot has moved 3 blocks north and 2 blocks east
----------------------------------------------------
*/