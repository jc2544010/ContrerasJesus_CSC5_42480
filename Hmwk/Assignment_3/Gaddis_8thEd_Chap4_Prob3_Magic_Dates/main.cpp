/* File: main.cpp
 * Author: Jesus Contreras
 * Created on March 20th 2018, 7:25 PM
 * Purpose: Magic Dates Problem Gaddis
 */
#include <iostream>
using namespace std;

int main()
{
    /*
     * The date June 10, 1960 is special because when we write it in the
     * following format, the month times the day equals the year.
     * 6/10/60
     * Write a program that asks the user to enter a month (in numeric form),
     * a day, and a two-digit year. The program should then determine whether
     * the month times the day is equal to the year. If so, it should display a
     * message saying the date is magic. Otherwise it should display a message
     * saying the date is not magic.
     */
    
    int day, month, year;
    
    cout << "Please enter the number of the month you want to use.\n" << endl;
    
    cin >> month;
    
    cout << "\nPlease enter the number of the day.\n" << endl;
    
    cin >> day;
    
    cout << "\nPlease enter the year in two digits. For example: 1985 as 85.\n"
         << endl;
    
    cin >> year;
    
    if(day * month == year)
        cout << "\nThe date is a magic date.\n" << endl;
    else
        cout << "\nThe date is not a magic date.\n" << endl;
    
    return 0;
}