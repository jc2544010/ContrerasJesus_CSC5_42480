/* File: main.cpp
 * Author: Jesus Contreras
 * Created on March 4th 2018, 2:42 AM
 * Purpose: Average of Values Problem
 */
#include <iostream>
using namespace std;

int main()
{
    double var1, var2, var3 ,var4 , var5, sum, average;
    
    var1 = 28;
    var2 = 32;
    var3 = 37;
    var4 = 24;
    var5 = 33;
    sum = var1 + var2 + var3 + var4 + var5;
    average = sum / 5;
    
    cout << "The first variable is: " << var1 << endl;
    cout << "The second variable is: " << var2 << endl;
    cout << "The third variable is: " << var3 << endl;
    cout << "The fourth variable is: " << var4 << endl;
    cout << "The fifth variable is: " << var5 << endl;
    cout << "\nThe sum of all the variables is: " << sum << endl;
    cout << "\nThe average of the sum is: " << average << endl;
    
    return 0;
    
}