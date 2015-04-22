/* 
 * File:   main.cpp
 * Author: Eduardo Rangel
 * Purpose: To pass the midterm
 * Created on April 20, 2015, 10:40 AM
 */
//System libraries
#include <iostream>

using namespace std;
//User libraries

//Global Constants

//Function prototypes
void problm1();
int problm2();
int problm3();
int problm4();
int problm5();
int problm6();
//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    int inN,choice;
     cout<<"Enter the number for the problem you want to see from 1-6 "<<endl;
        cin>>choice;
    do{
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
            
            case 6: problm6();
            break;
            
            default:inN;
        }
    }while (inN<7);

    return 0;
}
//New Function/Problem
void problm1(){
    //Declare variables
    int lines;
    //Prompt user for input 
    cout<<"How many lines do you want to output? ";
    cin>>lines;
    //while loop used to validate information given
    while(lines <= 0){
        cout<<"Please enter a number greater than 0"<<endl;
        cin>>lines;
    }
    //Use for loop to display the number of lines in decaying order
    for (int num=lines; num >=1; num--){
        
       cout<<num<<endl;
      
                
    }
    

}
//New Function/Problem
int problm2(){
    //int number;
    
    //Prompt user for input 
    //cout<<"Please enter a four digit number (ie. 1990)"<<endl;
    //cin>>number;
    
}
//New Function Problem
int problm3(){
    
    
}
//New Function Problem
int problm4(){
    //Declare Variables
    char A,B,C,choice;
    float hours, monthly,addHour,total;
    //Prompt user for input 
    cout<<"Choose the package you want A, B or C"<<endl;
    cin>>choice;
    //User Switch statement to output the correct choice by the user
    switch(choice){
        case 'A':
           cout<<"how many Hours do you want"<<endl;
           cin>>hours;
           if (hours == 5){
               cout<<"The monthly cost is going to be: 19.95"<<endl;
               
           }
           else if (hours > 5 && hours <= 20){
           
            //cout <<"The total monthly payment is going to be: "<<total<<endl;
            cout<<total<<endl;
           }
            break;
            
        case 'B':
            cout<<"how many Hours do you want"<<endl;
           cin>>hours;
           if (hours == 15){
               cout<<"The monthly cost is going to be: 24.95"<<endl;
               
           }
           else if (hours > 15 && hours <= 25){
            total = 0.75 * hours + 19.95;
            cout <<"The total monthly payment is going to be: "<<total<<endl;
           }
           else if (hours > 25){
               
               
           }
            break;
            
        case 'C':
            
            cout<<"By paying 29.79 monthly you get unlimited access"<<endl;
                    
          
            break;
            
        default:;
        
    }
    
}
//New Function/Problem
int problm5(){
  //declare variables
    float hours,ratePay;
    //Prompt user for input 
    cout<<"Please enter the number of hours worked"<<endl;
    cin>>hours;
    cout<<"Please enter the rate of pay"<<endl;
    cin>>ratePay;
    
    float ttlTime = ratePay*40;//Total Straight time
   
    //calculate the gross pay
    if (hours >40 && hours <=50){
      
       ratePay *= 2;  
      
       
    } 
    else if (hours > 50 ){
        
        ratePay *= 3;
    }
    
    cout<<"The whole gross pay is going to be: "<<ratePay+ttlTime<<endl;
   
}

//New Function/Problem
int problm6(){
    
    
}