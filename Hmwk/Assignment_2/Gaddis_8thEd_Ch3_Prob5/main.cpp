/* 
 * File:   main.cpp
 * Author: Eduardo Rangel
 *Purpose: Male and Female Percentage
 * Created on March 18, 2015, 7:55 PM
 */
//System Libraries
#include <iostream>
//User Libraries

//Global Constants

//System Prototype

//Execution starts here
using namespace std;


int main(int argc, char** argv) {
    
    //Declare variables
    float nMales,nFemale,total;
    //Prompt user for input
    cout<<"Please neter the number of males in your class"<<endl;
    cin>>nMales;
    cout<<"Please enter the number of females in your class"<<endl;
    cin>>nFemale;
    total = nMales + nFemale;
    //Calculate the percentage of Females and Males in the class 
    cout<<"The percentage of males registered in the class is "<<nMales / total<<endl;
    cout<<"The percentage of females registered in the class is "<<nFemale / total<<endl;
    
    //Exit
    return 0;
}

