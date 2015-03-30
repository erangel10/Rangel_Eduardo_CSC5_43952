/* 
 * File:   main.cpp
 * Author: Eduardo Rangel
 *Purpose:Minimum/Maximum
 * Created on March 29, 2015, 9:48 AM
 */
//System Libraries
#include <iostream>

using namespace std;
//User Libraries

//Global Constants

//System Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //declare variables
    int num1,num2;
    
    //Prompt user for input
    cout<<"Please enter two numbers (ie x x)"<<endl;
    cin>>num1>>num2;
    //Use conditional operator to decide which number if larger and smaller
    cout << (num1==num2 ? "Both numbers are equal!" : (num1>num2) ? "The first number is greater!" : "The second number is greater!");
    

    return 0;
}

