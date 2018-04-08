/* File: main.cpp
 * Author: Jesus Contreras
 * Created on March 31st 2018, 9:50 PM
 * Purpose: Celsius to Fahrenheit Table Problem Gaddis Ch 5
 */
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float cels, // Used to input Celsius temperature.
          fahr; // Used to input Fahrenheit temperature.

    cout << "Table for Celsius temperatures\n"
         << "converted to Fahrenheit:\n\n"
         << "Celsius     Fahrenheit\n"
         << "----------------------\n";
    
    cout << endl;
    
    for(cels = 0; cels <= 20; cels++)
    {
        fahr = (9/5 * cels) + 32;
        cout << right << setw(4) << cels;
        cout << setw(14) << fahr << endl;
    }
    
    return 0;
    
    
}