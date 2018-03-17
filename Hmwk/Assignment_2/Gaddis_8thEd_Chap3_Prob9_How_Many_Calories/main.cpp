/* File: main.cpp
 * Author: Jesus Contreras
 * Created on March 11th 2018, 11:57 AM
 * Purpose: How Many Calories? Problem Gaddis
 */
#include <iostream>
using namespace std;

int main()
{
    /*
     * -------------------------------------------------------------------------
     * A bag of cookies holds 30 cookies. The calorie information on the bag
     * claims that there are 10 "servings" in the bag and that a serving equals
     * 300 calories. Write a program that asks the user to input how many
     * cookies that he or she actually ate and then reports how many total 
     * calories were consumed.
     * -------------------------------------------------------------------------
     */
    
    double bag, // How many cookies in a bag.
           servingCal, // Calories per serving.
           calPerBag, // Total calories per bag.
           servingsPerBag, // Servings per bag.
           cookieCal, // Calories per cookie.
           cookiesPerServ, // How many cookies per serving.
           result, // How many cookies user ate
           input1; // User input.

    
    bag = 30;
    servingsPerBag = 10;
    servingCal = 300;
    
    calPerBag = servingsPerBag * servingCal; // 3000 calories in a bag.
    cookieCal = calPerBag / bag; // 100 calories per cookie.
    cookiesPerServ = bag / servingsPerBag; // 3 cookies per serving.
    
    cout << "How many cookies did you eat?\n" << endl;
    cin >> input1;
    
    result = input1 * cookieCal;
    
    cout << "\nYou ate " << input1 << " cookies and that is equal to " << result
         << " calories consumed." << endl;
    
    
    return 0;
}