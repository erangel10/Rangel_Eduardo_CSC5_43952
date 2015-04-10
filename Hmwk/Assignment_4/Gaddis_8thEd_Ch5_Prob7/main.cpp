/* 
 * File:   main.cpp
 * Author: Eduardo Rangel
 * Purpose: Calculate how many Pennies per day can person get
 * Created on April 9, 2015, 3:52 PM
 */
//System Libraries
#include <iostream>

using namespace std;
//user Libraries

//Global Constants

//System prototypes

//Execution begins here
int main(int argc, char** argv) {
    //declare variables
    int days;
    float money=1.0;
    float total=0.0,dayPay;
    //Prompt the user for input 
    cout <<"Please enter the number of days not less than one"<<endl;
    cin>>days;
    //Use while loop to make sure the user enters a number greater than 1
    while(days <1){
        cout<<"please enter a number greater than 1 or equal to one"<<endl;
        cin>>days;
        //Use for loop to calculate the pay and display the table 
    }
    for (int day=1;day<=days;day++){
        //calculate how much the person will earn during the time the user gave as input
        dayPay = money / 100;
        cout<<"Day "<<day<<" You earned $"<<dayPay <<" dollars"<<endl;
        total += dayPay;
        money *=2;
    }
    cout <<"******************************"<<endl;
    cout<<"The total earnings are "<<total<<endl;

    return 0;
}

