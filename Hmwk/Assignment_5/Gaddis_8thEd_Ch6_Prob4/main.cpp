/* 
 * File:   main.cpp
 * Author: Eduardo Rangel
 * Purpose: Safest Driving Area
 * Created on April 18, 2015, 2:23 PM
 */
//System Libraries
#include <iostream>

using namespace std;
//User Libraries

//Global Constants

int numAdts(string);//Number of Accidents
void findLow(int, int, int, int, int);

//System Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare Variables
    int accN, accS, accE, accW, accC;
    //use for loop to use t5he switch statement
    for (int i = 0; i<5; i++){
        //start switch statement
        switch(i){
            case 0:
                accN = numAdts ("North");
                break;
                
            case 1:
                accS = numAdts ("South");
                break;
                
            case 2:
                accE = numAdts ("East");
                break;
                
            case 3:
                accW = numAdts ("West");
                break;
                
            default:
            accC = numAdts ("Central");
            
        }
        
    }
    //Use the call function for the void function
    findLow(accN, accS, accE, accW, accC);

    return 0;
}


//new Function
int numAdts(string region){
    //Declare variable
    int acdnts = 0;
    //Prompt the user for input 
    cout <<"Please enter the number of accidents for region "<<region<<endl;
    cin>>acdnts;
    //Use the while loop to validate the information given
    while (acdnts < 0){
        cout<<"Please enter a positive number "<<endl;
        cin>>acdnts;
    }
    return acdnts;
    
}


//new Function
void findLow(int r1, int r2, int r3, int r4, int r5){
    //Declare variable
    int lowest = 0;
    string region = "";
    //Use if/else statement to determine if is true or false
    if (r1 < r2 && r1 < r3 && r1 < r4 && r1 < r5){
        lowest = r1;
        region = "North";
    }
    else if (r2 < r1 && r2 < r3 && r2 < r4 && r2 < r5){
        lowest = r2;
        region = "South";
}
    else if (r3 < r1 && r3 < r2 && r3 < r4 && r3 < r5){
        lowest = r3;
        region = "East";
    }
    else if (r4 < r1 && r4 < r2 && r4 < r3 && r4 < r5){
        lowest = r4;
        region = "West";
    }
    else {
        lowest = r5;
        region = "Central";
    } 
    cout <<"The region that had the fewest reported automobile accidents was "<<region<<". The total number of accidents in that region was: "<<lowest<<endl;
}

