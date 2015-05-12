/* 
 * File:   main.cpp
 * Author: Eduardo Rangel
 * Purpose: Find Largest/smallest array values
 * Created on May 7, 2015, 1:34 PM
 */
//System Libraries
#include <iostream>

using namespace std;
//User libraries

//Globals Constants

//Function prototypes

//Execution begins here
int main(int argc, char** argv) {
   //Declare variables
    int numbers[10];//array
    int small = 0;
    int large = 0;
    int temp = 0;
    //Use for loop ask user for input
    for(int i =0;i < 10;i++){
        //Prompt user for input 
        cout<<"Please enter number "<<(i+1)<<":"<<endl;
        cin>>numbers[i];
    }
    //tell the computer to compare both numbers 
    small = numbers[0];
    large = numbers[0];
    //Use for loop to specify which number is the largest and which is the smallest
    for (int i= 1; i<=9;i++){
        temp = numbers[i];
        if (temp < small)
            small = temp;
        if (temp > large)
            large = temp; 
    }
    //Output the results
    cout<<"The largest number is: "<<large<<endl;
    cout<<"The smallest number is: "<<small<<endl;
    //Exit stage right
    return 0;
}

