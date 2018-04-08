/* File: main.cpp
 * Author: Jesus Contreras
 * Created on March 31st 2018, 8:45 PM
 * Purpose: Calories Burned Problem Gaddis Ch 5
 */
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    /*
     * Running on a particular treadmill you burn 3.6 calories per minute.
     * Write a program that uses a loop to display the number of calories burned
     * after 5, 10, 15, 20, 25, and 30 minutes.
     */
	float calmin;   // Calories per minute.
        
        calmin = 3.6;

	int min,        // User input for minutes
            burnt;      // Calories burnt
        
        
        cout << "\nThis table displays how many calories were burnt on the \n"
             << "treadmill per minute if it was 3.6 calories per minute.\n"
             << "\n   Minutes Ran      Calories Burnt\n"
             << "------------------------------------------\n";
        
        for(min = 5; min <= 30; min += 5)
        {
            burnt = min * calmin;
            cout << "" << setw(9) << min << "" << setw(19) << burnt << endl; 
	}
	
        cout << endl;
        
	return 0;
        
}