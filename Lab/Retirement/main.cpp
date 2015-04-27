/*
* File: main.cpp
* Author: Eduardo Rangel
* Created on April 20, 2015, 8:13 AM
*/
//System Libraries
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
//User Libraries
//Global Constants
//Function Prototypes
float rtirmnt(float,float,int, float);//for loop

//Execution Begins Here!
int main(int argc, char** argv) {
        //Declare variables
        float pv=0.0f;//Present Value $'s
        float ir=0.05f; //Interest Rate %/yr
        int nC=50; //Number of compounding periods yr's
        float fdep=0.1f;//Babylonians say 10%
        float salary=36000;//salary in dollars per year
        //calculate our Savings Required
        float savReq = salary/ir;//savings Require $'s 
        //Output all initial conditions 
        cout<<fixed<<setprecision(2)<<showpoint;
        cout<<"Investment Rate from MuniBonds = "<<ir*100<<"%"<<endl;
        cout<<"salary = $"<<salary<<endl;
        cout<<"Yearly Retirememnt Saved = $"<<salary*fdep<<endl;
        cout<<"Savings Required to Retire = $"<<savReq<<endl;
        cout<<"Year Retirement Savings"<<endl;
        float retSav=0.0f;
        //Output our Yearly retirement savings
        for (int year=1;retSav<savReq;year++){
            float retSav=rtirmnt(pv,ir,year,salary*fdep);
            cout<<setw (4)<<year<<setw(13)<<retSav<<endl;
        }
        
    //Exit stage right
        return 0;
}
//Function for Future Value Calculation
//inputs
// p-> Present Value $'s
// i-> Interest Rate %/Compounding Period
// n-> Compounding Period yr's
//outputs
// fv-> Future Value $'s
float rtirmnt(float p,float i,int n, float d){
    for (int year=1;year<=n;year++){
        p*=(1+i);
        p+=d;
    }
    return p;
}

