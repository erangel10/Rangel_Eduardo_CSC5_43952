/*
* File: main.cpp
* Author: Eduardo Rangel
* Created on May 6, 2015, 9:01 AM
* Purpose: Example Linear Search/Mark Sort
*/
//System Libraries
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>
#include <vector>
using namespace std;
//User Libraries

//Global Constants

//Function Prototypes
void filAray(vector<int> &,int);
void prntAry(vector<int>,int,int);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    //Declare variables
    const int SIZE=100;
    vector <int> array(SIZE);
    //Fill the array
    filAray(array,SIZE);
    //Print the array
    prntAry(array,SIZE,10);
    //Sort the Array
   
    //Print again
    prntAry(array,SIZE,10);
    //Find something
    int rndVal=rand()%90+10;
    
    
    //Exit Stage Right!
        return 0;
}

void prntAry(vector<int> &a,int n,int perLine){
    cout<<endl;
    for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
    if(i%perLine==perLine-1)cout<<endl;
    }
    cout<<endl;
}
void filAray(vector<int> &a,int n){
    for(int i=0;i<n;i++){
    a[i]=rand()%90+10;//2 digit numbers
    }
}

