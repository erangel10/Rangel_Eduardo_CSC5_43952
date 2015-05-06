/* 
 * File:   main.cpp
 * Author: rcc
 * Purpose: Example Linear search/mark
 * Created on May 6, 2015, 9:01 AM
 */
//system libraries
#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;
//User libraries

//Global Constants

//Function Prototypes
void filAray(int [], int);
void prntAry(int [], int, int);
int search(int [], int, int);
void markSrt(int [], int);
//Execution begins here
int main(int argc, char** argv) {\
    //set random number generator seed
    srand(static_cast<unsigned int>(time(0)));
    const int SIZE=100;
    int array[SIZE];
    //Call arrays in the functions
    prntAry(array, SIZE,10);
    filAray(array, SIZE);
    markSrt(array, SIZE);

    return 0;
}

void prntAry(int a[], int n, int perLine){
    cout<<endl;
    for (int i=0;i<n;i++){
        cout<<a[i]<<" ";
        if (i%perLine==perLine-1)cout<<endl;
        
    }
    cout<<endl;
}


void filAray(int a[], int n){
    for (int i=0;i<n;i++){
        a[i]=rand()%90+10;//2 digit numbers
    }
    
}

void markSrt(int a[], int n){
    for (int pos=0;pos<n-1;pos++){
        for (int j=pos+1;j<n;j++){
            if (a[pos]>a[j]){
                int temp=a[pos];
                a[pos]=a[j];
                a[j]=temp;
            }
        }
        
    }
    
}   
    
int linSrch(int a[], int n, int val){
    int found =-1;
    for (int i=0;i<n;i++){
        if (a[i] == val)return i;
    }
    
    
    
    
}




