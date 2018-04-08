/* File: main.cpp
 * Author: Jesus Contreras
 * Created on March 31st 2018, 9:10 PM
 * Purpose: Membership Fees Increased Problem Gaddis Ch 5
 */
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    /*
     * A country club, which currently charges $2500 per year for membership,
     * has announced it will increase its membership fee by 4% each year for the
     * next six years. Write a program that uses a loop to display the projected
     * rates for the next six years.
     */
	
    float rate,   // Rate = 0.04 Percent.
          price,  // Price = 2500.
          yrRate; // Rate for the year.
    
    int year;
    
    rate = 0.04;
    price = 2500;
    
    cout << "\nThe rates for the Country Club\n"
         << "    for the next six years\n"
         << "-----------------------------\n"
         << "      Year       Rate\n"
         << "-----------------------------\n";
    
    for(year = 1; year <= 6; year++)
    {
        yrRate = price * (1 + year * rate);
        cout << "" << setw(8) << year << "" << setw(13) << yrRate << endl;
    }
    
    cout << endl;
    return 0;
    
    
}