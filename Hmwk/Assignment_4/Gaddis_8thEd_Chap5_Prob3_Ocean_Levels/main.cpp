/* File: main.cpp
 * Author: Jesus Contreras
 * Created on March 31st 2018, 8:05 PM
 * Purpose: Ocean Levels Problem Gaddis Ch 5
 */
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    /*
     * Assuming the level of the Earth’s oceans continues rising at about
     * 3.1 millimeters per year, write a program that displays a table showing
     * the total number of millimeters the oceans will have risen each year for
     * the next 25 years.
     */
    
    int year;      // Years of ocean level.
    float rise;    // How much ocean level rose.

    cout << "This table will show how many millimeters the ocean's level will\n"
         << " rise for the next 25 years.\n\n"
         << "    Year        Ocean Level Rise\n"
         << "                (millimeters)\n"
         << "-----------------------------\n";
    
    for(year = 1; year <= 25; year++)
    {
        rise += 3.1;
        cout << right << fixed << showpoint << setprecision(1)
             << setw(7) << year << setw(16) << rise << endl;
    }
    
    
    return 0;
}