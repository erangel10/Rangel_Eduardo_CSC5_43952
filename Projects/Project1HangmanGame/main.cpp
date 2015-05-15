/*
* File: main.cpp
* Author: Eduardo Rangel
* Purpose: Make a Game
* Created on May 3, 2015, 10:04 AM
*/
//System libraries
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;
//User libaries

//Global Constants

//Function Prototypes
int lterFil(char, string, string&);
void game();
void rules();
//Execution Begins here
int main(int argc, char** argv)
{
    //Declare variables
    int choice;
    //Call the rules function to display the rules before the player starts playing the game
    rules();
    //Prompt user for input
    cout<<"Do you want to continue to play the game if yes enter 1 if not enter number 2"<<endl;
    cin>>choice;
    //Use switch statement to let the player decide whether he wants to continue to play the game or not
    switch(choice){
        case 1: game();
        break;
        case 2:
            cout<<"Thanks for coming bye!"<<endl;
            break;
        default:;    
    }
    return 0;
    }

void rules()
{
    //Output the rules for the player
   cout<<"                         Hangman Game"<<endl;
   cout<<"Welcome to Hangman here are the rules to be successful in the game."<<endl;
   cout<<"                             Rules "<<endl;
   cout<<"----------------------------------------------------------------"<<endl;
   cout<<"1. You have to Guess the country that is behind the word."<<endl;
   cout<<"2. You have to enter a letter until you guess the whole word press enter after you enter a letter."<<endl;
   cout<<"3. You have 5 chances to guess the word, you will lose a chance each time you enter a letter that is not in the word."<<endl;
   cout<<"4. If you miss 5 times the game will be over."<<endl;
   cout<<"5. If you guess the word correctly before wasting your 5 chances you win the game."<<endl;
   cout<<"----------------------------------------------------------------"<<endl;
   cout<<endl;
   
}
//Function to calculate the letters we already used
int lterFil(char guess, string secretW, string &guessW)
    {
    int i;
    int matches = 0;
    int len = secretW.length();
    for (i = 0; i< len; i++)
    {
            // Identify if a word has already been used in another guess
            if (guess == guessW[i])
                    return 0;
            // Is the guess in the secret word?
            if (guess == secretW[i])
            {
                    guessW[i] = guess;
                    matches++;
            }
    }
    return matches;
    }

