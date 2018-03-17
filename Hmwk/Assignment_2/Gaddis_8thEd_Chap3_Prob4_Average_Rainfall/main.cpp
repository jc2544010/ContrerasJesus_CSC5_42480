/* File: main.cpp
 * Author: Jesus Contreras
 * Created on March 10th 2018, 4:13 PM
 * Purpose: Average Rainfall Problem Gaddis
 */
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    /* 
     * -------------------------------------------------------------------------
     * Write a program that calculates the average rainfall for three months.
     * The program should ask the user to enter the name of each month, such
     * as June or July, and the amount of rain (in inches) that fell each month.
     * The program should display a message similar to the following:
     * The average rainfall for June, July, and August is 6.72 inches.
     * -------------------------------------------------------------------------
     */
    
    double numInput1, numInput2, numInput3, avg;
    string month1, month2, month3;
    
    // Get user input of months and the inches rainfall.
    cout << "What is the first month?\n" << endl;
    cin >> month1;
    cout << "\nHow many of inches of rainfall fell during this month?\n"
         << endl;
    cin >> numInput1;
    cout << "\nWhat is the second month?\n" << endl;
    cin >> month2;
    cout << "\nHow many of inches of rainfall fell during this month?\n"
         << endl;
    cin >> numInput2;
    cout << "\nWhat is the third month?\n" << endl;
    cin >> month3;
    cout << "\nHow many of inches of rainfall fell during this month?\n"
         << endl;
    cin >> numInput3;
    
    // Calculates the average rainfall input.
    avg = (numInput1 + numInput2 + numInput3) / 3;
    
    // Outputs the average of rainfall in each month.
    cout << "\nThe average rainfall for " << month1 << ", " << month2 
         << ", and " << month3 << " is " << setprecision(2) << fixed
         << showpoint << avg << " inches." << endl;
    
    return 0;
}