/* 
 * File:   main.cpp
 * Author: Eduardo Rangel
 * Purpose: Make a Game
 * Created on May 6, 2015, 10:04 AM
 */
//System Libraries
#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <ctime>
#include <string>
using namespace std;
//User Libraries

//Global Constants

//Function prototypes
void rules();//function to set the rules of the game
void options();
void levels(int []);
//Execution begins here
int main(int argc, char** argv) {
    //Declare the array
    int SIZE=3;
    string level[SIZE];{"easy","medium","hard";}
    //Call the functions
    //Outputs the rules for the game
    rules();
    //Gives the user the option to continue to play the game or not
    options();
    //Sets the difficulty levels of the game for example easy, medium, hard;
    levels();
    return 0;
}
//new function to set the rules 
void rules()
{
   cout<<"                   Hangman Game"<<endl;
   cout<<"Welcome to Hangman here are the rules to be successful in the game."<<endl;
   cout<<"   -------------------- Rules --------------------"<<endl;
   cout<<"1. You have to Guess the country that is behind the word."<<endl;
   cout<<"2. You have to enter a letter until you guess the whole word."<<endl;
   cout<<"3. You have 5 lives you will lose a life each time you enter a letter that is not in the word."<<endl;
   cout<<"4. If you miss 5 times the game will be over."<<endl;
   cout<<"5. If you guess the word correctly before wasting your 5 lives you win the game."<<endl;
      
}

void options()
{
  char choice;  
  cout<<"If you want to continue to play the game please enter 'yes' or 'no'<<endl;
  cin>>choice;
  switch(choice)
  {
      case 'yes':
          cout<<"Please choose the difficulty level"<<endl;
          break;
      case 'no':
          break;
      default:;
}
}
void levels(int [])
{
   
}