//Game function to make all the procedure of the game
void game()
{
    //Declare variables
      const int  maxTrys = 5;//number of maximum tries
    //string name;
    char letter;
    int WrgGues = 0;//Number of wrong guesses
    string word;
    string level;
    srand(time(0)); //Set random numerator seed 
    // Ask user for for Easy, Average, Hard
    cout << "\nChoose a LEVEL(E - Easy, A - Average, H - Hard):" << endl;
    cin >> level;
    // compare level 
    if (level == "Easy" || level == "easy")
    {
            //put all the string inside the array here
            string easy[] = { "india", "japan", "nepal", "china" };
            string word;
            //Generate Random words into the array
            int n = rand() % 4;
            word = easy[n];

            //call the function here for guessing game
            // Initialize the secret word with the * character.
            string unknown(word.length(), '*');
            cout << "\nEach letter is represented by an asterisk.";
            cout << "\nYou have to type only one letter in one try.";
            cout << "\nYou have " << maxTrys << " tries to try and guess the country.";
            cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
            // Loop until the guesses are used up
            while (WrgGues < maxTrys)
            {
                    cout << "\n" << unknown;
                    cout << "\nGuess a letter: ";
                    cin >> letter;
                    // Fill secret word with letter if the guess is correct,
                    // increment the number of wrong guesses.
                    if (lterFil(letter, word, unknown) == 0)
                    {
                            cout << endl << "Whoops! That letter isn't in there!" << endl;
                            WrgGues++;
                    }
                    else
                    {
                            cout << endl << "You found a letter! Isn't that exciting?" << endl;
                    }
                    // Tell user how many guesses has left.
                    cout << "You have " << maxTrys - WrgGues;
                    cout << " guesses left." << endl;
                    // Check if user guessed the word.
                    if (word == unknown)
                    {
                            cout << word << endl;
                            cout << "Yeah! You got it!";
                            break;
                    }
            }
            //If the user uses all 5 chances without guessing the word output the result to the user
            if (WrgGues == maxTrys)
            {
                    cout << "\nSorry, you lose...you've been hanged." << endl;
                    cout << "The word was : " << word << endl;
            }
    }
    //Use the average level with more letters than the easy level
    else if (level == "Average" || level == "average")
    {
            //put all the string inside the array here
            string average[] = { "madagascar", "azerbaijan", "kyrgyzstan" };

            int n = rand() % 3;
            word = average[n];

            //call the function here for guessing game
            // Initialize the secret word with the * character.
            string unknown(word.length(), '*');
            cout << "\nEach letter is represented by an asterisk.";
            cout << "\nYou have to type only one letter in one try.";
            cout << "\nYou have " << maxTrys << " tries to try and guess the country.";
            cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
            // Loop until the guesses are used up
            while (WrgGues < maxTrys)
            {
                    cout << "\n" << unknown;
                    cout << "\nGuess a letter: ";
                    cin >> letter;
                    // Fill secret word with letter if the guess is correct,
                    // otherwise increment the number of wrong guesses.
                    if (lterFil(letter, word, unknown) == 0)
                    {
                            cout << endl << "Whoops! That letter isn't in there!" << endl;
                            WrgGues++;
                    }
                    else
                    {
                            cout << endl << "You found a letter! Isn't that exciting?" << endl;
                    }
                    // Tell user how many guesses has left.
                    cout << "You have " << maxTrys - WrgGues;
                    cout << " guesses left." << endl;
                    // Check if user guessed the word.
                    if (word == unknown)
                    {
                            cout << word << endl;
                            cout << "Yeah! You got it!";
                            break;
                    }
            }
            if (WrgGues == maxTrys)
            {
                    cout << "\nSorry, you lose...you've been hanged." << endl;
                    cout << "The word was : " << word << endl;
            }
    }
    //The hard level is supposed to have words with more letters than the easy and average levels
    else if (level == "Hard" || level == "hard")
    {
            //put all the string inside the array here
            string hard[] = { "turkmenistan", "yugoslav", "uzbekistan" };

            int n = rand() % 3;
            word = hard[n];

            //call the function here for guessing game
            // Initialize the secret word with the * character.
            string unknown(word.length(), '*');
            cout << "\nEach letter is represented by an asterisk.";
            cout << "\nYou have to type only one letter in one try.";
            cout << "\nYou have " << maxTrys << " tries to try and guess the country.";
            cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
            // Loop until the guesses are used up
            while (WrgGues < maxTrys)
            {
                    cout << "\n" << unknown;
                    cout << "\nGuess a letter: ";
                    cin >> letter;
                    // Fill secret word with letter if the guess is correct,
                    // otherwise increment the number of wrong guesses.
                    if (lterFil(letter, word, unknown) == 0)
                    {
                            cout << endl << "Whoops! That letter isn't in there!" << endl;
                            WrgGues++;
                    }
                    else
                    {
                            cout << endl << "You found a letter! Isn't that exciting?" << endl;
                    }
                    // Tell user how many guesses has left.
                    cout << "You have " << maxTrys - WrgGues;
                    cout << " guesses left." << endl;
                    // Check if user guessed the word.
                    if (word == unknown)
                    {
                            cout << word << endl;
                            cout << "Yeah! You got it!";
                            break;
                    }
            }
            if (WrgGues == maxTrys)
            {
                    cout << "\nSorry, you lose...you've been hanged." << endl;
                    cout << "The word was : " << word << endl;
            }
    }  
    }