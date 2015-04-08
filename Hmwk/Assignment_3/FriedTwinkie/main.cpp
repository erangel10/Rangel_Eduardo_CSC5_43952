/* 
 * File:   main.cpp
 * Author: rcc
 *Created on April 8, 2015, 7:52 AM
 * Purpose: To gain weight, become a public health, hazard,
 * and to design the interface to a twinkie machine
 */
//System Libraries
#include <iostream>
#include <string.h>
#include <iomanip>
using namespace std;
//User Libraries

//Global Constants

//System prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    const int SIZE=80;
    char input[SIZE]="";
    unsigned short totChng=0,pTwnke=30;
    char nQtrs,nDimes,nNikels;
    //prompt user for input 
    cout<<"This is a fried Twinkie Machine"<<endl;
    cout<<"Fried Twinkies cost $3.50"<<endl;
    cout<<"Input your change as "<<endl;
    cout<<"Dollar, Quarter, Dime, Nickels"<<endl;
    do{
    cout<<"Input coins/change"<<endl;
    cin>>input;
    if (strcmp(input,"Dollar")==0){
        totChng+=100;
    }
    else if (strcmp(input,"Quater")==0){
        totChng+=25;
    }
    else if (strcmp(input,"Dime")==0){
        totChng+=10;
    }
    else if (strcmp(input,"Nickel")==0){
        totChng+=5;
    }
    else {
        cout<<"No slugs Allowed"<<endl;
    }
    cout<<"Total Change = $"<<totChng/100.0f<<endl;
    }while(totChng<350);
    //Give Twinkie
    cout <<endl<<"Here is your Fried Twinkie"<<endl;
    //Calculate the change
    totChng-=pTwnke;
    cout<<"Your change is = $"<<totChng/100.0f<<endl;
    //How many Quarters
    nQtrs=totChng/25;
    if (nQtrs > 0)cout<<static_cast<int>(nQtrs)<<" Quarters change"<<endl;
    //How many Dimes
    totChng-=nQtrs*25;
    nDimes=totChng/10;
    if (nDimes > 0)cout<<static_cast<int>(nDimes)<<" Dimes change"<<endl;
    //How many nickels
    totChng-=nDimes*10;
    nNikels=totChng/5;
    if (nNikels > 0)cout<<static_cast<int>(nNikels)<<" Nickels change"<<endl;
    //Exit stage right
    return 0;
}

