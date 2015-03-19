/* 
 * File:   main.cpp
 * Author: Eduardo Rangel
 *Purpose: Ingredient Adjuster
 * Created on March 18, 2015, 5:37 PM
 */
//System Libraries
#include <iostream>
//User Libraries

//Global Constants

//Execute here
using namespace std;

int main(int argc, char** argv) {
    //Declare Variables with the given value
    float sugar=1.5;
    float butter=1;
    float flour=17.45;
    float tCookie=48;//Total of cookies
    float nCookie;//Number of cookies to input
    //Prompt the user to enter the amount of cookies he/she wants to make
    cout<<"Please enter the number of cookies you want to make"<<endl;
    cin>>nCookie;
    //Calculate the number of cups needed from each ingredient
    cout<<"The number of cups of sugar you will need to make "<<nCookie<<" cookies is "<< nCookie * (sugar / tCookie)<<endl;
    cout<<"The number of cups of butter you will need to make "<<nCookie<<" cookies is "<<nCookie * (butter / tCookie)<<endl;
    cout<<"The number of cups of flour you will need to make "<<nCookie<<" cookies is "<<nCookie * (flour / tCookie)<<endl;
            

    return 0;
}

