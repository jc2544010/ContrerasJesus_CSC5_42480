/* File: main.cpp
 * Author: Jesus Contreras
 * Created on April 1st 2018, 10:45 PM
 * Purpose: Distance Traveled Problem Gaddis Ch 5
 */
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int speed, // Gets user input for speed.
        time,  // Gets user input for time.
        dist;  // Calculates distance

    // Ask the user to input the speed of vehicle.
    cout << "What is the speed of the vehicle in MPH? ";

    cin  >> speed;
    
    // Ask the user how many hours it traveled.
    cout << "How man hours has it traveled? ";

    cin  >> time;

    if (speed >= 0 && time >= 1)
    {
        cout << "Hour(s)   Distance Traveled\n"
             << "--------------------------------\n";

        for (int X = 1; X <= time; X++)
        {
            dist += speed;
            cout << right << setw(4) << X << "        ";
            cout << setw(6) << dist << endl;
        }
    }
    
    return 0;
}