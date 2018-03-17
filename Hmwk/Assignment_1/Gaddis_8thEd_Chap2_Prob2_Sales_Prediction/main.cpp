/* File: main.cpp
 * Author: Jesus Contreras
 * Created on March 4th 2018, 1:14 AM
 * Purpose: Sales Prediction Program
 */
#include <iostream>
using namespace std;

const float MLLN = 1.0e06f;
const int PRCNT = 100;

int main()
{
    float compTotalSale, eastPercent, eastTotalSale;
    
    compTotalSale = 8.6e06f;
    eastPercent = 0.0058;
    eastTotalSale = compTotalSale * eastPercent * PRCNT;
    
    cout << "Total sales of company = " << compTotalSale / MLLN << " Million" 
         << endl;
    cout << "East Coast division total sales percentage = " << "58%" << endl;
    cout << "Total sales revenue of East Coast division = "
         << eastTotalSale / MLLN << " Million" << endl;
    
    return 0;
}