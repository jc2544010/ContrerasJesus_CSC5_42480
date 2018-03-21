/* File: main.cpp
 * Author: Jesus Contreras
 * Created on March 19th 2018, 8:45 PM
 * Purpose: Roman Numeral Converter Problem Gaddis
 */
#include <iostream>
using namespace std;

int main()
{
    /*
     *Write a program that asks the user to enter a number within the range
     *of 1 through 10. Use a switch statement to display the Roman numeral
     *version of that number.
     * 
     *Input Validation: Do not accept a number less than 1 or greater than 10.
     */
    
    int num;
    
    cout << "Please enter a number from (1-10) to convert into Roman Numeral.\n"
         << endl;
    cin >> num;
    
    switch(num)
    {
        case 1: cout << "\nThe Roman Numeral of " << num << " is " << "I.";
        break;
        
        case 2: cout << "\nThe Roman Numeral of " << num << " is " << "II.";
        break;
        
        case 3: cout << "\nThe Roman Numeral of " << num << " is " << "III.";
        break;
        
        case 4: cout << "\nThe Roman Numeral of " << num << " is " << "IV.";
        break;
        
        case 5: cout << "\nThe Roman Numeral of " << num << " is " << "V.";
        break;
        
        case 6: cout << "\nThe Roman Numeral of " << num << " is " << "VI.";
        break;
        
        case 7: cout << "\nThe Roman Numeral of " << num << " is " << "VII.";
        break;
        
        case 8: cout << "\nThe Roman Numeral of " << num << " is " << "VIII.";
        break;
        
        case 9: cout << "\nThe Roman Numeral of " << num << " is " << "IX.";
        break;
        
        case 10: cout << "\nThe Roman Numeral of " << num << " is " << "X.";
        break;
        
        default: cout << "\nInvalid input. Please enter a number from (1-10).";
        break;
    }
                    
    
    return 0;
}