/* File: main.cpp
 * Author: Jesus Contreras
 * Created on March 10 2018, 1:56 PM
 * Purpose: Word Game Problem Gaddis
 */
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name, city, college, prof, animal, petName, age;
    
    // Ask the user input their name.
    cout << "Please enter you name.\n" << endl;
    getline(cin, name);
    
    // Ask the user to input their age.
    cout << "\nPlease enter your age.\n" << endl;
    getline(cin, age);
    
    // Ask the user to input the name of their city.
    cout << "\nPlease enter the name of your city.\n" << endl;
    getline(cin, city);
    
    // Ask the user to input the name of their college.
    cout << "\nPlease enter the name of your college.\n" << endl;
    getline(cin, college);
    
    // Ask the user to input their profession.
    cout << "\nPlease enter your profession.\n" << endl;
    getline(cin, prof);
    
    // Ask the user to input what king of pet they have.
    cout << "\nPlease enter what pet you have.\n" << endl;
    getline(cin, animal);
    
    // Ask the user to input the name of their pet.
    cout << "\nPlease enter the name of your pet.\n" << endl;
    getline(cin, petName);
    
    // Outputs the users inputs into a word game.
    cout << "\nThere once was a person named " << name << " who lived "
         << "in " << city << ". At the age of\n" << age << ", " << name
         << " graduated and went to work\nas a " << prof << ". Then, " << name 
         << " adopted a " << animal << " named " << petName << "."
         << " They\nboth lived happily ever after!" << endl;
    
    return 0;
}