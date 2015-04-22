/* 
 * File:   main.cpp
 * Author: Eduardo Rangel
 * Purpose: Find the Kinetic Energy of an object
 * Created on April 16, 2015, 3:55 PM
 */
//System Libraries
#include <iostream>

using namespace std;
//User libraries

//Global Constants
float kneticE (float v, float m);
//System prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    float mass;
    float velocty;
    float k;
    //Prompt user for input 
    cout<<"Please enter the mass of the object in kilograms"<<endl;
    cin>>mass;
    cout<<"Please enter the velocity of an object in seconds"<<endl;
    cin>>velocty;
    //Calculate the kinetic energy of the object
    k=kneticE(mass,velocty);
    cout<<"The kinetic energy of the object is "<<k<<endl;
    return 0;
}


float kneticE(float v, float m){
    
   return 0.5*m*(v*v);
    
    
}

