/* 
 * File:   main.cpp
 * Author: Eduardo Rangel
 *Purpose: To create a Random number Guessing Game
 * Created on April 8, 2015, 10:34 AM
 */
//System libraries
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
//User libraries

//Global Constants

//System Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare Variables
    srand(static_cast<unsigned int>(time(0)));
    int number;
    //Random number generator
    number = rand()%3+1;
    cout<<number<<endl;
    //Prompt user for Input
    cout<<"Enter the number of your guess"<<endl;
    cin>>number;
    

    return 0;
}

