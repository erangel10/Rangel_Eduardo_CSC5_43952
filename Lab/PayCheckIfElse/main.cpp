/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on March 16, 2015, 8:37 AM
 */

#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

int main(int argc, char** argv) {
    
    ofstream output;//outputs the result in a file
    float hrsWkd;//Hours Worked (hrs)
    float payRate;//pay rate ($'s/hr)
    float oRate=1.5f;//Multiplicative factor of payRate
    float oTime=40;//Where overtime begins (hr)
    float payChk;//Gross Pay ($'s)
    //open the file
    output.open("Payroll.dat");
    //Prompt the user for input 
    cout<<"How many hours this week did you work?"<<endl;
    cin>>hrsWkd;
    cout<<"What is your pay rate ($'s/hr)"<<endl;
    cin>>payRate;
    //Calculate the payCheck
    payChk=hrsWkd<oTime?
        payRate*hrsWkd:
        payRate*(hrsWkd+(oRate-1)*(hrsWkd-oTime));
    //Output the results to the screen
    cout<<"Hours worked = "<<hrsWkd<<"(hrs)"<<endl;
    cout<<"Pay Rate = $"<<payRate<<"/(hr)"<<endl;
    cout<<"Over time rate = "<<oRate<<endl;
    cout<<"Over time begins at "<<oTime<<"(hrs)"<<endl;
    cout<<"Gross pay = $"<<payChk<<endl;
    output.close();

    return 0;
}

