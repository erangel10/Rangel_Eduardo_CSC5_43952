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
//const int MAX_TRIES = 5;
//Execution Begins here
int lterFil(char, string, string&);
void easy();
void hard();
void average();

int main(int argc, char** argv)
{
    const int  maxTrys = 5;//number of maximum tries
    //string name;
    char letter;
    int WrgGues = 0;//Number of wrong guesses
    string word;
    string level;
    srand(time(0)); //Set random numerator seed

    // welcome the user
    cout << "\n\nWelcome to hangman!! Guess a country that comes into your mind.";
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
            cout << "\n\nEach letter is represented by an asterisk.";
            cout << "\n\nYou have to type only one letter in one try.";
            cout << "\n\nYou have " << maxTrys << " tries to try and guess the country.";
            cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
            // Loop until the guesses are used up
            while (WrgGues < maxTrys)
            {
                    cout << "\n\n" << unknown;
                    cout << "\n\nGuess a letter: ";
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
            cin.ignore();
            cin.get();
            return 0;
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
            cout << "\n\nEach letter is represented by an asterisk.";
            cout << "\n\nYou have to type only one letter in one try.";
            cout << "\n\nYou have " << maxTrys << " tries to try and guess the country.";
            cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
            // Loop until the guesses are used up
            while (WrgGues < maxTrys)
            {
                    cout << "\n\n" << unknown;
                    cout << "\n\nGuess a letter: ";
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
            cin.ignore();
            cin.get();
            return 0;
    }
    //The hard level is supposed to have words with more letters than the easy and average levels
    else if (level == "Hard" || level == "hard")
    {
            //put all the string inside the array here
            string hard[] = { "turkmenistan", "french guiana", "new caledonia" };

            int n = rand() % 3;
            word = hard[n];

            //call the function here for guessing game
            // Initialize the secret word with the * character.
            string unknown(word.length(), '*');
            cout << "\n\nEach letter is represented by an asterisk.";
            cout << "\n\nYou have to type only one letter in one try.";
            cout << "\n\nYou have " << maxTrys << " tries to try and guess the country.";
            cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
            // Loop until the guesses are used up
            while (WrgGues < maxTrys)
            {
                    cout << "\n\n" << unknown;
                    cout << "\n\nGuess a letter: ";
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
            //cin.ignore();
            //cin.get();
            return 0;
    }

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

