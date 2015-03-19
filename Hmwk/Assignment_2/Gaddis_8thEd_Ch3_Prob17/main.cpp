/* 
 * File:   main.cpp
 * Author: Eduardo Rangel
 *Purpose: Math calculator
 * Created on March 14, 2015, 11:45 AM
 */
//System Libraries
#include <iostream>

using namespace std;
//user Libraries

//Global Libraries

//Execution starts here!
int main(int argc, char** argv) {

    //Declare variables
    float num1,num2;
    //Input the first number to sum
    cout<<"Please enter the first number you want to add"<<endl;
    cin>>num1;
    //Input second number to sum
    cout <<"Please enter the second number you want to add"<<endl;
    cin>>num2;
    //Output the answer
    cout<<"The answer is "<< num1<<" + "<<num2<<" = "<<num1 + num2<<endl;
    
    return 0;
}

