/* 
 * File:   main.cpp
 * Author: Eduardo Rangel
 *Purpose: Automobile Costs
 * Created on March 18, 2015, 3:49 PM
 */
//System Libraries
#include <iostream>
//User Libraries 

//Global Constant

//Execute here
using namespace std;


int main(int argc, char** argv) {
    //Declare variables
    float loanPay,insranc,gas,oil,tires,mtnance,total,monthly,perYear=12;
    //Prompt the user for input
    cout<<"Enter the monthly cost for your car loan payment"<<endl;
    cin>>loanPay;
    cout<<"Please enter the monthly cost for your car insurance"<<endl;
    cin>>insranc;
    cout<<"Enter the monthly cost for your car gas"<<endl;
    cin>>gas;
    cout<<"Enter the monthly cost for your car oil"<<endl;
    cin>>oil;
    cout<<"Enter the monthly cost for your car tires"<<endl;
    cin>>tires;
    cout<<"Enter the monthly cost for your car maintenance"<<endl;
    cin>>mtnance;
    //Calculate the total
    total = loanPay + insranc + gas + oil + tires + mtnance;
    //Output the monthly payment
    cout<<"Your monthly payment for all your car services is "<<total<<endl;
    //calculate the annual cost
    cout<<"Your annual cost is "<<perYear * total<<endl;
            
    return 0;
}

