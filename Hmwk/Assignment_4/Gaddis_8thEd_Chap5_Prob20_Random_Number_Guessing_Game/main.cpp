/* File: main.cpp
 * Author: Jesus Contreras
 * Created on April 1st 2018, 9:15 PM
 * Purpose: Random Number Guessing Game Problem Gaddis Ch 5
 */
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    int random, // Input used for randomizing function.
        seed,   // The seed used for randomizing number.
        input;  // Gets user input.
    
    seed = time(0);
    srand(seed);
    random = 1 + rand() % 100; 

    // cout << random << endl;
    
    cout << "Please guess a number from 1 to 100.\n" << endl;
    cin  >> input;

    while (input > random)
    {
        cout << "Too high. Try again.\n" << endl;
        cin  >> input;
    }
    
    while (input < random)
    {
        cout << "Too low. Try again.\n" << endl;
        cin  >> input;
    }


    cout << "Congratulations. You guessed the correct number.\n\n" << endl;

    return 0;
}