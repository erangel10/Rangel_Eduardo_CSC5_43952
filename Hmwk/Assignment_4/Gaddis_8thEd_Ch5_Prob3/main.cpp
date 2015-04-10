/* 
 * File:   main.cpp
 * Author: Eduardo Rangel
 * Purpose: calculate the Ocean levels in 25 years
 * Created on April 9, 2015, 3:28 PM
 */
//System Libraries
#include <iostream>

using namespace std;
//User Libraries

//Global Constants

//System Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    float rise=1.5;
    //Use for loop to display the level of the ocean in 25 years
    for(int years=1;years<=25;years++){
        cout << " " << years << "\t" << rise * years << endl;
    }
    //Exit
    return 0;
}

