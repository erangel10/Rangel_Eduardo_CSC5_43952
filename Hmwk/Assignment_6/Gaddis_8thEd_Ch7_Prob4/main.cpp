/* 
 * File:   main.cpp
 * Author: EDUARDO
 *
 * Created on May 9, 2015, 5:37 PM
 */
//System libraries
#include <iostream>
#include <iomanip>

using namespace std;
//User Libraries

//Global Constants

//Function Prototypes
int array(int [],int ,int n );
//Execution begins here
int main(int argc, char** argv) {
    //declare variables
    int array3;
    int SIZE=5;
    int array2[SIZE];
    array3 = array(array2, SIZE, 10);
    
    cout<<array3<<endl;
    
    return 0;
}

int array(int [],int SIZE,int n)
{
    cout<<"Enter a number "<<endl;
    cin>>;
    
    
}