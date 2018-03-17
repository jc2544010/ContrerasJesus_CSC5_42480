/* File: main.cpp
 * Author: Jesus Contreras
 * Created on March 4th 2018, 3:03 AM
 * Purpose: Ocean Levels Problem
 */
#include <iostream>
using namespace std;

int main()
{
    float seaLev, levPerYr, year5Lv, year7Lv, year10Lv, year5Sum, year7Sum, year10Sum;
    
    seaLev = 87.6;
    levPerYr = 1.5;
    year5Lv = levPerYr * 5;
    year7Lv = levPerYr * 7;
    year10Lv = levPerYr * 10;
    year5Sum = seaLev + year5Lv;
    year7Sum = seaLev + year7Lv;
    year10Sum = seaLev + year10Lv;
    
    cout << "The current sea level is " << seaLev << "mm" << endl;
    cout << "Each year the sea level rises by " << levPerYr << "mm" << endl;
    cout << "In 5 years the sea level will be " << year5Sum << "mm" << endl;
    cout << "In 7 years the sea level will be " << year7Sum << "mm" << endl;
    cout << "In 10 years the sea level will be " << year10Sum << "mm" << endl;
    
    return 0;
    
}