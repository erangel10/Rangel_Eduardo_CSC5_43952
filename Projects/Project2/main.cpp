/* 
 * File:   main.cpp
 * Author: EDUARDO
 * Purpose: Create a game
 * Created on June 5, 2015, 6:52 PM
 */
//System Libraries
#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>

using namespace std;
//User Libraries

//Global Constants

//Function Prototypes
void gamePlay();//all the game will run in this function
void rules();//ruels are stored in this function
int search(int guess[],int,int);//use the linear search
//Execution Begins here
int main(int argc, char** argv) {
    //declare variables
    int choice;
    int value;
    //Call the rules function to display the rules for the player
    rules();
    //Declare SIZE
    int SIZE=10;
    //declare array
    int guess[] = {26, 47, 56, 57, 78, 90, 34, 8, 34, 1};
    cout<<endl;
    //Prompt user for input 
    cout<<"Do you want to continue to play the game if yes press 1 if not press 2."<<endl;
    cin>>choice;
    //Use switch statement 
    switch(choice)
    {
      case 1: cout<<"Hello"<<endl;
          gamePlay();
      {
          break;
      }
  
      case 2:
        {
            cout<<"Bye!!!"<<endl;
            break;
        }
      
        default:;
    }
    cout<<"pleasee guess the number for a chance to win a free upgrade on your gun"<<endl;
    cin>>value;
    //Call function for the search
    int result = search(guess,10,value);
    
    if (result >= 0){
        cout<<"The number "<<guess[result]<<" Was found at "<<result<<endl;
    }
    else 
        cout<<"Number "<<value<<" is not in the list you don't get an upgrade"<<endl;
    //Exit stage right
    return 0;
}
//Function to Output the rules of the game
void rules()
{
    cout<<setw(50)<<"Game Rules"<<endl;
    cout<<"1. At the beginning of the game you will start with a simple weapon that will make random damage to your opponent from 1-5"<<endl;
    cout<<"2. You will earn points each time you hit your opponent and those points can later be used to upgrade your gun"<<endl;
    cout<<"3. There are three types of upgrades for your gun Iron, Gold, and Diamond"<<endl;
    cout<<"4. You can use the points you earn to buy the upgrades of your gun"<<endl;
    cout<<"5. The iron Upgrade does random damage from 6-10, gold upgrade does from 11-25 and the diamond does from 26-50"<<endl;
    cout<<"6. Each player has 100 points of life whoever loses the 100 points first loses the game"<<endl;
}
//function that sorts 
int search(int guess[],int SIZE,int value)
{
  for (int i=0;i<SIZE;i++){
     if (value == guess[i])
     {
         return i;
     }
  } 
  return -1;
}
//Function to use the game
void gamePlay()
{
    //Random number generator seed
    srand(static_cast<unsigned int>(time(0)));
    int  damageF = rand() % 5+1;//damage at the beginning without any upgrade
    //declare variables
    int value;
    int player1 = 100;
    int oponent = 100;
    int health;
    int points = 0;
    int iron,gold,diamond;
    //Declare array
    int guess[] = {26, 47, 56, 57, 78, 90, 34, 8, 34, 1};
    //declare variables
    char player;
    //Use do-while loop to loop until one of the player loses the game
    do{
    //Prompt user for input 
    cout<<"To hit your opponent press the letter s"<<endl;
    cin>>player;
    //If/else statement
    if (player == 'S' || player == 's')
    {
       player1 = 100;
       oponent = 100 - damageF;
       points = damageF;
       cout<<"Your opponent just lost "<<damageF<<" points of life";
       cout<<"and you just earned "<<damageF<<" points"<<endl;
       
    cout<<"pleasee guess the number for a chance to win a free upgrade on your gun"<<endl;
    cin>>value;
    //Call function for the search
    int result = search(guess,10,value);
    
    if (result >= 0){
        cout<<"The number "<<guess[result]<<" Was found at "<<result<<endl;
    }
    else 
        cout<<"Number "<<value<<" is not in the list you don't get an upgrade"<<endl;
       
    }
    }while (oponent > 0 || player1 > 0);
    if (points == 15 || points >15)
    {
        cout<<"You can now upgrade your gun to iron it will cost you 15 points"<<endl;
    }
}