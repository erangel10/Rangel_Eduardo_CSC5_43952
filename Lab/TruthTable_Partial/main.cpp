/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on March 18, 2015, 9:39 AM
 */

#include <iostream>

using namespace std;


int main(int argc, char** argv) {
    //Declare variables 
    bool x,y;
    //Heading
    cout<<"X Y !Y !X X&&Y X||Y X^Y X^Y^Y X^Y^X "
            <<"!(X&&Y) !X||!Y !(X||Y) !X&&!Y"<<endl;
    x=true;y=true;
    cout<<(x?'T':'F')<<" ";
    cout<<(y?'T':'F')<<"  ";
    cout<<(!x?'T':'F')<<"  ";
    cout<<(!y?'T':'F')<< "   ";
    cout<<(x&&y?'T':'F')<<"    ";
    cout<<(x||y?'T':'F')<<"   ";
    cout<<(x^y?'T':'F')<<"     ";
    cout<<(x^y^y?'T':'F')<<"    ";
    cout<<(x^y^x?'T':'F')<<"       ";
    cout<<(!(x&&y)?'T':'F')<<"      ";
    cout<<(!x||!y?'T':'F')<<"       ";
    cout<<(!(x||!y)?'T':'F')<<"       ";
    cout<<(!x&&!y?'T':'F')<<"     ";
    cout<<endl;
    y=false;
    cout<<(x?'T':'F')<<" ";
    cout<<(y?'T':'F')<<"  ";
    cout<<(!x?'T':'F')<<"  ";
    cout<<(!y?'T':'F')<< "   ";
    cout<<(x&&y?'T':'F')<<"    ";
    cout<<(x||y?'T':'F')<<"   ";
    cout<<(x^y?'T':'F')<<"     ";
    cout<<(x^y^y?'T':'F')<<"    ";
    cout<<(x^y^x?'T':'F')<<"       ";
    cout<<(!(x&&y)?'T':'F')<<"      ";
    cout<<(!x||!y?'T':'F')<<"       ";
    cout<<(!(x||!y)?'T':'F')<<"       ";
    cout<<(!x&&!y?'T':'F')<<"     ";
    cout<<endl;
    x=false;y=true;
    cout<<(x?'T':'F')<<" ";
    cout<<(y?'T':'F')<<"  ";
    cout<<(!x?'T':'F')<<"  ";
    cout<<(!y?'T':'F')<< "   ";
    cout<<(x&&y?'T':'F')<<"    ";
    cout<<(x||y?'T':'F')<<"   ";
    cout<<(x^y?'T':'F')<<"     ";
    cout<<(x^y^y?'T':'F')<<"    ";
    cout<<(x^y^x?'T':'F')<<"       ";
    cout<<(!(x&&y)?'T':'F')<<"      ";
    cout<<(!x||!y?'T':'F')<<"       ";
    cout<<(!(x||y)?'T':'F')<<"       ";
    cout<<(!x&&!y?'T':'F')<<"     ";
    cout<<endl;
    x=false;y=false;
    cout<<(x?'T':'F')<<" ";
    cout<<(y?'T':'F')<<"  ";
    cout<<(!x?'T':'F')<<"  ";
    cout<<(!y?'T':'F')<< "   ";
    cout<<(x&&y?'T':'F')<<"    ";
    cout<<(x||y?'T':'F')<<"   ";
    cout<<(x^y?'T':'F')<<"     ";
    cout<<(x^y^y?'T':'F')<<"    ";
    cout<<(x^y^x?'T':'F')<<"       ";
    cout<<(!(x&&y)?'T':'F')<<"      ";
    cout<<(!x||!y?'T':'F')<<"       ";
    cout<<(!(x||y)?'T':'F')<<"       ";
    cout<<(!x&&!y?'T':'F')<<"     ";
           
           
    return 0;
}

