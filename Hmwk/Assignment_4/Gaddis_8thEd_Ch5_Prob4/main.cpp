/* 
 * File:   main.cpp
 * Author: Eduardo Rangel
 *Purpose: Calories Burned
 * Created on April 6, 2015, 10:38 AM
 */
//System libraries
#include <iostream>

using namespace std;
//User Libraries

//Global Constants

//System Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    float calorie = 3.6;
    cout<<"********************"<<endl;
    //Use FOR loop to calculate the calories 
    for (int burned=5;burned<=30;burned += 5){
        cout<<" "<<burned<<"\t\t"<<calorie * burned<<endl;
        
    }
    cout<<"********************"<<endl;

    return 0;
}

