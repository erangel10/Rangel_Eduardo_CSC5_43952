/* 
 * File:   main.cpp
 * Author: Eduardo Rangel
 *Purpose: Celsius to Fahrenheit
 * Created on March 18, 2015, 7:26 PM
 */
//System Libraries
#include <iostream>
//User libraries

//Global Constants

//Function Prototypes

//Execution begins here1!
using namespace std;


int main(int argc, char** argv) {
    //declare Variables
    float celsius,farenht;
    //Prompt the user for Input
    cout <<"Please enter the temperature in Celsius"<<endl;
    cin>>celsius;
    //Calculate 
    farenht = celsius * 9 / 5 + (32);
    cout<<"The temperature in celsius to farenheit is "<<farenht<<"F"<<endl;
    
    //Exit
    return 0;
}

