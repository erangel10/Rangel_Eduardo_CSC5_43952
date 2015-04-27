/*
* File: main.cpp
* Author: Eduardo Rangel
* Created on April 20, 2015, 9:05 AM
*/
//System Libraries
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
//User Libraries
//Global Constants
//Function Prototypes
float blnPmnt(float,float,int,float);//For-Loop

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare variables
    float purPrce = 1e4f;//10000/10k Purchase price
    float dwnPymt = 1e-1f;//Down Payment % of purchase price 
    float intRate = 3.29e-2;//Interest rate per year
    int nMnths = 60;//number of months
    float mnPmnt = 1.6e2f;//monthly payment
    //Calculate the amount to finance
    float finance = purPrce*(1-dwnPymt);
    //Output all the initial conditions 
    cout<<fixed<<setprecision(2)<<showpoint<<endl;
    cout<<"Purchase Price = $"<<purPrce<<endl;
    cout<<"Down Payment = $"<<purPrce*dwnPymt<<endl;
    cout<<"Interest Rate = "<<intRate*100<<"%"<<endl;
    cout<<"Months to finance = "<<nMnths<<endl;
    cout<<"Amount Financed = $"<<finance<<endl;
    //Ballon Payment and monthly payment 
    cout<<"Monthly Payment = $"<<mnPmnt<<endl;
    cout<<"Balloon Payment = $"<<blnPmnt(finance,intRate/12,nMnths,mnPmnt)<<endl;
    
    
//Exit stage right
    return 0;
}
//Ballon Payment function
//Input
//f->Financed Amount $'s
//i->Interest Rate /month
//n->Number of months
//p->monthly Payment
//Output
//bln->Balloon Payment $'s
float blnPmnt(float f,float i,int n,float p){
    for (int month = 1;month < n;month++){
        f*=(1+i);//increase due to the interest rate 
        f-=p;//decrease due to payment 
    }
    return f;//Balloon Payment
}