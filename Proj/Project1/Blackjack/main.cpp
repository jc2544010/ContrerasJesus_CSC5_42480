/* 
 * File: main.cpp
 * Author: Jesus Contreras
 * Created on April 20th 2018, 6:10 PM
 * Purpose: Blackjack Game
 */

// System Libraries
#include <iostream>  // I/O Library -> cout, endl
#include <iomanip>   // Format Library
#include <cstdlib>   // Rand/Srand
#include <ctime>     // Time
using namespace std; // namespace I/O stream library created

// User Libraries

// Global Constants
// Math, Physics, Science, Conversions, 2-D Array Columns

// Function Prototypes

// Execution Begins Here!
int main(int argc, char** argv)
{
    // Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    // Declare Variables
    int dealer1,   // Dealer's first card
        dealer2,   // Dealer's second card
        player1,   // Player's first card
        player2,   // Player's second card
        dealTot,   // Dealer's total card count
        playTot,   // Player's total card count
        ace,       // Ace card is equal to 11
        jack,      // Jack card is equal to 10
        queen,     // Queen card is equal to 10
        king,      // King card is equal to 10
        bet;       // Player inputs wager amount

    
    // Initialize Variables
            dealer1 = rand() % 13 + 1,
            dealer2 = rand() % 13 + 1,
            player1 = rand() % 13 + 1,
            player2 = rand() % 13 + 1,
            dealTot = dealer1 + dealer2,
            playTot = player1 + player2,
            ace = 11,
            jack = 10, 
            queen = 10,
            king = 10;
    
    cout << "|---------------------|" << endl;
    cout << "|Welcome to Blackjack!|" << endl;
    cout << "|---------------------|" << endl;
    cout << "\n(Press enter to begin!)" << endl;
    
    cin.get();
    
    do
    {
        if(cin.fail())
        {
            cin.clear();
            cin.ignore();
        }
        cout << "Please enter a bet of a maximum of $2000.\n" << endl;
        
        cin >> bet;
        
        if(cin.fail() || bet < 1 || bet > 2000)
            cout << "\nInvalid input."
                 << endl;
            }
    
    while(cin.fail() || (bet < 1) || (bet > 2000));
    
    cout << "\nThe bets are in the pot! Good luck! (Press enter to continue)" 
         << endl;
    
    cin.ignore();
    cin.get();
    
    cout << "\nThe dealer deals the cards." << endl;
    cout << "\nThe dealer has ";
    
    switch (dealer1)
    {
        case 10: cout << "An Ace (" << ace << ") and ";
        break;
        case 11: cout << "A Jack (" << jack << ") and ";
        break;
        case 12: cout << "A Queen (" << queen << ") and ";
        break;
        case 13: cout << "A King (" << king << ") and ";
        break;
        default: cout << "A " << dealer1 << " and ";
        break;
    }

    switch (dealer2)
    {
        case 10: cout << "An Ace (" << ace << ")";
        break;
        case 11: cout << "a Jack (" << jack << ")";
        break;
        case 12: cout << "a Queen (" << queen << ")";
        break;
        case 13: cout << "a King (" << king << ")";
        break;
        default: cout << "a " << dealer2;
        break;
    }
    
    cout << endl;
    cout << "\nThe cards you were dealt with are ";
    
    switch (player1)
    {
        case 10: cout << "An Ace (" << ace << ") and ";
        break;
        case 11: cout << "A Jack (" << jack << ") and ";
        break;
        case 12: cout << "A Queen (" << queen << ") and ";
        break;
        case 13: cout << "A King (" << king << ") and ";
        break;
        default: cout << "A " << player1 << " and ";
        break;
    }
    
    switch (player2)
    {
        case 10: cout << "An Ace (" << ace << ")";
        break;
        case 11: cout << "a Jack (" << jack << ")";
        break;
        case 12: cout << "a Queen (" << queen << ")";
        break;
        case 13: cout << "a King (" << king << ")";
        break;
        default: cout << "a " << player2;
        break;
    }
    
    cout << endl;
    
    if ((player1 == 1) && (player2 == 10 || player2 == 11 || player2 == 12 
      || player2 == 13))
    {
        cout << "\nYou got 21! Congratulations you won the pot!" << endl;
    }
    else if ((player2 == 1) && (player1 == 10 || player1 == 11 || player1 == 12 
            || player1 == 13))
    {
        cout << "\nYou got 21! Congratulations you won the pot!" << endl;
    }
    else if (playTot > dealTot)
    {
        cout << "\nCongratulations you won the pot!" << endl;
    }
    else 
    {
        cout << "\nSorry! You lost the pot. Good luck next time!" << endl;
    }
    
    return 0;
    }