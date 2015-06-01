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

//Functions Prototypes
void rules();//Output the rules of the game 
void prntBrd();//Print the board of the game
void board2(int **,int,int);
//Execution Begins here
int main(int argc, char** argv) {
    //Declare variables
    int rows=10,cols=10;
    int **array=board2(rows,cols);
    //call the rules function into main
    rules();
    //call the board function into main to output the game board
    prntBrd();
    //board 2
    //board2();

    return 0;
}

void rules()
{
    //Output the rules for the game
    cout<<"Game Rules"<<endl;
    cout<<"You have to give the coordinates from 1-10 of where you think one of the boats of your opponent is (i.e. 1 and 5)"<<endl;
    
}

void prntBrd()
{
    const int ocupied=1; 
    //Declare array in this case is a 2D array
    int board[10][10];
    //Now use the for loop to create the board
    for (int i=0;i<11;i++){
        //cout<<i<<endl;
        for (int j=0;j<11;j++){
            cout<<j<<endl;
         // cout<<board[i][j] = ocupied<<endl;
            
        }
       
    }
   
    
}

void board2(int **a, int r, int c){
    
     cout<<"THIS IS YOUR MULTIPLICATION TABLE!!!"<<endl;
cout<<endl<<setw(8)<<0;
for(int i=1;i <c;i++){
cout<<setw(4)<<i;
}
cout<<endl;
//Print the array
for(int i=0;i<r;i++){
cout<<setw(4)<<i;
for(int j=0;j<c;j++){
cout<<setw(4)<<a[i][j];
}
cout<<endl;
   
}
}