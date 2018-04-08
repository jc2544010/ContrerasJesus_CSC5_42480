/* File: main.cpp
 * Author: Jesus Contreras
 * Created on March 31st 2018, 7:30 PM
 * Purpose: Sum of Numbers Problem Gaddis Ch 5*/
#include <iostream>
using namespace std;

int main ()
{
    
    /* 
     * Write a program that asks the user for a positive integer value.
     * The program should use a loop to get the sum of all the integers from 1
     * up to the number entered. For example, if the user enters 50, the loop
     * will find the sum of 1,2,3,4....... 50.
     * Input validation: Do not accept and input that is less than 1.
     */
    
	int sum, // Sum of the integers.
            num; // User input of a number.
	
	cout << "Please enter a number greater than 0.\n\n";
		
        cin >> num;
	
		
	for (int counter = 0; counter <= num; counter++)
	
	{	
		
		sum = 0 + num;
		
		counter++;
	}
	

	if (num < 1)
		
	{
			cout << "\n" << num << " is an invalid input.";
			cout << " Please try again.\n";
		
	}
	
	else

	
	cout << "\nThe sum of the numbers 1 through " << num
			 << " " << "is: " << sum << endl;
		
	
	return 0;
        
	}