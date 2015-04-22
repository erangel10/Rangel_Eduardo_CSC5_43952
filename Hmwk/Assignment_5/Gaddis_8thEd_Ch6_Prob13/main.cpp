/* 
 * File:   main.cpp
 * Author: Eduardo Rangel
 *
 * Created on April 20, 2015, 5:38 PM
 */
//System Libraries
#include <iostream>

using namespace std;
//User Libraries

//Global Constants

//Function Prototypes
int employe();//number of employees
int numberE(int);//days absent 
float daysAb(int, int);//average
//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    int numOfEm, eachDay;
   
    numOfEm = employe();
    
    eachDay = numberE(numOfEm);
    float averAbs;
    averAbs = daysAb(numOfEm,eachDay);
    
    cout<<"The average of days the employees of the company were absent is "<<averAbs<<endl;

    return 0;
}
//New Function
int employe(){
    //declare variable
    int numE;//number of employees
    
    cout<<"Please enter the number of employees in the company"<<endl;
    cin>>numE;
    while (numE < 1 ){
        cout<<"Please enter a number equal to one or greater than one"<<endl;
        cin>>numE;
    }
    
    return numE;
}
//New Function
int numberE(int num){
    int sum = 0;

    for(int i=1;i<=num;i++){
        int dayMsed;//Days missed
    cout<<"Please enter the number of days employee "<<i<<" was absent during the week"<<endl;
    cin>>dayMsed;
    
    while(dayMsed < 0){
        cout<<"Please enter a positive number"<<endl;
        cin>>dayMsed;
    }
    sum += dayMsed;
  }
    return num;
}
//New Function
float daysAb(int numOfE, int daysOff){
    
    float average = numOfE /(daysOff+0.0);
    
    return average;
    
    
}