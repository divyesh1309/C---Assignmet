/*Write a C++ program that asks the user to guess a number between 1 and 100. The
program should provide hints if the guess is too high or too low. Use loops to allow
the user multiple attempts.*/

#include<iostream>
#include <ctime>


using namespace std;
int main()
{
    srand(time(0)); // Seed the random number generator
    int numberToGuess = rand() % 100 + 1; // Random number between 1 and 100
    int userGuess = 0;
    int attempts = 0;

    std::cout << "Guess the number between 1 and 100 : ";

    while (userGuess != numberToGuess)
    {
        cin >> userGuess;
        attempts++;

        if (userGuess > numberToGuess)
        {
            cout << "Too high! Try again: ";
        }
        else if (userGuess < numberToGuess)
        {
            cout << "Too low! Try again: ";
        }
        else
        {
            cout << "You guessed the number in " << attempts << " attempts.\n";
        }
    }

    return 0;
}