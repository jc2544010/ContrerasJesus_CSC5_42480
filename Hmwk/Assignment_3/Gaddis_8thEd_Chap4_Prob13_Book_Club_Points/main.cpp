/* File: main.cpp
 * Author: Jesus Contreras
 * Created on March 20th 2018, 5:50 PM
 * Purpose: Book Club Points Problem Gaddis
 */
#include <iostream>
using namespace std;

int main()
{
    /*
     * Serendipity Booksellers has a book club that awards points to its 
     * customers based on the number of books purchased each month.
     * The points are awarded as follows:
     * -If a customer purchases 0 books, 0 points are earned.
     * -If a customer purchases 1 book, 5 points are earned.
     * -If a customer purchases 2 books, 15 points are earned.
     * -If a customer purchases 3 books, 30 points are earned.
     * -If a customer purchases 4 or more books, 60 points are earned.
     * Write a program that asks the user to enter the number of books that he
     * or she has purchased this month and then display the number of points
     * awarded.
     */

double books, points;

cout << "Please enter the number of books you've purchased this month: \n"
     << endl;

cin >> books;

if(books == 0)
{
    points = 0;
    cout << "\nYou bought " << books << " books. You've earned: " << points 
         << " points \n" << endl;
 
}

if(books == 1)
{
    points = 5;
    cout << "\nYou bought " << books << " book. You've earned: " << points 
         << " points \n" << endl;
}

 if(books == 2)
 {
    points = 15;
    cout << "\nYou bought " << books << " books. You've earned: " << points 
         << " points \n" << endl;
 }

 if(books == 3)
 {
    points = 30;
    cout << "\nYou bought " << books << " books. You've earned: " << points 
         << " points \n" << endl;
 }

 if(books >= 4)
 {
    points = 60;
    cout << "\nYou bought " << books << " books. You've earned: " << points 
         << " points \n" << endl;
 }
 
 else if(books < 0)
 {
    cout << "\nError... Invalid input. Please try again.\n" << endl;;
 }

return 0;
}