/* 
 * File:   main.cpp
 * Author: Eduardo Rangel
 *Purpose: Stadium Seating
 * Created on March 16, 2015, 4:06 PM
 */
//System libraries
#include <iostream>
#include <iomanip>

using namespace std;
//user Libraries

//Global Constants

//

int main(int argc, char** argv) {
    //Declare variables as a float
    float numberA,numberB,numberC;
    float classA=15;
    float classB=12;
    float classC=9;
    //Input the number of tickets sold for each category 
    cout<<"Number of tickets sold for class A"<<endl;
    cin>>numberA;
    cout<<"Number of tickets sold for class B"<<endl;
    cin>>numberB;
    cout<<"Number of tickets sold for class C"<<endl;
    cin>>numberC;
    //Total amount f tickets sold per class
    cout<<"The total amount of tickets sold for class A is "<<numberA * classA<<endl;
    cout<<"The total amount of tickets sold for class B is "<<numberB * classB<<endl;
    cout<<"The total amount of tickets sold for class C is "<<numberC * classC<<endl;
    //Output the amount of income from the tickets sold
    cout<<"The total income generated from all the ticket sales is "<<(numberA * classA) + (numberB * classB) + (numberC * classC)<<endl;
    

    return 0;
}

