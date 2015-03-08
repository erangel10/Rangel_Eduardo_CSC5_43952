/* 
 * File:   main.cpp
 * Author: Eduardo Rangel
 *Purpose: Number of acres in a tract of land
 * Created on March 7, 2015, 12:02 PM
 */
//System Libraries
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    //Declare variables
    float totlLan,acreVal;//totlLan = Total amount of terrain, acreVal = Value of 1 acre
    
    //Declare value for each variable
    acreVal = 43560;
    totlLan = 391876;
    //Output the value of 1 acre
    cout<<"The value for one acre is equal to "<<acreVal<<endl;
    //output the value for the land 
    cout<<"The total amount of land is: "<<totlLan<<endl;
    //divide the total amount of land with the value of one acre
    cout<<"The number of acres in the tract of land are: "<<totlLan/acreVal<<endl;
    
   
    return 0;
}

