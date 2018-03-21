/* File: main.cpp
 * Author: Jesus Contreras
 * Created on March 19th 2018, 8:25 PM
 * Purpose: Minimum/Maximum Problem Gaddis
 */
#include <iostream>
using namespace std;

int main()
{
    /*
     *Write a program that asks the user to enter two numbers.  The program 
     *should use the conditional operator to determine which number is the 
     *smaller and which is the larger.
     */
    
    double num1, num2;
    
    cout << "Please enter the first number.\n" << endl;
    cin >> num1;
    cout << "\nPlease enter the second number.\n" << endl;
    cin >> num2;
    
    if(num1 > num2)
        cout << "\nThe larger number is: " << num1 << endl;
    
    else
        cout << "\nThe larger number is: " << num2 << endl;
    
    return 0;
}