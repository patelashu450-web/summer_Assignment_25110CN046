#include <iostream>
using namespace std;
int main() {
    
    unsigned int seed = 42; 
    seed = seed * 1103515245 + 12345;
    int secretNumber = (seed % 100) + 1; 
    int userGuess = 0;
    int attempts = 0;

    cout << "   WELCOME TO THE GUESSING GAME  \n";
    cout << "I have chosen a number between 1 and 100.\n";
    cout << "Can you guess what it is?\n";

    while (userGuess != secretNumber) {
        cout << "Enter your guess: ";
        cin >> userGuess;
        attempts++;
        if (userGuess > secretNumber) {
            cout << "Too high! Try again.\n\n";
        } else if (userGuess < secretNumber) {
            cout << "Too low! Try again.\n";
        } else {
            cout << "\nCongratulations! You guessed it right!\n";
            cout << "Total attempts: " << attempts << "\n";
        }
    }

    return 0;
}
