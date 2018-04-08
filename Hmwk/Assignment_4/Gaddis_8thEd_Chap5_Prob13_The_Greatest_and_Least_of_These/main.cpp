/* File: main.cpp
 * Author: Jesus Contreras
 * Created on April 2nd 2018, 12:25 AM
 * Purpose: The Greatest and Least of These Problem Gaddis Ch 5
 */
#include <iostream>
using namespace std;

int main()
{
    int num,       // User inputs number.
        greatest,  // Inputs the larger number.
        least;     // Inputs the smaller number.

    cout << "Please input a series of numbers and the program will\n"
         << "display the largest and smallest numbers entered.\n" << endl;
    cout << "When finished please enter -99 to initiate the program.\n" << endl;
    cout << "Please enter a number\n" << endl;
    
    cin	 >> num;

    greatest = least = num;

    while (num != -99)
    {			
        cout << "\nEnter a number\n" << endl;
        
        cin  >> num;
		
        if (num > greatest)
            greatest = num;

        if (num < least)
            least = num;

    }
    
    cout << "\nThe largest number entered is " << greatest << "." << endl;
    cout << "\n\nThe smallest number entered is " << least << "." << endl;
    
    return 0;
}