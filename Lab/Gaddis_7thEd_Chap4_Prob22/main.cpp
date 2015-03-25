/* 
 * File:   main.cpp
 * Author: Eduardo Rangel
 *Purpose: Cable Bill
 * Created on March 16, 2015, 8:37 AM
 */
//System Libraries
#include <iostream>
#include <iomanip>
#include <fstream>


using namespace std;
//User Libraries

//Global Constants

//System Prototypes

//Execution begins here
int main(int argc, char** argv) {
    
    ofstream out;//outputs the result in a file
    float vwdHrs;//Viewed Hours
    char package;//Cable Package
    const int SIZE=40;//Max size number = 39 characters
    char name[SIZE];//Gives the name a maximum characters to enter
    float bill;//Cable bill in $'s
    //open the file
    out.open("cable.dat");
    //Prompt the user for input 
    cout<<"How many hours did you view this month?"<<endl;
    cin>>vwdHrs;
    cout<<"What is your package A,B,C"<<endl;
    cin>>package;
    cout<<"What is the customers name?"<<endl;
    cin.ignore();
    cin.getline(name,SIZE);
    //Use the switch statement to choose the package
    switch(package){
        case 'A':
        case 'a':{
                bill= 9.95;
                        if(vwdHrs>10)bill+=2*(vwdHrs-10);
                         break;
                }
    
        case 'B':
        case 'b':{
        bill=14.95;
                if(vwdHrs>20)bill+=(vwdHrs-20);
                 break;
             }
        case 'C':
        case 'c':{
        bill=19.95;
        break;
              }
        default:cout<<"Wrong Package choosen"<<endl;
    };
     //Output the results to the screen
    out<<fixed<<setprecision(2)<<showpoint;
    cout<<"Your cable Bill from CSC5 RCC Programming class"<<endl;
    cout<<"Customer name"<<name<<endl;  
    out.close();
    
    return 0;

}
