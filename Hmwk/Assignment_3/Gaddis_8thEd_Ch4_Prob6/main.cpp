/* 
 * File:   main.cpp
 * Author: Eduardo Rangel
 *Purpose: Mass and Weight
 * Created on March 30, 2015, 2:45 PM
 */
//system libraries
#include <iostream>

using namespace std;
//user libraries

//global constants

//system prototypes

//execution begins here
int main(int argc, char** argv) {
    //Declare Variables
    float mass;
    //Prompt the user for input
    cout<<"Please enter the mass of the object"<<endl;
    cin>>mass;
    float weight = mass * (9.8);
    //Else/If statement
    cout<<"The weight of the object is "<<weight<<endl;
    if ( weight > 1000 ){
        cout<<"The object is too heavy"<<endl;
    }
    else if (weight < 10){
        cout<<"The object is too light"<<endl;
    }
    

    return 0;
}

