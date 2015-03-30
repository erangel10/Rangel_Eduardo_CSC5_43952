/* 
 * File:   main.cpp
 * Author: Eduardo Rangel
 *Purpose: Body Mass Index
 * Created on March 30, 2015, 3:28 PM
 */
//system libraries
#include <iostream>

using namespace std;
//user libraries

//global constants

//system prototypes

//execution begins here
int main(int argc, char** argv) {
    //declare variables
    float height,bmi;
    int weight;
    //Prompt user for input
    cout<<"Please enter your weight in pounds"<<endl;
    cin>>weight;
    cout<<"Please enter your height in inches"<<endl;
    cin>>height;
    //Calculate the BMI
    bmi = weight * 703 / (height * height);
    cout<<"Your BMI is "<<bmi<<endl;
    //Use if else statement to determine if weight is optical, overweight, or underweight
    if (bmi > 25){
        cout<<"You are overweight"<<endl;
    }
    else if (bmi < 18.5){
        cout<<"You are underweight"<<endl;
    }
    else if (bmi > 18.5 && bmi < 25){
        cout<<"You have a optimal weight"<<endl;
    }

    return 0;
}

