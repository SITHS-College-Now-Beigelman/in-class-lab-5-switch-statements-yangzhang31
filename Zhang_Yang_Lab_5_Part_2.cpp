//Yang Zhang
//Lab 5 part 2
//10.8.2024

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    //Creating Variables
    float gigabyte;
    float lowQuality = 0.0432; //Per Hour in GB
    float normalQuality = 0.072; //Per Hour in GB
    float highQuality = 0.1152; //Per Hour in GB
    float monthLow; //Monthly Rate for low quality
    float monthNormal; //Monthly Rate for normal quality
    float monthHigh; //Monthly Rate for high quality
    int typeOfMusic;

    //Userinput 
    cout << "Please input the number of gigabytes in your monthly hotspot plan: "; //Prompts user for the gigabytes in monthly hotspot
    cin >> gigabyte;
    cout << "Please input the quality of the music you are streaming (1 for low quality, 2 for normal quality, 3 for high quality)"; //Prompts user for quality of the music
    cin >> typeOfMusic;

    cout << endl; //Make it look pretty :<
    cout << "_____________________________";
    cout << endl;
    cout << endl;

    //Calculations
    cout << fixed << setprecision(2);
    switch (typeOfMusic) { //Switch statement for the type of music variable
        case (1): //If the int is = to 1 then do the math
            cout << "You are able to stream " << gigabyte * lowQuality << " hours of low quality music per month";
            break;
        case (2):
            cout << "You are able to stream " << gigabyte * normalQuality << " hours of normal quality music per month";
            break;
        case (3):
            cout << "You are able to stream " << gigabyte * highQuality << " hours of high quality music per month";
            break;
        default: //If everything else is false do this
        cout << "Invaild Input, please reinput." << endl;
    }
    
    return 0;

}

/*
Please input the number of gigabytes in your monthly hotspot plan: 100
Please input the quality of the music you are streaming (1 for low quality, 2 for normal quality, 3 for high quality)2

_____________________________

You are able to stream 7.20 hours of normal quality music per month
*/