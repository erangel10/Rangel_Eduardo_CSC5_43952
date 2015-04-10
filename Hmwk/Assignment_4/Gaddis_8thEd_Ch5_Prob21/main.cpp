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
        int random;
        bool tryAgn= true;
        char reply;
        int guess;
         //Prompt user for input 
        cout <<"Want to play a game?"<<endl;
        cout <<"Try and guess the number I am thinking of"<<endl;
        cout <<"and you will win."<<endl;
        //Use While loop to generate random number
        while (tryAgn)
        {
        random = rand() % 15 + 1;

        cout <<"I'm thinking of a number between 1 and 15."<<endl;


        cout << "\nTry and guess my number: "<<endl;
        cin>>number;
        
        int played=0;
        while (number != random)
        {
        played++;
        if (number < random)
        {
        cout << "Your guess is too low...try again: "<<endl;
        cin>>number;
        }
        if (number > random)
        {
        cout << "Your guess is too high...try again: "<<endl;
        cin>>number;
        }

        }

        if (number == random)
        {
        cout << "Congratulations you have won."<<endl;
        cout << "You made "<<played<<" attempts."<<endl; 
        }
        }
            return 0;
        }

