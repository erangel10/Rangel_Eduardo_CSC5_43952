/* 
 * File:   main.cpp
 * Author: Eduardo Rangel
 * Purpose: Coin Toss
 * Created on April 14, 2015, 6:21 PM
 */
//System libraries
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
//User libraries

//Global Constants

//System Prototypes
void coinTos();
//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    int tosses;
    int count = 0;
    //Prompt user for input 
    cout<<"How many Tosses should I make"<<endl;
    cin >>tosses;
    
    for(int i=1;i<=tosses;i++)
        {
         coinTos();
}
    return 0;
}

void coinTos(){
    int flips;
    srand(unsigned(time(0)));
    flips = (rand()%2+1);
    
    if (flips == 1){
        cout <<"Heads"<<endl;
                
    }
    else if (flips == 2){
        cout<<"Tails"<<endl;
    }
    
}

