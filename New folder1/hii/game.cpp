#include <bits/stdc++.h>
using namespace std;
int main() {
    int randomNumber = rand() % 100 + 1;
    int guess;
    int attempts = 0;

    cout << "Lets play Number Guessing Game!" <<endl;
    cout << "I have generated a random number between 1 and 100." <<endl;
    cout << "Can you guess it ?" << endl;
    while(guess!=randomNumber) {
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++;
        if (guess > randomNumber) {
            cout << "Too high! Try again." <<endl;
        } else if (guess < randomNumber) {
            cout << "Too low! Try again." <<endl;
        } else {
            cout << "Congratulations! You guessed the number in " << attempts << " attempts." <<endl;
        }
    } 
    return 0;
}
