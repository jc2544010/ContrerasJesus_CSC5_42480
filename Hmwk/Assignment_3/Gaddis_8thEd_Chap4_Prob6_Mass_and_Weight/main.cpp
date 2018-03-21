/* File: main.cpp
 * Author: Jesus Contreras
 * Created on March 20th 2018, 8:20 PM
 * Purpose: Mass and Weight Problem Gaddis
 */
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    /*
     * Scientists measure an object's mass in kilograms and its weight in
     * newtons. If you know the amount of mass that an object has, you can
     * calculate its weight, in newtons, with the following formula:
     * 
     * Weight = mass * 9.8
     * 
     * Write a program that asks the user to enter an object's mass, and then
     * calculates and displays its weight. If the object weighs more than 1,000
     * newtons, display a message indicating that it is too heavy. If the object
     * weighs less than 10 newtons, display a message indicating that the object
     * is too light.
     */
    
    double mass, weight;
    
    cout << "Please enter the mass of the object in kg.\n" << endl;
    
    cin >> mass;
    
    weight = mass * 9.8;
    
    cout << "\nThe weight of the object is: " << weight << " newtons\n" << endl;
    
    if (weight > 1000)
    {
        cout << "\nThe object is too heavy.\n" << endl;
    }
    
    else if (weight < 10)
    {
        cout << "\nThe object is too light.\n" << endl;
    }
    
    return 0;
}