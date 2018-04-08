/* File: main.cpp
 * Author: Jesus Contreras
 * Created on April 1st 2018, 9:50 PM
 * Purpose: Population Problem Gaddis Ch 5
 */
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{         
    float pop,    // Size of organism population.
          days,   // Number of days to multiply.
          dayInc; // Average population increase per day as a percentage.

    // Ask user for the starting number of organisms, their average daily
    // population increase (as a percentage), and the number
    // of days they will multiply.
    
    cout << "This program will predict the size of a population of organisms.\n"
         << endl;
    cout << "What is the starting number of organisms?\n" << endl;

    cin  >> pop;

    cout << "\nWhat is the average daily population increase\n"
         << "(as a percentage of current population)?\n" << endl;
    
    cin  >> dayInc;

    cout << "\nEnter the number of days of growth:\n" << endl;

    cin  >> days;

    // Input Validation
    while (pop < 2 || dayInc < 0 || days < 1)
    {
        if (pop < 2)
        {
            // Do not accept a number less than two for the starting size of the
            // population.
            
            cout << "Invalid input. Starting size of the population "
                 << "must be greater than 2.\n" << endl;
            cout << "What is the starting number of organisms?\n" << endl;

            cin  >> pop;
        }
        
        else if (dayInc < 0)
        { 
            // Do not accept a negative number for average daily 
            // population increase.
            cout << "Invalid input. Average daily population "
                 << "increase must be greater than 0.\n" << endl;
            cout << "What is the average daily population increase? \n"
                 << "(as a percentage)?\n" << endl;

            cin  >> dayInc;
        }
        else if (days < 1)
        {
            // Do not accept a number less than one for the number of days
            // they will multiply.
            cout << "Invalid input. The number of days must be greater than 0."
                    " -5" << endl;
            cout << "Please enter the number of days of the growth:\n" << endl;
            
            cin  >> days;
        }
    }

    // Calculate and display daily increase
    cout << "\nTable displaying population increase over " << days << " days.\n\n"
         << "      Day              Size of population\n"
         <<"--------------------------------------------------\n" << endl;


    for (int X = 1; X <= days; X++)
    {
        cout << "      " << setw(2) << X << "                      "
             << pop << endl; 
        
        pop *= (1 + (dayInc / 100));
        
    }
	return 0;
}