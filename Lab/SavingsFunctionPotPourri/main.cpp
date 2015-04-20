/* 
 * File:   main.cpp
 * Author: Eduardo Rangel
 * Purpose: 
 * Created on April 20, 2015, 8:13 AM
 */
//System libraries
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
//User Libraries

//Global Constants

//Function prototypes
float save1(float,float,int);//Power function
float save2(float,float,int);//Exp and log Function
float save3(float,float,int);//for loop
float save4(float,float,int);//Recursive -> calling itself
float save5(float,float,int=9);//Defaulted Parameter
void  save6(float &,float,float,int);//Pass by reference
void  save7(float &,float &, float,int);//Pass by reference
float save8(float,float,float);//over ridden function/same name
//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    float pv=100.0f;//Present value $'s 
    float ir=0.08f;//Interest Rate  %/
    int   nC=9;//Number of Compounding yr's
    //Output the Inputs
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Present value = $"<<pv<<endl;
    cout<<"Interest Rate ="<<ir*100<<"%"<<endl;
    cout<<"Number of compounding Periods ="<<nC<<endl;
    //Calculate our savings
    cout<<"Savings Function 1 = $"<<save1(pv,ir,nC)<<endl;
    cout<<"Savings Function 2 = $"<<save2(pv,ir,nC)<<endl;
    cout<<"Savings Function 3 = $"<<save3(pv,ir,nC)<<endl;
    cout<<"Savings Function 4 = $"<<save4(pv,ir,nC)<<endl;
    cout<<"Savings Function 5 = $"<<save5(pv,ir)<<endl;  
    
    
    return 0;
}

//Function for Future Value Calculation 
//inputs
//     p-> Present value $'s
//     p-> Interest Rate %/compounding period 
//     n-> Compounding period yr's 
//outputs
//     fv-> Future Value
float save1(float p, float i, int n){
    return p*pow((1+i),n);
}

float save2(float p,float i,int n){
    return p*exp(n*log(1+i));
}

float save3(float p,float i,int n){
    for (int year=1;year<=n;year++){
        p*=(1+i);
    }
        return p;
    
}

float save4(float p,float i,int n){
    if (n<=0)return p;{ //First return
    return save4(p,i,n-1)*(1+i);//Second return
}
}

float save5(float p, float i, int n){
    return p*pow((1+i),n);
}

void save6(float &f,float p,float i,int n){
    f=p*pow((1+i),n);
}

void save7(float &,float &p, float i ,int n){
    p=p*pow((1+i),n);
}
