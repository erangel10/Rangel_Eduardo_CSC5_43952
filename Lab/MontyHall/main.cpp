/* 
 * File:   main.cpp
 * Author: Eduardo Rangel
 *Purpose: Play the Monty Hall Game 
 * Analyze staying with your first choice 
 * Created on April 1, 2015, 8:00 AM
 */
//System libraries
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
//User Libraries

//Global Constants

//System prototypes

//Execution Begins here
int main(int argc, char** argv) {
    //Set the random number seed 
    srand(static_cast<unsigned int>(time(0)));
    //Declare variables
    unsigned int nGames,win=0,loss=0;
    unsigned int door,doorOpn,prize,othDoor;
    char stay;
    //Prompt user for input
    cout<<"This is the monty hall Game, Lets make a deal "<<endl;
    cout<<"How many games would you like to play (1-4x10^9)"<<endl;
    cin>>nGames;
    cout<<"Are you going to stay if given the opportunity type S for stay"<<endl;
    cout<<" or type c for change"<<endl;
    cout<<"Type anything else to choose other door"<<endl;
    cin>>stay;
    //loop for all the games
    for (int game=1;game<=nGames;game++){
    //Randomly choose door
    prize=rand()%3+1;
    //Randomly choose the door to open
    doorOpn=rand()%3+1;
    //Randomly choose the door to open
            do{
                doorOpn=rand()%3+1;
            } while(door==doorOpn || prize==doorOpn);//can't be the same
                //What is the other door
             do{
                othDoor=rand()%3+1;
            } while(othDoor==doorOpn || othDoor==door);
            //When found now swap
           // cout<<"D="<<door<<" OthD"<<othDoor<<"OpnD"<<doorOpn<<" Prize"<<prize<<endl;
                //Now statistically count how many wins and loses
            //Swap the doors if given the opportunity
            if (stay != 'S' && stay != 's'){
                  door=othDoor;
            }
                if (door==prize)win++;
                else loss++;
    }
    //Output the results
    cout<<"Out of "<<nGames<<" played!"<<endl;
    if (stay == 'S' || stay == 's')cout<<"I am not changing my door and "<<endl;
    else cout<<"I am changing my door and "<<endl;
    cout<<"I win by staying -> "<<win<<" times "<<100.0f*win/nGames<<"%"<<endl;
    cout<<"vs losing "<<loss<<" times! "<<100.0f*loss/nGames<<"%"<<endl;
    //Exit stage right 
 

    return 0;
}

