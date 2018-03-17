/* File: main.cpp
 * Author: Jesus Contreras
 * Created on March 4th 2018, 2:54 AM
 * Purpose: Annual Pay Problem
 */
#include <iostream>
using namespace std;

int main()
{
    float payAmount, payPeriods, annualPay;
    
    payAmount = 2200.0;
    payPeriods = 26;
    annualPay = payAmount * payPeriods;
    
    cout << "The employee gets paid $" << payAmount << " biweekly" << endl;
    cout << "In a year the employee gets " << payPeriods << " pay periods" << endl;
    cout << "The annual pay amount is $" << annualPay << endl;
    
    return 0;
    
}