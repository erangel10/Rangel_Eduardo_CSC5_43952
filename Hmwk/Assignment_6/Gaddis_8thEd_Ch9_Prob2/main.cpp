/* 
 * File:   main.cpp
 * Author: Eduardo Rangel
 * Purpose: Test Scores in Ascending order using dynamic allocation
 * Created on May 21, 2015, 4:03 PM
 */
//System Libraries
#include <iostream>

using namespace std;
//User Libraries

//Global Constants

//Function Prototypes
void sScore(int *,int );
float average(int *,int);
//Execution begins here
int main(int argc, char** argv) {
    //declare variables
    int nScores;//Number of scores
    cout<<"Enter the number of test scores: ";
    cin>>nScores;
    int* score;
    score= new int [nScores];
    //use for loop to get the scores for each student
    for(int i=0;i<nScores;i++)
    {
        cout<<"\nEnter the score for "<< i+1 <<" test: ";
        cin>>score[i];
 }

    sScore(score, nScores);

    cout<<"\nList of Scores in ascending order";
    //use for loop with the array
    for(int i=0;i<nScores;i++)
    {
        cout<<"\n"<<score[i];
 }
    float avrage=average(score,nScores);

    cout<<"\nThe average of scores is "<<avrage<<endl;

    delete [] score;
    score=0;


    return 0;
 }

    void sScore(int *score,int size)
    {
    int sScan,index;
    int value;

    for(sScan=0;sScan<(size-1);sScan++)
    {
    index=sScan;
    value=score[sScan];

    for(int index=sScan+1;index<size;index++)
    {
        if(score[index]<value)
    {
            value=score[index];
            index=index;
   }
  }
    score[index]=score[sScan];
    score[sScan]=value;
  }

 }

    float average(int * score,int size)
    {
    float sum=0.0,avg;
    for(int i=0;i<size;i++)
    {
        sum+=score[i];
    }
    return avg=sum/size;
}

