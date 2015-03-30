/* 
 * File:   main.cpp
 * Author: Eduardo Rangel
 *Purpose: Math Tutor
 * Created on March 29, 2015, 10:42 AM
 */

#include <iostream>

using namespace std;
//User Libraries

//Global Constants

//System Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //declare variables
    float answer;
    //Prompt the user for input
    cout<<"Please enter the answer for the following problem 300 + 400="<<endl;
    cin>>answer;
    
    //If/else statement 
    if (answer == 700){
        cout<<"Congratulations the answer is correct"<<endl;
        
    }
    else if (answer != 700){
        cout<<"Sorry the answer is incorrect"<<endl;
    }


    return 0;
}

