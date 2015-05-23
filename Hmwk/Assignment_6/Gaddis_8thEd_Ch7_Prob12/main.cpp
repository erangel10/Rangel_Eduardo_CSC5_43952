/* 
 * File:   main.cpp
 * Author: Eduardo Rangel
 * pURPOSE create a grade book for 5 students each with four scores
 * Created on May 15, 2015, 1:21 PM
 */
//System libraries
#include <iostream>

using namespace std;
//User Libraries

//Global Constants

//Function prototypes

//Execution begins here
int main(int argc, char** argv) {
   const int SIZE=5;
    //array for students’ names
    string sNames[size];//student names
    //get Names
    for(int i=0;i<5;i++)
{
        cout<<"Enter a student's name: "<<endl;
        cin>>sNames[i];
 }

    //get scores
    float score[SIZE][4], avg[SIZE],sum[SIZE]={0,0,0,0,0};

    for(int x=0;x<5;x++)
    {
    for(int y=0;y<4;y++)
    {
        cout<<"Enter the score for student "<<(x+1)<<" ";
        cin>>score[x][y];
    //input validation
    while(score[x][y]<0||score[x][y]>100)
    {
        cout<<"Error.The range of score is 0 to 100. Reenter : ";
        cin>>score[x][y];
 }
    sum[x]+=score[x][y];
   }
 }

    //drop lowest score

    float lowest[SIZE];

    for(int a=0;a<5;a++)
    {
        lowest[a]= score[a][0];
    for(int b=1;b<4;b++)
    {
    if (lowest[a]>score[a][b])
        lowest[a]= score[a][b];

    }
    sum[a]-=lowest[a];
 }

    //get avg
    for(int c=0;c<5;c++)
    {
    avg[c]=sum[c]/3.0;
  }

    //scale
    char grade[SIZE];
    for(int d=0;d<5;d++)
    {
    if(avg[d]>=90)grade[d]='A';
    else if(avg[d]>=80)grade[d]='B';
    else if(avg[d]>=70)grade[d]='C';
    else if(avg[d]>=60) grade[d]='D';
    else grade[d]='F';
    cout<<"\nStudent "<<sNames[d]<<" gets a/an "<<grade[d];
 }


return 0;
} 



