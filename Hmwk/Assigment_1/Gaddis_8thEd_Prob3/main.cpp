/* 
 * File:   main.cpp
 * Author: Eduardo Rangel
 *Purpose: Sales Tax
 * Created on March 8, 2015, 1:26 PM
 */
//System Libraries
#include <iostream>

using namespace std;


int main(int argc, char** argv) {
    //Declare Variables
    float CNVPCT,taxStat,taxCoun,totlPur;
    
    //Give a value to each of the variables
    CNVPCT = 100;
    taxStat = 4;
    taxCoun = 2;
    totlPur = 95;
    //Output the total of taxes adding taxCoun and taxStat
    cout<<"The total amount of taxes is "<<(taxStat + taxCoun) * CNVPCT / totlPur<<endl;
   

    return 0;
}

