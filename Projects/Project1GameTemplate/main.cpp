/* 
 * File:   main.cpp
 * Author: Eduardo Rangel
 * Purpose: Make a Game
 * Created on May 3, 2015, 10:04 AM
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
void levels();//Function to set the levels of the game
//Execution begins here
int main(int argc, char** argv) {
    //Declare Variables
    int choice;
    //Declare the array
    int SIZE=3;
    string level[SIZE];{"easy","medium","hard";}
    //Call the functions
    //Outputs the rules for the game
    rules();
    //Imput/output
    cout<<"If you want to continue to play the game press 1 if you want to quit press 2"<<endl;
    cin>>choice;
    //Use switch statement to continue 
    switch(choice)
    {
        case 1: levels();
            break;
        
        case 2:
            cout<<"Thank you we wish you come back later"<<endl;
        default:;
    }
   
   
    //Sets the difficulty levels of the game for example easy, medium, hard;
   
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
   cout<<"6. You have to guess the letter from left to right."<<endl;
   cout<<endl;
}
void levels()
{
    string level,letter1,letter2,letter3,letter4;
    
    //Prompt user for Input
   cout<< "Choose the level of difficulty of the game for example hard, medium, easy"<<endl;
   cin>>level;
   //Word to guess "fight"
   
   if (level == "easy" || level == "Easy")
   {
       cout<<"Guess the word By entering a letter"<<endl;
       cout<<"word: _ _ _ _"<<endl;
       cin>>letter1;
       //USe it to set the word
       if (level =="f"){
           cout<<"f _ _ _ _"<<endl;
       }
       
       if (level =="i"){
           cout<<"_ i _ _ _"<<endl;
       }
       
       if (level =="g"){
           cout<<"_ _ g _ _"<<endl;
       }
       while (letter1 != "f" && letter1 != "i" && letter1 != "g" && letter1 != "h" && letter1 != "t"){
           cout<<"Sorry wrong letter try again"<<endl;
           cin>>letter1;
       }
      
   }
   if (level == "medium" || level == "Medium")
   {
       cout<<"Guess the word by entering a letter.\n Word: _ _ _ _ _ _"<<endl;
       cin>>endl;
       
   }
   
       if (level == "hard" || level == "Hard")
   {
       cout<<"Guess the word by entering the first letter.\n Word: _ _ _ _ _ _ _"<<endl;
       cin>>letter2;
       cout<<"congratulations you got it"<<endl;
   }
    
}