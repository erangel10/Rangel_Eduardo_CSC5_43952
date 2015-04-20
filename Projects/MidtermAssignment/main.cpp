/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on April 20, 2015, 10:40 AM
 */
//System libraries
#include <iostream>

using namespace std;
//User libraries

//Global Constants

//Function prototypes
int problm1(int);
int problm2(int);
int problm3(int);
int problm4(int);
int problm5(int);
int problm6(int);
//Execution brgins here
int main(int argc, char** argv) {
    //Declare variables
    int inN,choice;
    do{
        cout<<"Enter the number for the problem you want to solve from 1-6"<<endl;
        cin>>choice;
        switch(choice){
            case 1: problm1();
            break;
            
            case 2: problm2();
            break;
            
            case 3: problm3();
            break;
            
            case 4: problm4();
            break;
            
            case 5: problm5();
            break;
            
            case 6: problm5();
            break;
            
            default:inN;
        }
    }while (inN<7);

    return 0;
}

int problm1(int){
    
}
