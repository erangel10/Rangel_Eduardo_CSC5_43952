/* 
 * File:   main.cpp
 * Author: Eduardo Rangel
 *Purpose: Find the hotel Occupacy
 * Created on April 8, 2015, 10:04 AM
 */
//System Libraries
#include <iostream>

using namespace std;
//User Libraries

//Global Constants 

//System Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    int nRooms,nFloors,totRoom,oRooms,uRooms,totOccu,totURms;
    float oRate;
    //Prompt the user for input 
    cout<<"How many floors are there in the Hotel?"<<endl;
    cin>>nFloors;
    //now use the for loop to find out the number of people by room
    for(int floor=1;floor<=nFloors;floor++){
        cout<<"What is the number of rooms in the floor number "<<floor<<endl;
        cin>>nRooms;
        //Calculate the number of rooms occupied
        totRoom += nRooms;
    }
        cout<<"What is the number of Rooms Occupied? "<<endl;
        cin>>oRooms;
        totOccu += oRooms;
        //calculate the number of rooms unoccupied
        totURms = totRoom - oRooms; 
        oRate= static_cast<float>(totOccu) / totRoom;
        
        cout << "\n\nThe hotel has " << totRoom << " rooms.\n";
        cout << totOccu << " rooms are occupied.\n";
        cout << totURms << " rooms are unoccupied.\n";
        //calculate the rate of rooms occupied 
        cout << oRate*100 << "% of the rooms are occupied.\n\n";
        
    
    
        
    
    return 0;
}

