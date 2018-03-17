/* File: main.cpp
 * Author: Jesus Contreras
 * Created on March 11th 2018, 1:53 PM
 * Purpose: Math Tutor Problem Gaddis
 */
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float input1, input2, result;
    char ch;
    
    cout << "Hello, welcome to Math Tutor!\n" << endl;
    cout << "Please enter the first number you want to add.\n" << endl;
    cin >> input1;
    
    cout << "\nPlease enter the second number you want to add.\n" << endl;
    cin >> input2;
    
    cout << "\n" << setw(4) << input1 << "\n+" << setw(3) << input2 << "\n----" 
         << endl;
    
    result = input1 + input2;
    
    cout << "\nPlease work out the problem before continuing.";
    cout << "\nOnce you have finished and want to check the answer\n"
         <<   "press Enter to continue.\n";
    cin.ignore();
    cin.get();
    cout << "\n" << setw(4) << input1 << "\n+" << setw(3) << input2 << "\n----\n" 
         << setw(4) << result << endl;
    
    return 0;
}