/* 
 * File:   main.cpp
 * Author: Eduardo Rangel
 * Purpose: Calculate the Distance Traveled
 * Created on April 6, 2015, 9:53 AM
 */
//System Libraries
#include <iostream>

using namespace std;
//User Libraries

//Global Constants

//System prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    float speed,time,dstance;
    //Prompt user for input
    cout<<"What is the speed of the vehicle in mph"<<endl;
    cin>>speed;
    //Use the loop WHILE to tell whether the user is entering a number greater than one for the time and a positive number for the speed
    while (speed < 0){
        cout<<"Please enter a positive number"<<endl;
        cin>>speed;
    }
    cout<<"How many hours has the vehicle traveled? "<<endl;
    cin>>time;
    while (time < 1 ){
        cout<<"Please enter a number greater than or equal to 1 for the time traveled"<<endl;
        cin>>time;
    }
  //use the FOR loop to calculate the distance and output the result
    for (int total=1;total<=time;total++){
        cout<<" "<<total<<"\t"<<speed * total<<endl;
    }
    

    return 0;
}

