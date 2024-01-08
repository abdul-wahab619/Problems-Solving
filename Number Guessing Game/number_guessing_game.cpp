#include <iostream>
#include <cstdlib> // For rand() and srand()
#include <ctime>   // For time()

using namespace std;

int main()
{
    // Seed for random number generation
    srand(time(0));

    // Generate a random number between 1 and 100
    int secretNumber = rand() % 100 + 1;

    int guess;
    int attempts = 0;

    cout << "Welcome to the Number Guessing Game!" << endl;
    cout << "Try to guess the number between 1 and 100." << endl;

    do
    {
        cout << "Enter your guess: ";
        cin >> guess;

        attempts++;

        if (guess == secretNumber)
        {
            cout << "Congratulations! You guessed the correct number in " << attempts << " attempts." << endl;
        }
        else if (guess < secretNumber)
        {
            cout << "Too low! Try again." << endl;
        }
        else
        {
            cout << "Too high! Try again." << endl;
        }

    } while (guess != secretNumber);

    return 0;
}
