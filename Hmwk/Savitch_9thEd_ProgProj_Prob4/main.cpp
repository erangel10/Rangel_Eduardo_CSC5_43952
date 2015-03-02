/* 
 * File:   main.cpp
 * Author: Eduardo Rangel
 *
 * Created on March 2, 2015, 9:05 AM
 * Purpose: Free Fall problems from Savitch
 */
//System Libraries
#include <iostream>

using namespace std;
//user libraries

//Global constants
const float G=3.2174e1f;//Conversion from ft/sec^2
const float CNVFTMT=3.04e-1f;//Conversion from fee //f means is a float
//System Prototypes

int main(int argc, char** argv) {//Acceleration in ft/sec^2
    
   //Declare Variables
    float time,dstnce;
    //Prompt for time
    cout<<"Free Fall Problem"<<endl;
    cout<<"Input the time to drop x.xx"<<endl;
    cin>>time;
    //Calculate the distance
    //dstnce=static_cast<float>(1)/2*G*time*time;
    //dstnce=1.0f/2*G*time*time;
    //dstnce=1/2.0f*G*time*time;
    //dstnce=G*1/2*time*time;
    //dsntce=0.5f*G*time*time;
    dstnce=1.0f/2*G*time*time;
    //Output the results
    cout<<"Distance fallen = "<<dstnce<<"(feet)"<<endl;
    cout<<"Distance fallen = "<<dstnce*CNVFTMT<<"(meters)"<<endl;
    //exit stage right!
    
   
    return 0;
}

