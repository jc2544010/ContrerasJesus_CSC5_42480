/* File: main.cpp
 * Author: Jesus Contreras
 * Created on March 11th 2018, 12:52 PM
 * Purpose: Celsius to Fahrenheit Problem Gaddis
 */
#include <iostream>
using namespace std;

int main()
{
    /*
     *-------------------------------------------------------------------------
     * Write a program that will converts Celsius temperatures to Fahrenheit 
     * temperatures. The formula is F = (9/5)C + 32.
     * F is the Fahrenheit temperature, and C is the Celsius temperature.
     * ------------------------------------------------------------------------
     */
    
    double cels, fahr, y, num1, num2, num3;
    
    num1 = 9.0;
    num2 = 5.0;
    num3 = 32;
    y = num1 / num2;
    
    cout << "How many degrees is it in Celsius?\n" << endl;
    cin >> cels;
    
    fahr = y * cels + num3;
    
    cout << "\n" << cels << " degrees Celsius is equal to " << fahr 
         << " degrees Fahrenheit." << endl;
    
    return 0;
}