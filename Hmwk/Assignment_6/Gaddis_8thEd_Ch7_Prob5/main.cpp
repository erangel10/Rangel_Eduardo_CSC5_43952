/* 
 * File:   main.cpp
 * Author: Eduardo Rangel
 * Purpose: Calculate the quantity of food a monkey eats
 * Created on May 18, 2015, 2:04 PM
 */
//System libraries
#include <iostream>

using namespace std;
//User Libraries

//Global Constants

//Functions Prototypes

//Execution begins here
int main(int argc, char** argv) {
        //Declare variables
        int mEat[3][7], sum=0,sumOf[3]={0,0,0};
        float avg,avgOf1,avgOf2,avgOf3;

        //get data
    for(int i=0;i<=2;i++)
    {

    for(int x=0;x<=6;x++)
    {
        cout<<"\nEnter the amount of food eaten by monkey "<<i+1<<" in day "<<x+1<<": ";
        cin>>mEat[i][x];

        while (mEat[i][x]<0)
         {
            cout<<"\nNot accept negative values. Reenter: ";
            cin>>mEat[i][x];
   }
        sum+=mEat[i][x];
        sumOf[i]+=mEat[i][x];
   }
  }
        //get average for each monkey
        avg=sum/7;
        avgOf1=sumOf[0]/7.0;
        avgOf2=sumOf[1]/7.0;
        avgOf3=sumOf[2]/7.0;

    cout<<"\nThe average amount of food eaten per day by the whole family of monkeys is "<<avg;

    if(avgOf1<=avgOf2&&avgOf1<=avgOf3)
        cout<<"\nThe least amount of food eaten during the week by any one monkey is "<<sumOf[0];
    
    else if(avgOf2<=avgOf1&&avgOf2<=avgOf3)
        cout<<"\nThe least amount of food eaten during the week by any one monkey is "<<sumOf[1];
    
    else
        cout<<"\nThe least amount of food eaten during the week by any one monkey is "<<sumOf[2];

    if(avgOf1>=avgOf2&&avgOf1>=avgOf3)
        cout<<"\vThe largest amount of food eaten during the week by any one monkey is "<<sumOf[0];
    
    else if(avgOf2>=avgOf1&&avgOf2>=avgOf3)
        cout<<"\nThe largest amount of food eaten during the week by any one monkey is "<<sumOf[1];
    
    else
        cout<<"\nThe largest amount of food eaten during the week by any one monkey is "<<sumOf[2]<<endl;

    return 0;
}

