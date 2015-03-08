/* 
 * File:   main.cpp
 * Author: Eduardo Rangel
 *Purpose: Ocean Levels
 * Created on March 8, 2015, 1:04 PM
 */
//System Libraries
#include <iostream>

using namespace std;


int main(int argc, char** argv) {
    
    //Declare variables
    float ocnLvl,fiveYrs,sevnYrs,tenYrs;
    //Give a value to each variable
    ocnLvl = 1.5;
    fiveYrs = 5;
    sevnYrs= 7;
    tenYrs = 10;
    //Output the ocean level in 5 years
    cout<<"The ocean level in 5 years is going to be "<<ocnLvl*fiveYrs<<" millimeters"<<endl;
    //Output the ocean level in 7 years
    cout<<"The ocean level in 7 years is going to be "<<ocnLvl*sevnYrs<<" millimeters"<<endl;
    //Output the ocean level in 10 years
    cout<<"The ocean level in 10 years is going to be "<<ocnLvl*tenYrs<<" millimeters"<<endl;
    
    
    
    return 0;
}

