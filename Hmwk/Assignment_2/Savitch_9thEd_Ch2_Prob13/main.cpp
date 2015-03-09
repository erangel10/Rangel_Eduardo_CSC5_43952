/* 
 * File:   main.cpp
 * Author: Eduardo Rangel
 *Purpose:To see how many candy bars i can eat
 * Created on March 9, 2015, 10:20 AM
 */
//System Libraries
#include <iostream>

using namespace std;

//User Libraries

//

//
int main(int argc, char** argv) {
    //Declare Variables
    unsigned short wtlbs,htin,ageyrs;
    char mf;
    unsigned char cBar=230;
    float BMRFem,BMRMale,nCBars;
    //Prompt the user for input
    cout<<"How many candy bars will it take to maintain your weight"<<endl;
    cout<<"All inputs are integers!!!"<<endl;
    cout<<"Input your weight in lbs"<<endl;
    cin>>wtlbs;
    cout<<"Input your height in inches"<<endl;
    cin>>htin;
    cout<<"Input your age in yrs"<<endl;
    cin>>ageyrs;
    cout<<"Are you a male or female m/f? one character input"<<endl;
    cin>>mf;
    //Calculate
    BMRFem=655+4.3*wtlbs+4.7*htin-4.7*ageyrs;
    BMRMale=66+6.3*wtlbs+12.9*htin-6.8*ageyrs;
    //    Ques if male       if female
    nCBars=((mf=='m')?(BMRMale/cBar):(BMRFem/cBar));
    //Output
    cout<<"Your weight = "<<wtlbs<<"(lbs)"<<endl;
    cout<<"Your height = "<<htin<<"(inches)"<<endl;
    cout<<"Your age = "<<ageyrs<<"(years)"<<endl;
    cout<<"Your sex is = "<<((mf=='m')? "Male":"Female")<<endl;
    cout<<"You can eat "<<nCBars<<" Candy bars per day"<<endl;
   
    return 0;
   
}

