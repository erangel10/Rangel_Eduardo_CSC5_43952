/* 
 * File:   main.cpp
 * Author: Eduardo Rangel
 * Purpose: Lowest Score Drop
 * Created on April 16, 2015, 3:28 PM
 */
//System Libraries
#include <iostream>

using namespace std;
//User Libraries

//Global Constants

//System Prototypes
void getScor(float &);
void calAver(float, float, float, float , float);
int findLow(float, float, float, float, float);
//Execution begins here
int main(int argc, char** argv) {
    //Call the function to get the five scores
    float score1,score2,score3,score4,score5;
    getScor(score1);
    getScor(score2);
    getScor(score3);
    getScor(score4);
    getScor(score5);
    //Call the function of the average scores
    calAver(score1,score2,score3,score4,score5);

    return 0;
}

void getScor(float & score){
    cout<<"Please enter 5 test scores "<<endl;
    cin>>score;
    //Use a while loop to validate the information entered
    while (score <= 0 && score > 100){
        cout<<"Please enter a  score bigger than 0 and less than or equal to 100"<<endl;
        cin>>score;
    }
}

void calAver (float score1, float score2, float score3, float score4, float score5 ){
    //Calculate the average scores
    //declare variable
    float average;
    int lowScor=findLow(score1,score2,score3,score4,score5);
    
    if (lowScor == 1){
       average = (score2+score3+score4+score5)/4;
        cout<<"The average of the highest four scores is "<<average<<endl;
    }
    else if (lowScor == 2){
        average = (score1,score3,score4,score5)/4;
        cout<<"The average of the highest four scores is "<<average<<endl;
    }
     else if (lowScor == 3){
        average = (score1,score2,score4,score5)/4;
        cout<<"The average of the highest four scores is "<<average<<endl;
    }
     else if (lowScor == 4){
        average = (score1,score2,score3,score5)/4;
        cout<<"The average of the highest four scores is "<<average<<endl;
    }
     else if (lowScor == 5){
        average = (score1,score2,score3,score4)/4;
        cout<<"The average of the highest four scores is "<<average<<endl;
    }
                    
    
}

int findLow (float score1, float score2, float score3, float score4, float score5){
    //user If/Else statement to find the lowest score
    if (score1 <= score2 && score1 <= score3 && score1 <= score4 && score1 <= score5)
        return 1;
    else if (score2 <= score1 && score2 <= score3 && score2 <= score4 && score2 <= score5)
        return 2;
    else if (score3 <= score1 && score3 <= score2 && score3 <= score4 && score3 <= score5)
        return 3;
    else if (score4 <= score1 && score4 <= score2 && score4 <= score3 && score4 <= score5)
        return 4;
    else if (score5 <= score1 && score5 <= score2 && score5 <= score3 && score5 <= score4)
        return 5;
}