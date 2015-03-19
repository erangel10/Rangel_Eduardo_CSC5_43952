/* 
 * File:   main.cpp
 * Author: Eduardo Rangel
 *Purpose: Average Rainfall
 * Created on March 16, 2015, 5:01 PM
 */
//system Libraries
#include <iostream>
#include <iomanip>
using namespace std;


int main(int argc, char** argv) {
    //declare the variables for the months
    char month1[10],month2[10],month3[10];
    //declare the variables to calculate the rate 
    float raifal1,raifal2,raifal3;
    //Ask the user to input the three months
    cout<<"Please enter the three months consecutively (ex. month1 month2 month3) "<<endl;
    cin>>month1>>month2>>month3;
    //Input the amount of rainfall per month
    cout << "How many inches of rain fell in " << month1 << "?" << endl;
   cin >> raifal1;
   cout << "How much inches of rain fell in " << month2 << "?" << endl;
   cin >> raifal2;
   cout << "How much inches of rain fell in " << month3 << "?" << endl;
   cin >> raifal3;
   //Calculate the average rainfall for the three months 
   cout<<"The total amount of inches rained in the three months was "<<raifal1 + raifal2 + raifal3 / 3;
  
   
    
   
    return 0;
}

