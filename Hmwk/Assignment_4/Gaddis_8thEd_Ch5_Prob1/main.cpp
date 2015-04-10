/* 
 * File:   main.cpp
 * Author: Eduardo Rangel
 * Purpose: sum of numbers
 *Created on April 6, 2015, 9:38 AM
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
    int sum = 0;
    int number;
    //prompt the user for input 
	cout << "Enter a number greater than 0.\n";
		cin >> number;
	
		
	for (int total = 0; total <= number; total++)
	
	{	
		sum = sum + number;
		total++;
	}
	if (number < 1){
			cout << "\n" << number << " is an invalid input.";
			cout << " The program will now terminate.\n";
	}
	else{
            cout << "\nThe sum of numbers 1 - " << number
			 << " " << "is " << sum << endl;
        }
    return 0;
}

