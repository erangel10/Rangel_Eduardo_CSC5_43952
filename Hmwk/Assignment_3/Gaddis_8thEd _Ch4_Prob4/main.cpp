/* 
 * File:   main.cpp
 * Author: Eduardo Rangel
 *Purpose: Rectangle Area
 * Created on March 25, 2015, 10:03 AM
 */
//System libraries
#include <iostream>

using namespace std;
//User libraries

//Global Constants

//System prototypes

//Execution Begins here
int main(int argc, char** argv) {
    //Declare variables
    float length1,length2,width1,width2;
    float rec1,rec2;
    
    //Prompt the user for input
    cout<<"Please enter the length of two rectangles"<<endl;
    cin>>length1>>length2;
    cout<<"Please enter the width of the two rectangles"<<endl;
    cin>>width1>>width2;
    //Calculate the area for the 2 rectangles
    rec1 = length1 * width1;
    rec2 = length2 * width2;
    //Output the results of which triangle has the biggest area or are the same
    if (rec1 == rec2){
        cout<<"The rectangles have the same area"<<endl;
    }
        if (rec1 < rec2){
            cout<<"Rectangle 2 is bigger than rectangle 1"<<endl;
    }
    else if (rec1 > rec2){
        cout<<"Rectangle 1 is bigger than rectangle 2"<<endl;
       
    }
    //End
    return 0;
}

