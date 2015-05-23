/* 
 * File:   main.cpp
 * Author: Eduardo Rangel
 * Purpose: Make a grading program 
 * Created on May 10, 2015, 12:13 PM
 */
//System libraries
#include <iostream>

using namespace std;
//User Libraries

//Global constants

//Functions Prototypes
void chckAns(char[], char[], int, int);
//Execution begins here
int main(int argc, char** argv) {
        const int nQuest = 20;//number of questions
        const int mCorect = 15;
    int cAnswer = 0; //Accumulator for number of correct answers
    int wAnswer = 0; //Accumulator for number of incorrect answers
    char answers[nQuest] = { 'A', 'D', 'B', 'B', 'C','B', 'A', 'B', 'C', 'D','A', 'C', 'D', 'B', 'D','C', 'C', 'A', 'D', 'B',};

    int replies;
    char sAnswer[nQuest];

    //Loop for users answers
        for (replies = 0; replies < nQuest; replies++)
    {
            cout<< "Please enter your answers (Hint: Use capital letters): "
            << (replies + 1) << ": ";
            cin >> sAnswer[replies];

    //Validation of users answers
    while (sAnswer[replies] != 'A' && sAnswer[replies] != 'B' && sAnswer[replies] != 'C' && sAnswer[replies] != 'D')
    {
    cout << "You must enter A, B, C, or D\n";

    cout<< "Please enter your answers (Hint: Use capital letters): "
    << (replies + 1) << ": ";
    cin >> sAnswer[replies];
    }

    }


    chckAns(answers, sAnswer, nQuest, mCorect);

    return 0;
    }


void chckAns(char answer1[], char sAnswer[], int nQuest, int mCorect)
    {
    //cout << "max: " << NUM_QUESTIONS;
    int cAnswer = 0;
    int wAnswer = 0;
    int wAnser[]= {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    int j = 0;

    //Check the student's replies against the correct answers
   for (int i = 0; i < nQuest; i++)
    {
        if (answer1[i] == sAnswer[i])
        cAnswer++;
      else if (answer1[i] != sAnswer[i])
    {
        wAnswer++;
       wAnser[j] = i + 1;
        j++;
    }
    }
    //Did they pass or fail?
    if (cAnswer >= mCorect)
    {
        cout << "\nYou must have at least 15 correct to pass.";
         cout << "\nStudent passed the exam\n\n";
    }
        else
        {
        cout << "\nYou must have at least 15 correct to pass.";
        cout <<"\nStudent failed the exam\n\n";
    }

    //Display a list of the questions that were incorrectly answered.
      cout << "The list below shows the question numbers of the incorrectly";
      cout << " answered questions.\n";
    for (int i = 0; i < nQuest; i++)
    {
        if (wAnser[i] != 0)
            cout << "Question # " << wAnser[i] << " is incorrect." << endl;
    }

    //Display the number of correct and incorrect answers provided by the student.
       cout << "\nCorrect Answers = " << cAnswer << endl;
       cout << "Incorrect Answers = " << wAnswer << endl;
    }


