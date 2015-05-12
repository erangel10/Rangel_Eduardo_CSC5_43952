/* 
 * File:   main.cpp
 * Author: Eduardo Rangel
 * Purpose: Find the Rainfall statistics
 * Created on May 7, 2015, 2:40 PM
 */
//System libraries
#include <iostream>
#include <iomanip>

using namespace std;
//User Libraries

//Global Constants

//Function prototypes

//Execution Begins here
int main(int argc, char** argv) {
    //Declare variables
    float rainfal[12];
    float ttlRain = 0.0f;
    float avgMont = 0.0f;//Monthly average rain
    float highest = 0;//Highest rained month
    float lowest = 0;//lowest rained month
    float sum = 0;//Yearly rain
    int temp = 0;
    //Use the for loop to ask the user for input 
    for (int i = 0;i < 12;i++){
        cout<<"Please enter the total rainfall for month: "<<i + 1<<endl;
        cin>>rainfal[i];
        //Use while loop to prove input is right
        while(rainfal[i]< 0){
            cout<<"Please enter a positive number "<<endl;
            cin>>rainfal[i];
        }
    }
    
    lowest = rainfal[0];
    highest = rainfal[0];
    //Calculate the highest  and lowest month
    for (int i= 1; i<=11;i++){
        temp = rainfal[i];
        if (temp < lowest)
            lowest = temp;
        if (temp > highest)
            highest = temp; 
    }
    
    //Calculate the yearly rain and average
    for (int i=0;i<=12;i++){
        sum = sum + rainfal[i];
        avgMont = sum / 12;
        
    }
    //Output the results
    cout<<"Total Rain in the year"<<"\t"<<"Monthly Average"<<endl;
    cout<<setw(10)<<sum<<"\t"<<setw(18)<<avgMont<<endl;
    cout<<endl;
    cout<<"The month with the highest rain was: "<<highest<<endl;
    cout<<"The month with the lowest rain was:  "<<lowest<<endl;

    return 0;
}

