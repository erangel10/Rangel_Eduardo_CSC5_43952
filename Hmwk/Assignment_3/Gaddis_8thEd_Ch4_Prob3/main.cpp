/* 
 * File:   main.cpp
 * Author: Eduardo Rangel
 *Purpose: Magic Dates
 * Created on March 25, 2015, 10:03 AM
 */
//System libraries
#include <iostream>

using namespace std;
//User libraries

//Global Constants

//System prototypes

//Execution Begins here
int main(int argc, char** argv) {
    //Declare variables
    int month,day,year,total;//Total get the value from multiplying the day times the month
    
    //Prompt user for input
    cout<<"Please enter a month (in numeric form)"<<endl;
    cin>>month;
    cout<<"Please enter a day (in numerical form)"<<endl;
    cin>>day;
    cout<<"Please enter the year (two digit year)"<<endl;
    cin>>year;
    //Calculate the month times the year
    total = month * day;
    //If else statement to prove if the result is true or false
    if (total == year){
        cout<<"The date is magic"<<endl;
    }
    else if (total != year){
        cout<<"The date is not magic"<<endl;
    }
    
    //End

    return 0;
}

