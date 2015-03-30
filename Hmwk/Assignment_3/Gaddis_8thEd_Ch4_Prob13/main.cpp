/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Purpose:  Book Club Points
 * Modified on Mar 23rd, 2015
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //General Menu Format
    //Display the selection
    cout<<"Type the number of books you purchased this month from 1-4 (if you purchase 4 or more books you get 60 points)"<<endl;
    //Read the choice
    int books;
    cin>>books;
    //Solve a problem that has been chosen.
    switch(books){
            case 0:{
                cout<<"The number of points for this purchase is 0 points"<<endl;
                break;
            }
            case 1:{
                cout<<"The number of points for this purchase is 5 points"<<endl;
                break;
            }
        case 2:{
            cout<<"The number of points for this purchase is 15 points"<<endl;
            break;
        }
        case 3:{
                cout<<"The number of points for this purchase is 30 points"<<endl;
                break;
            }
        case 4:{
                cout<<"The number of points for this purchase is 60 points"<<endl;
                break;
            }
           
            default:{
                    cout<<"Exit?"<<endl;
            }
    };
    return 0;
}

