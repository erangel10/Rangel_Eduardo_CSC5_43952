/* 
 * File:   main.cpp
 * Author: Eduardo Rangel
 * Purpose: Output the characters for the ASCII
 * Created on April 6, 2015, 3:20 PM
 */
//System Libraries
#include <iostream>

using namespace std;
//User Libraries

//Global Constants

//System Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables 
    char letter;
    //Use for loop to display the ASCII Codes
    for(int count = 0; count <= 127; count++)
	{
	if (count % 16 ==0)
           	cout << endl; 
		   
		   cout << letter << " ";
                    letter++;
		
	} 
    //Exit 
    return 0;
}

