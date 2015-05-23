/* 
 * File:   main.cpp
 * Author: Eduardo Rangel
 * Purpose: Lottery winning number
 * Created on May 17, 2015, 3:23 PM
 */
//System Libraries
#include <iostream>
#include <vector>

using namespace std;
//User Libraries

//Global Constants

//Functions Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare vectors
    vector<int> list;

    //Store values in the vector.
    list.push_back(13579);
    list.push_back(26791);
    list.push_back(26792);
    list.push_back(33445);
    list.push_back(55555);
    list.push_back(62483);
    list.push_back(77777);
    list.push_back(79422);
    list.push_back(85647);
    list.push_back(93121);

    //get winning number
    int wNumber;
    //Prompt user for input
    cout<<"Enter this week's winning number ";
    cin >> wNumber;
    //Use for loop to find if there is a winning number
    for(int i=0;i<10;i++)
    {
        if(list[i]==wNumber)
    {
    cout<<"One of the tickets is a winner this week."<<endl;

    break;
    }
        else if(i==9) cout<<"Not one of the tickets is a winner this week."<<endl;
    }

    return 0;
    //Exit stage right
}
   

