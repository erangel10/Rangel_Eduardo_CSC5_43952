/* 
 * File:   main.cpp
 * Author: EDUARDO
 *Purpose: Fire Regulations
 * Created on March 18, 2015, 8:55 PM
 */
//System Libraries
#include <iostream>
//User Libraries

//Global Constants

//System prototypes

//Execution starts here        
using namespace std;

int main(int argc, char** argv) {
    //declare variables
    int maxCpty,nPeople;//maxCpty = Maximum Capacity, nPeople= number of people
    //Prompt the user for input
    cout<<"Please enter the maximum room capacity"<<endl;
    cin>>maxCpty;
    cout<<"Enter the number of people attending to the meeting"<<endl;
    cin>>nPeople;
    //Start if/else statement
    if (nPeople <= maxCpty){
        cout<<"The meeting can be hold here"<<endl;
        if (nPeople <= maxCpty){
            cout<<maxCpty - nPeople<<" people can still attend to the meeting"<<endl;
        }
    }
    else if(nPeople > maxCpty){
        cout<<"You cannot hold the meeting here due to the room capacity and fire regulations "<<endl;
         if (nPeople > maxCpty){
             cout<<"You have to exclude "<<nPeople - maxCpty<<" people"<<endl;
        
        }
    }

    return 0;
}

