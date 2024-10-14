//Yang Zhang
//Lab 5 part 1
//10.8.2024

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    //Creating Variables
    float duration; //Userset Variable for duration of exercise 
    float weight; //Userset Variable for their weight
    float met; //Userset Variable for the metabolic equivalent of the exercise
    float walkingS; //Computer Calculated Variable for walking slowly
    float walkingQ; //Computer Calculated Variable for walking quickly
    float jogging; //Computer Calculated Variable for jogging
    int typeOfExercise;

    //User Input 
    cout << "Please input the duration of time you exercised for in minutes: "; //Prompts user for duration of exercise
    cin >> duration;
    cout << endl;
    cout << "Please input your weight in kilograms: "; //Prompts user for their weight in kg
    cin >> weight;
    cout << endl;
    cout << "What exercise did you preform? (1 for Walking, 2 for SpeedWalking, 3 for Jogging): "; //Prompting user for type of exercise
    cin >> typeOfExercise;

    cout << endl; //Make the output look better
    cout << "_____________________________________" << endl;
    cout << endl;

    //if/switch statements 
    cout << fixed << setprecision(2) << endl; //Round to the second decimal point
    switch (typeOfExercise) { //the switch statement for the int value typeOfExercise
    case (1): //If it is one then do the math and print.
        walkingS = duration * (2 * 3.5 * weight) / 200;
        cout << "You will burn " << walkingS << " calories walking" << endl;
        break;
    case (2):
        walkingQ = duration * (3 * 3.5 * weight) / 200;
        cout << "You will burn " << walkingQ << " calories speed walking" << endl;
        break;
    case (3):
        jogging = duration * (8.8 * 3.5 * weight) / 200;
        cout << "You will burn " << jogging << " calories jogging" << endl;
        break;
    default: //If all else is false then print this and try again.
        cout << "invaild input, please try  again." << endl;
    }

    //Make the output look better
    cout << "_____________________________________" << endl;
    cout << endl;

    //Extra credit
    float caloriesUserWantsBurn;
    float weightAgain;

    //User input
    cout << "Optional - Please input the amount of calories you wish to burn: ";
    cin >> caloriesUserWantsBurn;
    cout << endl;
    cout << "Please input your weight in kilograms: ";
    cin >> weightAgain;
    cout << endl;

    //if/switch statements
    switch (typeOfExercise) { //the switch statement for the int value typeOfExercise
    case (1): //If it is one then do the math and print.
        cout << "If you walk for " << duration << " minutes you will burn " << caloriesUserWantsBurn / ((2 * 3.5 * weightAgain) / 200) << " calories." << endl;
        break;
    case (2):
        cout << "If you speed walk for " << duration << " minutes you will burn " << caloriesUserWantsBurn / ((3 * 3.5 * weightAgain) / 200) << " calories." << endl;
        break;
    case (3):
        cout << "If you jog for " << duration << " minutes you will burn " << caloriesUserWantsBurn / ((8.8 * 3.5 * weightAgain) / 200) << " calories." << endl;
        break;
    default: //If all else is false then print this and try again.
        cout << "invaild input, please try  again." << endl;
    }

    return 0;
}

/*
Please input the duration of time you exercised for in minutes: 10

Please input your weight in kilograms: 120

What exercise did you preform? (1 for Walking, 2 for SpeedWalking, 3 for Jogging): 3

_____________________________________


You will burn 184.80 calories jogging
_____________________________________

Optional - Please input the amount of calories you wish to burn: 100

Please input your weight in kilograms: 120

If you jog for 10.00 minutes you will burn 5.41 calories.
*/
