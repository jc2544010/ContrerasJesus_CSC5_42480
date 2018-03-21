/* File: main.cpp
 * Author: Jesus Contreras
 * Created on March 19th 2018, 10:37 PM
 * Purpose: Color Mixer Problem Gaddis
 */
#include <iostream>
#include <string>
using namespace std;

int main()
{
    /* The colors red, blue, and yellow are known as the primary colors because
     * they cannot be made by mixing other colors. When you mix two primary
     * colors, you get a secondary color, as shown here:
     *
     * When you mix red and blue, you get purple.
     * When you mix red and yellow, you get orange.
     * When you mix blue and yellow, you get green.
     *
     * Write a program that prompts the user to enter then names of two primary
     * colors to mix. If the user enters anything other than "red," "blue," or
     * "yellow," the program should display an error message. Otherwise the
     * program should display the name of the secondary color that results by
     * mixing two primary colors.
     */
    
    string color1, color2;
    
    cout << "The primary colors are red, blue, and yellow. Please enter the"
         << " names of two primary colors to mix into a secondary color.\n"
         << endl;
    cout << "\nPlease enter the first primary color.\n" << endl;
    
    getline(cin, color1);
    
    cout << "\nPlease enter the second primary color.\n" << endl;
    
    getline(cin, color2);
    
    if (color1 == "red" && color2 == "blue")
    {
        cout << "\nMixing those colors makes the color purple.\n" << endl;
    }
    
    else if (color1 == "red" && color2 == "yellow")
    {
        cout << "\nMixing those colors makes the color orange.\n" << endl;
    }
    
    else if (color1 == "blue" && color2 == "yellow")
    {
        cout << "\nMixing those colors makes the color green\n" << endl;
    }
    
    else if (color1 == "blue" && color2 == "red")
    {
        cout << "\nMixing those colors makes the color purple.\n" << endl;
    }
    
    else if (color1 == "yellow" && color2 == "red")
    {
        cout << "\nMixing those colors makes the color orange.\n" << endl;
    }
    
    else if (color1 == "yellow" && color2 == "blue")
    {
        cout << "\nMixing those colors makes the color green.\n" << endl;
    }
    
    else
    {
        cout << "\nError... Please try again.\n" << endl;
    }
    
    return 0;
}