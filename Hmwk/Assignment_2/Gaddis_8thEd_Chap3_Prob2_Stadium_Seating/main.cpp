/* File: main.cpp
 * Author: Jesus Contreras
 * Created on March 10th 2018, 3:19 PM
 * Purpose: Stadium Seating Problem Gaddis
 */
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    /* There are three seating categories at a stadium. For a softball game,
     * Class A seats cost $15, Class B seats cost $12, and Class C seats cost
     * $9. Write a program that asks how many tickets for each class of seats
     * were sold, then displays the amount of income generated from ticket
     * sales. Format your dollar amount in fixed-point notation, with two
     * decimal places of precision, and be sure the decimal point is always
     * displayed.
     */
    
    double classA, 
           classB, 
           classC,
           input1,
           input2,
           input3,
           result1,
           result2,
           result3,
           result4;
    
    classA = 15;
    classB = 12;
    classC = 9;
    
    // Get user input of how many Class A tickets were sold.
    // And calculates and outputs result of Class A and user input.
    cout << "Class A tickets are $15 each. How many were sold?\n" << endl;
    cin >> input1;
    
    result1 = classA * input1;
    
    cout << "\nThe total for Class A tickets sold is: $" << setprecision(2)
         << fixed << result1 << endl;
    
    // Get user input of how many Class B tickets were sold.
    // And calculates and outputs result of Class B and user input.
    cout << "\nClass B tickets are $12 each. How many were sold?\n" << endl;
    cin >> input2;
    
    result2 = classB * input2;
    
    cout << "\nThe total for Class B tickets sold is: $" << setprecision(2)
         << fixed << result2 << endl;
    
    // Get user input of how many Class C tickets were sold.
    // And calculates and outputs result of Class C and user input.
    cout << "\nClass C tickets are $9 each. How many were sold?\n" << endl;
    cin >> input3;
    
    result3 = classC * input3;
    
    cout << "\nThe total for Class C tickets sold is: $" << setprecision(2)
         << fixed << result3 << endl;
    
    // Calculates the total amount of sales from Class A, B, and C tickets.
    result4 = result1 + result2 + result3;
    cout << "\nThe total amount of sales of all of the tickets is: $" <<
            setprecision(2) << fixed << result4 << endl;
    
    return 0;
    
}