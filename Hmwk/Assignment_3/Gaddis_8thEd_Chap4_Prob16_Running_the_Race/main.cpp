/* File: main.cpp
 * Author: Jesus Contreras
 * Created on March 20th 2018, 6:25 PM
 * Purpose: Running the Race Problem Gaddis
 */
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    /*
     * Write a program that asks for the names of three runners and the time it
     * took each of them to finish the race. The program should display who came
     * in first, second, and third place.
     * 
     * Input validation: only accept positive numbers for the times.
     */
    
    string runnerName1, runnerName2, runnerName3;
    double runnerTime1, runnerTime2, runnerTime3;
    
    cout << "Please enter the name of the first runner.\n" << endl;
    
    getline(cin, runnerName1);
    
    cout << "\nPlease enter the time for the first runner.\n" << endl;
    
    cin >> runnerTime1;
    
    if(runnerTime1 <= 0)
        cout << "\nInvalid input... Please enter positive numbers for "
             << "the times.\n" << endl;
    
    cin.ignore();
    cout << "\nPlease enter the name of second runner.\n" << endl;
    
    getline(cin, runnerName2);
    
    cout << "\nPlease enter the time for the second runner.\n" << endl;
    
    cin >> runnerTime2;
    
    if(runnerTime2 <= 0)
        cout << "\nInvalid input... Please enter positive numbers for "
             << "the times.\n" << endl;
    
    cin.ignore();
    cout << "\nPlease enter the name of the third runner.\n" << endl;
    
    getline(cin, runnerName3);
    
    cout << "\nPlease enter the time for the third runner.\n" << endl;
    cin >> runnerTime3;
    
    if(runnerTime3 <= 0)
        cout << "Invalid input... Please enter positive numbers for "
             << "the times.\n" << endl;
    
    cout << "\nThe results are: \n" << endl;
    
    if(runnerTime1 < runnerTime2 && runnerTime1 < runnerTime3)
    {
        if(runnerTime2 < runnerTime3)
        {
            cout << "\nThe standings are: \n" << endl;
            cout << "\nIn first place: " << runnerName1 << endl;
            cout << "\nIn second place: " << runnerName2 << endl;
            cout << "\nIn third place: " << runnerName3 << endl;
        }
        if(runnerTime3 < runnerTime2)
        {
            cout << "\nThe standings are: \n" << endl;
            cout << "\nIn first place: " << runnerName1 << endl;
            cout << "\nIn second place: " << runnerName3 << endl;
            cout << "\nIn third place: " << runnerName2 << endl;  
        }
    }
    
    if(runnerTime2 < runnerTime1 && runnerTime2 < runnerTime3)
    {
        if(runnerTime1 < runnerTime3)
        {
            cout << "\nThe standings are: \n" << endl;
            cout << "\nIn first place: " << runnerName2 << endl;
            cout << "\nIn second place: " << runnerName1 << endl;
            cout << "\nIn third place: " << runnerName3 << endl;
        }
        if(runnerTime3 < runnerTime1)
        {
            cout << "\nThe standings are: \n" << endl;
            cout << "\nIn first place: " << runnerName2 << endl;
            cout << "\nIn second place: " << runnerName3 << endl;
            cout << "\nIn third place: " << runnerName1 << endl;
        }
    }
    
    if(runnerTime3 < runnerTime1 && runnerTime3 < runnerTime2)
    {
        if(runnerTime1 < runnerTime2)
        {
            cout << "\nThe standings are: \n" << endl;
            cout << "\nIn first place: " << runnerName3 << endl;
            cout << "\nIn second place: " << runnerName1 << endl;
            cout << "\nIn third place: " << runnerName2 << endl;
        }
        if(runnerTime2 < runnerTime1)
        {
            cout << "\nThe standings are: \n" << endl;
            cout << "\nIn first place: " << runnerName3 << endl;
            cout << "\nIn second place: " << runnerName2 << endl;
            cout << "\nIn third place: " << runnerName1 << endl;
        }
    }
    
    return 0;
}