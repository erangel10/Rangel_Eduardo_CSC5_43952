/* 
 * File:   main.cpp
 * Author: Eduardo Rangel
 *Purpose: Freezing and Boiling Points
 * Created on March 30, 2015, 4:09 PM
 */
//system libraries
#include <iostream>
#include <iomanip>
using namespace std;
//user libraries

//global constants

//system prototypes

//execution begins here
int main(int argc, char** argv) {
    //declare variables
    float temp;
    //prompt user for input
     cout << "Enter a temperature in Farenheit: ";
    cin >> temp;
    //output using the if else statement what type of 
    cout << "\nSubstances that will freeze: \n";
        if(temp <= -173)
    cout << "Ethyl Alcohol \n";
        if(temp <= -38)
    cout << "Mercury \n";
        if(temp <= -362)
    cout << "Oxygen \n";
        if(temp <= 32)
    cout << "Water \n";
    cout << "\nSubstances that will boil: \n";
        if(temp >= 172)
    cout << "Ethyl Alcohol \n";
        if(temp >= 676)
    cout << "Mercury \n";
        if(temp >= -306)
    cout << "Oxygen \n";
        if(temp >= 212)
    cout << "Water \n";
    
    //Exit
    return 0;
}

