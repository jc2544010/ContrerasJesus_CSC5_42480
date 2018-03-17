/* File: main.cpp
 * Author: Jesus Contreras
 * Created on March 11th 2018, 1:32 PM
 * Purpose: Curreny Problem Gaddis
 */
#include <iostream>
#include <iomanip>
using namespace std;

const float YEN_PER_DOLLAR = 106.62, // Currency Exchange Rate of Japanese Yen.
            EUROS_PER_DOLLAR = 0.81; // Currency Exchange Rate of Euro.

int main()
{
    float dollar, conversion1, conversion2;
    
    cout << "How many US dollars are you converting to Japanese Yen?\n" << endl;
    cin >> dollar;
    
    conversion1 = dollar * YEN_PER_DOLLAR;
    
    cout << "\nThe conversion rate is: " << setprecision(2) << fixed
         << showpoint << conversion1 << " yen." << endl;
    
    cout << "\nHow many US dollars are you converting to Euros?\n" << endl;
    cin >> dollar;
    
    conversion2 = dollar * EUROS_PER_DOLLAR;
    
    cout << "\nThe conversion rate is: " << setprecision(2) << fixed
         << showpoint << conversion2 << " euros." << endl;
    
    return 0;
}