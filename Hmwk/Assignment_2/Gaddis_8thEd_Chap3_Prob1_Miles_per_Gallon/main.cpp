/* File: main.cpp
 * Author: Jesus Contreras
 * Created on March 10th 2018, 2:51 PM
 * Purpose: Miles per Gallon Problem Gaddis
 */
#include <iostream>
using namespace std;

int main()
{
    /* Write a program that calculates a car's gas mileage. The program should
     * ask the user to enter the number of gallons of gas the car can hold and
     * the number of miles it can be driven on a full tank. It should then
     * display the number of miles that may be driven per gallon of gas.
     */
    
    double galCar, milesFull, mpg;
    char ch;
    
    // States what the program can be used for.
    cout << "This program can be used to calculate the miles per gallon"
         << " on a car. Press enter to continue.\n" << endl;
    cin.get(ch);
    
    // Get the users input of the gallons of gas that the car can hold.
    cout << "Please enter the number of gallons of gas the car can hold.\n" 
         << endl;
    cin >> galCar;
    
    // Get users input of max miles the car can drive on full tank.
    cout << "\nPlease enter the number of miles the car can be driven on "
         << "a full tank of gas.\n" << endl;
    cin >> milesFull;
    
    // Calculates mpg.
    mpg = static_cast<double>(milesFull) / galCar;
    
    // Outputs mpg.
    cout << "\nThe miles per gallon is " << mpg << "." << endl;
    
    return 0;
}
    
    
     