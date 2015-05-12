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
void options();
void levels();
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
    //Gives the user the option to continue to play the game or not
    options();
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

void options()
{
 
}
void levels()
{
    string letter,letter1,letter2,f,i,g,h,t;
    
    //char letter1,letter2,letter3,letter4;
   // char letter5,letter6,letter7,letter8,letter9,leter10,letter11;
   cout<< "Choose the level of difficulty of the game for example hard, medium, easy"<<endl;
   cin>>letter;
   //Word to guess "fight"
   
   if (letter == "easy" || letter == "Easy")
   {
       cout<<"Guess the word By entering a letter"<<endl;
       cout<<"_ _ _ _"<<endl;
       cin>>letter1;
       //USe it to set the word
       if (letter =="f"){
           cout<<"f _ _ _ _"<<endl;
       }
       
       if (letter =="i"){
           cout<<"_ i _ _ _"<<endl;
       }
       
       if (letter =="g"){
           cout<<"_ _ g _ _"<<endl;
       }
       while (letter1 != "f" && letter1 != "i" && letter1 != "g" && letter1 != "h" && letter1 != "t"){
           cout<<"Sorry wrong letter try again"<<endl;
           cin>>letter1;
       }
      
   }
   
       if (letter == "hard" || letter == "Hard")
   {
       cout<<"Guess the word by entering the first letter"<<endl;
       cin>>letter2;
       cout<<"congratulation you got it"<<endl;
   }
    
}