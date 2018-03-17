/* File: main.cpp
 * Author: Jesus Contreras
 * Created on March 4th 2018, 4:01 AM
 * Purpose: Circuit Board Price Problem*/
#include <iostream>
using namespace std;

// Global Constant
const float PRCNT = 100;

int main()
{
    float totCost, profPrcn, sellPrice;
    
    totCost = 14.95;
    profPrcn = 0.35;
    sellPrice = totCost * (1 + profPrcn);
    
    cout << "The total price of a circuit board is $" << totCost << endl;
    cout << "The electronics company makes a " << profPrcn * PRCNT;
    cout << "% profit" << endl;
    cout << "The sell price is " << sellPrice << endl;
    
    return 0;
    
}