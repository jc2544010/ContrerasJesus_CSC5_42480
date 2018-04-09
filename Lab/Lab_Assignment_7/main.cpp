/* File: main.cpp
 * Author: Jesus Contreras
 * Created on April 8th 2018, 3:15 PM
 * Purpose: Lab Assignment 7
 */
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
 
    // Consolidating all of assignment 4 problems into one program.
    
    MainMenu:
    int input1;  // User input to choose a program to initialize.
            
    cout << "Which program would you like to run from the list?\n" << endl;
    cout << "1) Sum of Numbers.\n"
         << "2) Population.\n"
         << "3) Celsius to Fahrenheit Table.\n"
         << "4) The Greatest and Least of These.\n"
         << "5) Student Line Up.\n"
         << "6) Random Number Guessing Game.\n"
         << "7) Ocean Levels.\n"
         << "8) Calories Burned.\n"
         << "9) Membership Fees Increase.\n"
         << "10) Distance Traveled.\n" << endl;
    cout << "\nPlease enter the corresponding number for the program you wish "
         << "to run.\n" << endl;
    
    cin >> input1;
    
            
    if (input1 == 1)
    {
        /* 
         * Write a program that asks the user for a positive integer value.
         * The program should use a loop to get the sum of all the integers from 1
         * up to the number entered. For example, if the user enters 50, the loop
         * will find the sum of 1,2,3,4....... 50.
         * Input validation: Do not accept an input that is less than 1.
         */
    
        int sum, // Sum of the integers.
            num; // User input of a number.
	
        sum = 0;
        
        cout << "\nPlease enter a number greater than 0.\n\n";
		
        cin >> num;
	
        for (int counter = 0; counter <= num; counter++)
	{	
		
            sum = sum + num;
		
            counter++;
        }
        
        if (num < 1)
        {
            cout << "\n" << num << " is less than 1.";
            cout << " Please try again.\n";
	}
	
        else
        {
            cout << "\nThe sum of the numbers 1 through " << num
                 << " " << "is: " << sum << endl;
        }
        
        cout << "\nPress enter to return to menu.\n" << endl;
        cin.ignore();
        cin.get();
        
        goto MainMenu;
        
    }
    
    if(input1 == 2)
    {
        float pop,    // Size of organism population.
              days,   // Number of days to multiply.
              dayInc; // Average population increase per day as a percentage.

        // Ask user for the starting number of organisms, their average daily
        // population increase (as a percentage), and the number
        // of days they will multiply.
    
        cout << "\nThis program will predict the size of a population of organisms.\n"
             << endl;
        cout << "What is the starting number of organisms?\n" << endl;

        cin  >> pop;

        cout << "\nWhat is the average daily population increase\n"
             << "(as a percentage of current population)?\n" << endl;
    
        cin  >> dayInc;

        cout << "\nEnter the number of days of growth:\n" << endl;

        cin  >> days;

        // Input Validation
        while (pop < 2 || dayInc < 0 || days < 1)
        {
            if (pop < 2)
            {
                // Do not accept a number less than two for the starting size of the
                // population.
            
                cout << "Invalid input. Starting size of the population "
                     << "must be greater than 2.\n" << endl;
                cout << "What is the starting number of organisms?\n" << endl;

                cin  >> pop;
            }
        
            else if (dayInc < 0)
            { 
                // Do not accept a negative number for average daily 
                // population increase.
                cout << "Invalid input. Average daily population "
                     << "increase must be greater than 0.\n" << endl;
                cout << "What is the average daily population increase? \n"
                     << "(as a percentage)?\n" << endl;

                cin  >> dayInc;
            }
            
            else if (days < 1)
            {
                // Do not accept a number less than one for the number of days
                // they will multiply.
                cout << "Invalid input. The number of days must be greater than 0."
                     << " -5" << endl;
                cout << "Please enter the number of days of the growth:\n" << endl;
            
                cin  >> days;
            }
        }

        // Calculate and display daily increase
        cout << "\nTable displaying population increase over " << days << " days.\n\n"
             << "      Day              Size of population\n"
             <<"--------------------------------------------------\n" << endl;


        for (int X = 1; X <= days; X++)
        {
            cout << "      " << setw(2) << X << "                      "
                 << pop << endl; 
        
            pop *= (1 + (dayInc / 100));
        
        }
        
        cout << "\nPress enter to return to menu." << endl;
        cin.ignore();
        cin.get();
        
        goto MainMenu;
    }
    
    if(input1 == 3)
    {
        float cels, // Used to input Celsius temperature.
              fahr; // Used to input Fahrenheit temperature.

        cout << "\nTable for Celsius temperatures\n"
             << "   converted to Fahrenheit:\n\n"
             << "Celsius     Fahrenheit\n"
             << "----------------------\n";
    
        cout << endl;
    
        for(cels = 0; cels <= 20; cels++)
        {
            fahr = (9/5 * cels) + 32;
            cout << right << setw(4) << cels;
            cout << setw(14) << fahr << endl;
        }
        
        cout << "\nPress enter to return to menu.\n" << endl;
        cin.ignore();
        cin.get();
        
        goto MainMenu;
    }
    
    if(input1 == 4)
    {
        int num,       // User inputs number.
            greatest,  // Inputs the larger number.
            least;     // Inputs the smaller number.

        cout << "\nPlease input a series of numbers and the program will\n"
             << "display the largest and smallest numbers entered.\n" << endl;
        cout << "When finished please enter -99 to initiate the program.\n" << endl;
        cout << "Please enter a number\n" << endl;
    
        cin >> num;
        
        greatest = least = num;

        while (num != -99)
        {			
            cout << "\nEnter a number\n" << endl;
        
            cin >> num;
		
            if (num > greatest)
                greatest = num;

            if (num < least)
                least = num;
        }
    
        cout << "\nThe largest number entered is " << greatest << "." << endl;
        cout << "\n\nThe smallest number entered is " << least << "." << endl;
        
        cout << "\nPress enter to return to menu.\n" << endl;
        cin.ignore();
        cin.get();
        
        goto MainMenu;
    }
    
    if(input1 == 5)
    {
        int student;    // How many students in class.
        string stuName, // Name of student.
               front,   // Student that goes in front of line.
               last;    // Student that goes in end of line.

        // Ask user to enter the number of students in the class.
        cout << "\nThis program shows which student would be at the front of\n"
             << "the line and which one would be at the end of the line.\n\n"
             << "Please input the amount of students that are in the class?\n" 
             << endl;

        cin >> student;

        while (student < 1 || student > 25)
        {
            cout << "\nInvalid input. The number of students in the class must\n"
                 << "be greater than 1 and less than 25.\n\n"
                 << "How many students are in the class?\n" << endl;

            cin >> student;
        }
    
        cout << "\nEnter the first name of a student:\n" << endl;

        cin >> stuName;

        front = last = stuName;

        for (int Count = 1; Count < student; Count++)
        {
            cout << "\nEnter the first name of the next student:\n" << endl;
        
            cin >> stuName;

            if (stuName > last)
                last = stuName;
        
            if (stuName < front)
                front = stuName;

        }
    
        cout << endl << front << " is at the front of the line and "
             << last << " is at the end of the line.\n" << endl;  
        
        cout << "\nPress enter to return to menu.\n" << endl;
        cin.ignore();
        cin.get();
        
        goto MainMenu;
    }
    
    if(input1 == 6)
    {
        int random, // Input used for randomizing function.
            seed,   // The seed used for randomizing number.
            input;  // Gets user input.
    
        seed = time(0);
        srand(seed);
        random = 1 + rand() % 100; 

        // cout << random << endl;
    
        cout << "\nPlease guess a number from 1 to 100.\n" << endl;
        
        cin  >> input;

        while (input > random)
        {
            cout << "Your Guess is too high. Please try again.\n" << endl;
            
            cin >> input;
        }
    
        while (input < random)
        {
            cout << "Your guess is too low. Please try again.\n" << endl;
            
            cin >> input;
        }


        cout << "Congratulations. You guessed the correct number.\n\n" << endl;
        
        cout << "\nPress enter to return to menu.\n" << endl;
        cin.ignore();
        cin.get();
        
        goto MainMenu;
    }
    
    if(input1 == 7)
    {
        /*
         * Assuming the level of the Earth’s oceans continues rising at about
         * 3.1 millimeters per year, write a program that displays a table showing
         * the total number of millimeters the oceans will have risen each year for
         * the next 25 years.
         */
    
        int year;      // Years of ocean level.
        float rise;    // How much ocean level rose.

        cout << "\nThis table will show how many millimeters the ocean's level will\n"
             << " rise for the next 25 years.\n\n"
             << "    Year        Ocean Level Rise\n"
             << "                (millimeters)\n"
             << "-----------------------------\n";
    
        for(year = 1; year <= 25; year++)
        {
            rise += 3.1;
            cout << right << fixed << showpoint << setprecision(1)
                 << setw(7) << year << setw(16) << rise << endl;
        }
        
        cout << "\nPress enter to return to menu.\n" << endl;
        cin.ignore();
        cin.get();
        
        goto MainMenu;
    }
    
    if(input1 == 8)
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
        
        cout << "\nPress enter to return to menu.\n" << endl;
        cin.ignore();
        cin.get();
        
        goto MainMenu;
    }
    
    if(input1 == 9)
    {
        /*
         * A country club, which currently charges $2500 per year for membership,
         * has announced it will increase its membership fee by 4% each year for the
         * next six years. Write a program that uses a loop to display the projected
         * rates for the next six years.
         */
	
        float rate,   // Rate = 0.04 Percent.
              price,  // Price = 2500.
              yrRate; // Rate for the year.
    
        int year;
    
        rate = 0.04;
        price = 2500;
    
        cout << "\nThe rates for the Country Club\n"
             << "    for the next six years\n"
             << "-----------------------------\n"
             << "      Year       Rate\n"
             << "-----------------------------\n";
        
        for(year = 1; year <= 6; year++)
        {
            yrRate = price * (1 + year * rate);
            cout << "" << setw(8) << year << "" << setw(13) << yrRate << endl;
        }
    
        cout << "\nPress enter to return to menu.\n" << endl;
        cin.ignore();
        cin.get();
        
        goto MainMenu;
    }
    
    if(input1 == 10)
    {
        int speed, // Gets user input for speed.
            time,  // Gets user input for time.
            dist;  // Calculates distance

        // Ask the user to input the speed of vehicle.
        cout << "\nWhat is the speed of the vehicle in MPH?\n";

        cin >> speed;
    
        // Ask the user how many hours it traveled.
        cout << "\nHow many hours has it traveled?\n";

        cin >> time;

        if (speed >= 0 && time >= 1)
        {
            cout << "\nHour(s)   Distance Traveled\n"
                 << "--------------------------------\n";

            for (int X = 1; X <= time; X++)
            {
                dist += speed;
                cout << right << setw(4) << X << "";
                cout << setw(16) << dist << endl;
            }
        }
        
        cout << "\nPress enter to return to menu.\n" << endl;
        cin.ignore();
        cin.get();
        
        goto MainMenu;
    }
    
    return 0;
}