/* 
 * File:   main.cpp
 * Author: Eduardo Rangel
 * Purpose: To Display Roman numeral depending on the number choice
 * developing a menu
 * Date: March 26, 2015
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    int number;
    //General Menu Format
    //Display the selection
    cout<<"Enter a number from 1-10 "<<endl;
    cin>>number;
    //Read the choice
    //Solve a problem that has been chosen.
    switch(number){
            case 1:{
                cout<<"The Roman numeral version of "<<number<<" is ";
                cout<<"I"<<endl;
               break;
            }
            case 2:{
                cout<<"The Roman numeral version of "<<number<<" is ";
                cout<<"II"<<endl;
                break;
            }
            case 3:{
                cout<<"The Roman numeral version of "<<number<<" is ";
                cout<<"III"<<endl;
              
                break;
            }
            case 4:{
                cout<<"The Roman numeral version of "<<number<<" is ";
                cout<<"IV"<<endl;
                
                break;
            }
            case 5:{
               cout<<"The Roman numeral version of "<<number<<" is ";
                cout<<"V"<<endl;
                break;
            }
            case 6:{
             cout<<"The Roman numeral version of "<<number<<" is ";
                cout<<"XI"<<endl;
                
                break;
            }
            case 7:{
                cout<<"The Roman numeral version of "<<number<<" is ";
                cout<<"XII"<<endl;
         
                break;
            }
            case 8:{
                cout<<"The Roman numeral version of "<<number<<" is ";
                cout<<"XIII"<<endl;
                break;
            }
            case 9:{
              cout<<"The Roman numeral version of "<<number<<" is ";
                cout<<"IX"<<endl;
                break;
            }
            case 10:{
                cout<<"The Roman numeral version of "<<number<<" is ";
                cout<<"X"<<endl;
                break;
            }
            default:{
                    cout<<"Exit?"<<endl;
            }
    };
    return 0;
}

