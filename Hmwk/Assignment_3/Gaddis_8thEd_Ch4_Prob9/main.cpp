/* 
 * File:   main.cpp
 * Author: Eduardo Rangel
 *Purpose: Change for a Dollar Game
 * Created on March 29, 2015, 11:48 AM
 */
//System Libraries
#include<iostream>
#include<iomanip>

using namespace std;
//User libraries

//Global Constants

//System prototypes

//Execution begins here
int main(int argc, char** argv)
{
float pennies, nickels, dimes, quarters, total;

cout << "\n+++++++++++++++++++++++++++++++++++++\n"
<< "    Change for a Dollar Game"
<< "\n+++++++++++++++++++++++++++++++++++++\n\n";

cout << "Enter the number of pennies: ";
cin >> pennies;
cout << "Enter the number of nickels: ";
cin >> nickels;
cout << "Enter the number of dimes: ";
cin >> dimes;
cout << "Enter the number of quarters: ";
cin >> quarters;

total = (pennies * 0.01) + (nickels * 0.05) + (dimes * 0.10) + (quarters * 0.25);

    if(total == 1.00)
        cout << "\nCongratulations, You Win!!! You entered exactly one dollar!! \n\n";
    else
    {
        if(total < 1.00 && total > 0)
{
    cout << "\nYou entered less than one dollar.  Try again later!! \n\n";
}
        else
{
        if(total > 1.00)
{
               cout << "\nYou entered more than one dollar.  Try again later!! \n\n";
}
            else
{
                cout << "\n The number of coins have to be greater than 0!! Try again \n\n";
}
}
}

            return 0;
}

