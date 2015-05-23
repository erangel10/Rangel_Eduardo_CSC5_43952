/* 
 * File:   main.cpp
 * Author: EDUARDO
 *
 * Created on May 22, 2015, 6:16 PM
 */
//System Libraries
#include <iostream>

using namespace std;
//User libraries

//Global Constants

//Functions Prototypes
void sScore(int *,int );
float average(int *,int);

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    int nScore;//Number of score
    cout<<"Enter the number of test scores: ";
    cin>>nScore;

    int* score;
    score= new int [nScore];
    //for loop to enter the score for each of the student
    for(int i=0;i<nScore;i++)
    {
         cout<<"\nEnter the score for "<<i+1<<" test: ";
         cin>>score[i];
}

    sScore(score, nScore);

    cout<<"\nAfter dropping the lowest score,List of Scores in ascending order";
    for(int i=1;i<nScore;i++)
    {
        cout<<"\n"<<score[i];
 }
    float avrage=average(score,nScore);

    cout<<"\nThe average of scores is "<<avrage<<endl;

    delete [] score;
    score=0;

    //exit stage right
    return 0;
}

void sScore(int *score,int size)
{
    int sScan,mindex;//start scan, minimum index
    int mValue;

    for(sScan=0;sScan<(size-1);sScan++)
    {
    mindex=sScan;
    mValue=score[sScan];

    for(int index=sScan+1;index<size;index++)
    {
        if(score[index]<mValue)
{
            mValue=score[index];
            mindex=index;
}
}
    score[mindex]=score[sScan];
    score[sScan]=mValue;
}

}

float average(int * score,int size)
{
    float sum=0.0,avg;
    for(int i=1;i<size;i++)
    {
        sum+=score[i];
}
    return avg=sum/(size-1);
}

