/* File: main.cpp
 * Author: Jesus Contreras
 * Created on April 1st 2018, 11:35 PM
 * Purpose: Student Line Up Problem Gaddis Ch 5
 */
#include <iostream>
using namespace std;

int main()
{
    int	   student; // How many students in class.
    string stuName, // Name of student.
           front,   // Student that goes in front of line.
           last;    // Student that goes in end of line.

    // Ask user to enter the number of students in the class.
    cout << "This program shows which student would be at the front of\n"
         << "the line and which one would be at the end of the line.\n\n"
         << "Please input the amount of students that are in the class?\n" 
         << endl;

    cin  >> student;

    while (student < 1 || student > 25)
    {
        cout << "\nInvalid input. The number of students in the class must\n"
             << "be greater than 1 and less than 25.\n\n"
             << "How many students are in the class?\n" << endl;

        cin  >> student;
    }
    
    cout << "\nEnter the first name of a student:\n" << endl;

    cin  >> stuName;

    front = last = stuName;

    for (int Count = 1; Count < student; Count++)
    {
        cout << "\nEnter the first name of the next student:\n" << endl;
        
        cin  >> stuName;

        if (stuName > last)
            last = stuName;
        
        if (stuName < front)
            front = stuName;

    }
    
    cout << endl << front << " is at the front of the line and "
         << last << " is at the end of the line.\n" << endl;

	return 0;
}