/* 
 * File:   main.cpp
 * Author: Eduardo Rangel
 *Purpose: Miles per Gallon
 * Created on March 16, 2015, 1:57 PM
 */
//System libraries
#include <iostream>

using namespace std;


int main(int argc, char** argv) {
    //Declare variables
    float mileage;//Number of miles
    float tnkSize;//Size of the tank
    
    //Input the size of the tank in liters
    cout<<"Enter the size of the tank in lters"<<endl;
    cin>>tnkSize;
    //Input the number of miles
    cout<<"Enter the number of Miles"<<endl;
    cin>>mileage;
    //Output the number of miles 
    cout<<"The number of miles is "<<tnkSize / mileage<<" M/G"<<endl; 
    
    
    return 0;
}

