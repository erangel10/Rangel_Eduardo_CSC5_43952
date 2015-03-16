/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on March 16, 2015, 8:50 AM
 */

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
    cout<<"How many hours this week did you work?"<<endl;
    cin>>hrsWkd;
    cout<<"What is your pay rate ($'s/hr)"<<endl;
    cin>>payRate;
    //Calculate the payCheck
    if(hrsWkd<oTime){
        payRate*hrsWkd;
    }
    if(hrsWkd>=oTime){
        payChk=payRate*(hrsWkd+(oRate-1)*(hrsWkd-oTime));
    }
    //Output the results to the screen
    cout<<"Hours worked = "<<hrsWkd<<"(hrs)"<<endl;
    cout<<"Pay Rate = $"<<payRate<<"/(hr)"<<endl;
    cout<<"Over time rate = "<<oRate<<endl;
    cout<<"Over time begins at "<<oTime<<"(hrs)"<<endl;
    cout<<"Gross pay = $"<<payChk<<endl;
    out.close();

    return 0;
}

