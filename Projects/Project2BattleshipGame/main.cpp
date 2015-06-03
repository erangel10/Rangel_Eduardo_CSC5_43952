/* 
 * File:   main.cpp
 * Author: Eduardo Rangel
 * Purpose: Create the Battleship Game using arrays, 
 * 2D arrays, vectors, sorting.
 * Created on June 1, 2015, 9:50 AM
 */
//System Libraries
#include <iostream>
#include <ctime>
#include <iomanip>
using namespace std;
//User Libraries

//Global Constants
const int cols = 10;
//Functions Prototypes
void rules();//Output the rules of the game 
void prntBrd(char [][cols]);//Print the board of the game
void board2();
//Execution Begins here
int main(int argc, char** argv) {
    //Declare variables
    int rows = 10;
    int cols = 10;
    //call the rules function into main
    rules();
    //call the board function into main to output the game board
    char board[10][10]; char pBoard[10][10];
    prntBrd(board);
    
    board2();

    //Exit stage right
    return 0;
}

void rules()
{
    //Output the rules for the game
    cout<<"Game Rules"<<endl;
    cout<<"You have to give the coordinates from 1-10 of where you think one of the boats of your opponent is (i.e. 1 and 5)"<<endl;
    
}

void prntBrd(char board[][cols])
{
    
  char cols = 10;
  for (int i=0;i<10;i++){
      for (int j=0;j<cols;j++){
          cout<<board[i][j];
      }
  }  
}

void board2()
{    
    
    int a [10][10];
    int r=10;
    int c=10;
   for (int i=1;i<c;i++){
       cout<<setw(4)<<i;
   } 
    
    for (int i=0;i<r;i++){
        cout<<setw(4)<<i;
        for (int j=0;j<c;j++){
            cout<<setw(4)<<a[i][j];
            
        }
        cout<<endl;
    }
    
}