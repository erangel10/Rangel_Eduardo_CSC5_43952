/* 
 * File:   main.cpp
 * Author: Eduardo Rangel
 * Purpose: 
 * Created on March 4, 2015, 8:28 AM
 */
//System Libraries
#include <iostream>



using namespace std;

unsigned char CNVPCT=100;

int main(int argc, char** argv) {
    //Declare Variables
    
    unsigned short nCust,nEDrnks,nCDrnks;
    unsigned char pEDrnks,pCDrnks;
    //Assigned Values
    nCust=16500;//Number of customers
    pEDrnks=15;//Percentage Energy Drinkers
    pCDrnks=58;//Percentage out of Energy Drinkers 
    //Process/Calculate
    nEDrnks=nCust/static_cast<float>(CNVPCT)*pEDrnks;
    nCDrnks=nEDrnks/static_cast<float>(CNVPCT)*pCDrnks;
    //Output Everything
    cout <<"Number of customers = "<<nCust<<endl;
    cout<<"Percentage Energy Drinkers = "<<static_cast<int>(pEDrnks)<<"%"<<endl;
    cout<<"Percentage Citrus Drinkers/Energy Drinkers = "<<static_cast<int>(pCDrnks)<<"%"<<endl;
    cout<<"Calculated Values:"<<endl;
    cout<<"Number of energy drinkers = "<< nEDrnks <<endl;
    cout<<"Number of citrus Drinkers = "<< nCDrnks <<endl;
    
    return 0;
}

