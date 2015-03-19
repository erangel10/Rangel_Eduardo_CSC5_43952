/* 
 * File:   main.cpp
 * Author: Eduardo Rangel
 *Purpose: Input data and output it in the story
 * Created on March 16, 2015, 1:57 PM
 */
#include <iostream>
#include <string>
#include <iomanip>

//system Libraries
using namespace std;
//user Libraries 

//global Constants

//Execute the program here
int main(){
    //Declare Variables
   string name,city,college,proff,animal,petName;
   int ageYrs;
    //Ask the user to input the following info
    cout<<"Please Give us the following informatioin"<<endl;
    cout << "Name: ";
    getline(cin,name);
    
    cout << "City: ";
    getline(cin,city);
    
    cout << "Age (in years:) ";
    cin >> ageYrs;

    cout << "College: ";
    cin.ignore(100,'\n');
    getline(cin,college);

    cout << "Profession: ";
    getline(cin,proff);

    cout << "Favorite Animal: ";
    getline(cin,animal);

    cout << "Pet Name: ";
    getline(cin,petName);
    //Output the story with given information
    cout<<"There once was a person named "<<name<<" who lived in "<<city<<". At the age of "<<endl;
    cout<<ageYrs<<", "<<name<<" went to college at "<<college<<". "<<name<<" graduated and went to work as a "<<endl;
    cout<<proff<<". "<<"Then, "<<name<<" adopted a(n) "<<animal<<" named "<<petName<<". "<<endl;
    cout<<"They both lived happily ever after."<<endl;
    
    return 0;
}