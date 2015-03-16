/* 
 * File:   main.cpp
 * Author: Eduardo Rangel
 *Purpose: PayCheckTernary
 * Created on March 16, 2015, 8:11 AM
 */
//System Libraries
#include <iostream>//i/o
#include <iomanip>//Formatting
#include <fstream>//I/O File

using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Starts Here

int main(int argc, char** argv) {
    
    //Declare Variables
    ofstream out;//outputs the result in a file
    float hrsWkd;//Hours Worked (hrs)
    float payRate;//pay rate ($'s/hr)
    float oRate=1.5f;//Multiplicative factor of payRate
    float oTime=40;//Where overtime begins (hr)
    float payChk;//Gross Pay ($'s)
    //open the file
    out.open("Payroll.dat");
    //Prompt the user for input 
    out<<"How many hours this week did you work?"<<endl;
    cin>>hrsWkd;
    out<<"What is your pay rate ($'s/hr)"<<endl;
    cin>>payRate;
    //Calculate the payCheck
    payChk=hrsWkd<oTime?
        payRate*hrsWkd:
        payRate*(hrsWkd+(oRate-1)*(hrsWkd-oTime));
    //Output the results to the screen
    out<<"Hours worked = "<<hrsWkd<<"(hrs)"<<endl;
    out<<"Pay Rate = $"<<payRate<<"/(hr)"<<endl;
    out<<"Over time rate = "<<oRate<<endl;
    out<<"Over time begins at "<<oTime<<"(hrs)"<<endl;
    out<<"Gross pay = $"<<payChk<<endl;
    out.close();

    return 0;
}

