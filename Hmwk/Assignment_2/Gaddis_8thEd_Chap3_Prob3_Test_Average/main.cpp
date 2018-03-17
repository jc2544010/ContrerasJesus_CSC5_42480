/* File: main.cpp
 * Author: Jesus Contreras
 * Created on March 10th 2018, 3:58 PM
 * Purpose: Test Average Problem Gaddis
 */
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    /* 
     * ---------------------------------------------------------------------
     * Write a program that asks for five test scores. The program should
     * calculate the average test score and display it. The number displayed
     * should be formatted in fixed-point notation, with one decimal point 
     * of precision.
     * ---------------------------------------------------------------------
     */
     
    
    double test1, test2, test3, test4, test5, average;
    
    // Get user input of each test score.
    cout << "What is the first test score?\n" << endl;
    cin >> test1;
    
    cout << "\nWhat is the second test score?\n" << endl;
    cin >> test2;
    
    cout << "\nWhat is the third test score?\n" << endl;
    cin >> test3;
    
    cout << "\nWhat is the fourth test score?\n" << endl;
    cin >> test4;
    
    cout << "\nWhat is the fifth test score?\n" << endl;
    cin >> test5;
    
    // Calculates the average of the test scores.
    average = (test1 + test2 + test3 + test4 + test5) / 5;
    
    // Outputs the average of the test scores.
    cout << "\nThe average of the test scores is: " << setprecision(1) << fixed
         << showpoint << average << endl;
    
    return 0;
}