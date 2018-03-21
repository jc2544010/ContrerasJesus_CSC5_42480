/* File: main.cpp
 * Author: Jesus Contreras
 * Created on March 20th 2018, 7:55 PM
 * Purpose: Body Mass Index Problem Gaddis
 */
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    /*
     * Write a program that calculates and displays a person's body mass index
     * (BMI). The BMI is often used to determine whether a person with sedentary
     * lifestyle is overweight or underweight for his or her height.  A person's
     * BMI is calculated with the following formula:
     * BMI = weight * 703/height^2
     * where weight is measured in pounds and height is measured in inches. The
     * program should display a message indicating whether the person has
     * optimal weight, is underweight, or is overweight. A sedentary person's
     * weight is considered to be optimal if his or her BMI is between 18.5 and
     * 25. If the BMI is less than 18.5, the person is considered to be
     * underweight. If the BMI value is greater than 25, the person is
     * considered to be overweight.
     */
    
    double height, weight, BMI;
    
    cout << "Please enter your weight in pounds.\n" << endl;
            
    cin >> weight;
            
    cout << "\nPlease enter your height in inches.\n" << endl;
    
    cin >> height;
    
    BMI = (weight * 703) / (height * height);
    
    if (BMI < 18.5)
        cout << "\nYou are in the underweight range.\n" << endl;
    
    if (BMI >= 18.5 && BMI <= 25)
        cout << "\nYou are in the optimal weight range.\n" << endl;
    
    if (BMI > 25)
        cout << "\nYou are in the overweight range.\n" << endl;
    
    
    return 0;
}