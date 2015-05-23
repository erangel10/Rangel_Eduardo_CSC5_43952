/* 
 * File:   main.cpp
 * Author: Eduardo Rangel
 * Purpose: Make a mode function
 * Created on May 20, 2015, 6:32 PM
 */
//System libraries
#include <iostream>

using namespace std;
//User Libraries

//Global Constants

//Function Prototypes
int mode(int* ,int );
//Execution begins here
int main(int argc, char** argv) {
    //declare variables
    int * number,size;
    //Prompt user for input
    cout<<"\nEmter the number of integers: ";
    cin>>size;
    number=new int[size];
    //Use for loop to ask for the number of integers and give it to the array
    for(int i=0;i<size;i++)
    {
        cout<<"\nEnter the "<<i+1<<" number: ";
        cin>>number[i];
    }

    int theMode=mode(number,size);

    if(theMode==-1) cout<<"\nThere is no mode of these numbers."<<endl;
    else cout<<"\nThe mode of these numbers is "<<theMode<<endl;

    return 0;
}
//New function
int mode(int* number,int size)
{
    //declare variables
    int* freqncy=new int[size];
    //for loop used to get the frequency 
    for(int i=0;i<size;i++)
    {
        freqncy[i]=0;
     //get frequency with the number array  
    for(int x=0;x<size;x++)
        if(number[i]==number[x])freqncy[i]++;
 }

    int maxF=freqncy[0];
    int mode;
    //give the frequency to the array and loop it
    for(int y=1;y<size;y++)
    {
        if(freqncy[y]>=maxF)
    {
            maxF=freqncy[y];
            mode=number[y];

  }
 }
    if(mode==0) mode=-1;
    
    return mode;
}
 

