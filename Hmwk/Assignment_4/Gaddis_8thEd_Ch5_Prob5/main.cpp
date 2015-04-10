/* 
 * File:   main.cpp
 * Author: Euardo Rangel
 * Purpose: Membership Fees Increase
 * Created on April 7, 2015, 1:44 PM
 */
//System Libraries
#include <iostream>

using namespace std;
//User Libraries

//Global Constants

//System prototypes

//Execution Begins here
int main(int argc, char** argv) {
    //Declare Variables
    float fee=0.04;
    float member=2500;
    //Use the for loop to display the fee membership for the next 6 years
    for (int year=1;year<=6;year++){
        member += (member * fee);
        cout << "Membership Fee = " << member << "\t";
        cout << "Year =  " << year << endl;
    }

    return 0;
}

