/* 
 * File:   main.cpp
 * Author: Eduardo Rangel
 * Purpose: Celsius Temperature Table
 * Created on April 19, 2015, 2:56 PM
 */
//System Libraries
#include <iostream>

using namespace std;
//User libraries

//Global Constants

//System prototypes
float celsius(int fTemp);
//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    float temp;
    //Use the for loop to output the table of temperatures from 0 to 20
    for (int i=0;i <=20;i++){
        
        cout << i << "\t" << celsius(i) << endl;
    }

    return 0;
}
//New Function 
float celsius (int fTemp){
    //Calculate the Temperature to fahrenheit and return it
    return (5.0/9.0)*((double)fTemp - 32.0);
}
