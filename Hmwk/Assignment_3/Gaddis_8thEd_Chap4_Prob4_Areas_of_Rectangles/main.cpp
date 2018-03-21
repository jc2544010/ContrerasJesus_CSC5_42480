/* File: main.cpp
 * Author: Jesus Contreras
 * Created on March 19th 2018, 9:20 PM
 * Purpose: Areas of Rectangles Problem Gaddis
 */
#include <iostream>
using namespace std;

int main()
{
    /*
     * The are of a rectangle is the rectangle's length times its width.  
     * Write a program that asks for the length and width of two rectangles.
     * The program should tell the user which rectangle has the greater area, or
     * if the areas are the same.
     */
    
    float length1, length2, width1, width2, area1, area2;
    
    // Get the length and width of the first rectangle.
    cout << "Please enter the length for the first rectangle.\n" << endl;
    cin >> length1;
    cout << "\nPlease enter the width for the first rectangle.\n" << endl;
    cin >> width1;
    
    // Area for the first rectangle
    area1 = length1 * width1;
    
    // Displays area of the first rectangle.
    cout << "\nThe area of the first rectangle is: " << area1 << endl;
    
    // Get the length and width of the second rectangle.
    cout << "\nPlease enter the length for the second rectangle.\n" << endl;
    cin >> length2;
    cout << "\nPlease enter the width for the second rectangle.\n" << endl;
    cin >> width2;
    
    // Area for the second rectangle.
    area2 = length2 * width2;
    
    // Displays the area of the second rectangle.
    cout << "\nThe area of the second rectangle is: " << area2 << endl;
    
    // If statement if rectangle 1 area is greater than rectangle 2.
    if(area1 > area2)
        cout << "\nRectangle 1 area is greater than rectangle 2.\n" << endl;
    
    // Else if statement if rectangle 2 area is greater than rectangle 1.
    else if(area2 > area1)
        cout << "\nRectangle 2 area is greater than rectangle 1.\n" << endl;
    
    // Else if statement if the area of both rectangles are equal.
    else if(area1 == area2)
        cout << "\nThe area of the rectangles are equal.\n" << endl;
        
    
    return 0;
}
