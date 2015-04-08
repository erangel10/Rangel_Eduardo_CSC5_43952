/* 
 * File:   main.cpp
 * Author: Eduardo Rangel
 * Purpose: sum of numbers
 *Created on April 6, 2015, 9:38 AM
 */
//System libraries
#include <iostream>

using namespace std;
//User Libraries

//Global Constants

//System Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    int sum=0,number;
    //prompt the user for input 
    cout<<"Please enter a number "<<endl;
    cin>>number;
    //Use the for loop to calculate the number from 1 to the entered number by the user
    for (int total=0;total<=number;total++){
        //Input validation
            sum = sum + number;
            total++;
       
        
    }

    return 0;
}

