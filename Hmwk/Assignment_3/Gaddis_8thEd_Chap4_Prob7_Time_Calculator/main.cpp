/* File: main.cpp
 * Author: Jesus Contreras
 * Created on March 19th 2018, 9:50 PM
 * Purpose: Time Calculator Problem Gaddis
 */
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    /*
     * Write a program that asks the user to enter a number of seconds.
     * -- There are 60 seconds in a minute.  If the number of seconds entered by
     * the user is greater than or equal to 60, the program should display the
     * number of minutes in that many seconds.
     * -- There are 3,600 seconds in an hour.  If the number of seconds entered
     * by the user is greater than or equal to 3,600, the program should display
     * the number of hours in that many seconds.
     * -- There are 86,400 seconds in a day. If the number of seconds entered by
     * the user is greater or equal to 86,400, the program should display the
     * number of days in that many seconds.
     */
    
    float seconds, minute, hour, day;
    
    minute = 60;
    hour = 3600;
    day = 86400;
    
    cout << "Please enter the number of seconds.\n" << endl;
    cin >> seconds;
    
    cout << setprecision(2) << fixed << showpoint << endl;
    
    if (seconds < 60)
    {
        cout << "You entered " << seconds << " seconds.\n" << endl;
    }
    if (seconds >= 60)
    {
        cout << "\nYou entered " << seconds / minute << " minutes.\n" << endl;
    }
    
    if (seconds >= 3600)
    {
            cout << "\nYou entered " << seconds / hour << " hours.\n" << endl;
    }
    
    if (seconds >= 86400)
    {
        cout << "\nYou entered " << seconds / day << " days.\n" << endl;
    }
    
    return 0;
    
}