#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(static_cast<unsigned>(time(nullptr)));

    int secret = rand() % 50 + 1;  // random number between 1 and 50
    int guess;
    int attempts = 0;

    cout << "I have generated a number between 1 and 50.\n";
    cout << "Try to guess it.\n";

    while (true) {
        cout << "Enter guess: ";
        cin >> guess;
        attempts++;

        if (guess == secret) {
            cout << "Correct! You guessed the number in "
                 << attempts << " attempts.\n";
            break;
        } else if (guess < secret) {
            cout << "Too low. Try again.\n";
        } else {
            cout << "Too high. Try again.\n";
        }
    }

    return 0;
}

