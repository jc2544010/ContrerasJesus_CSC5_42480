/* File: main.cpp
 * Author: Jesus Contreras
 * Created on March 4th 2018, 1:44 AM
 * Purpose: Sales Tax Problem
 */
#include <iostream>
using namespace std;

// Global Constants
const float PRCNT = 100;

int main()
{
    // Declare Variables
    float purchTotal, 
          stateTx, 
          countyTx, 
          basePrc, 
          totalTx,
          totalDolTx,
          stateBase, 
          countyBase;
    
    // Initial Variables
    purchTotal = 95;
    stateTx = 0.04;
    countyTx = 0.02;
    
    // Process Inputs to Outputs
    totalTx = stateTx + countyTx;
    countyBase = purchTotal * countyTx / 1;
    stateBase = purchTotal * stateTx / 1;
    totalDolTx = purchTotal * totalTx / 1;
    basePrc = purchTotal - totalDolTx;
    
    cout << "Total purchase price on good = $" << purchTotal << endl;
    cout << "State tax percentage = " << stateTx * PRCNT << "%" << endl;
    cout << "County tax percentage = " << countyTx * PRCNT << "%" << endl;
    cout << "Total sales tax percentage = " << totalTx * PRCNT << "%" << endl;
    cout << "Total sales tax in dollars = $" << totalDolTx << endl;
    cout << "Total state tax in dollars = $" << stateBase << endl;
    cout << "Total county tax in dollars = $" << countyBase << endl;
    cout << "Base price of good = $" << basePrc << endl;
    
    return 0;
    
}