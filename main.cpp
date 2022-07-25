#include <iostream>
#include <time.h>
using std::srand;
using std::cout;
using std::cin;

int main() {
    srand(time(NULL));
    int guess = 0;
    int answer = rand() % 10;

    cout << "I am thinking of a number between 1 and 10, try to guess what it is. "
    << '\n'<< "Enter your guess: " << '\n';

    bool continuePlaying = true;
    while (continuePlaying)
    {
        cin >> guess;

        if (guess > answer)
        {
            cout << "Your guess was too high! Please try again." << '\n';
            cout << "Enter your guess: " << '\n';
        }
        else if (guess < answer)
        {
            cout << "Your guess was too low! Please try again." << '\n';
            cout << "Enter your guess: " << '\n';
        }
        else if (guess == answer)
        {
            cout << "Your guess was correct! Well done!" << '\n';
            continuePlaying = false;
        }
    }
    return 0;
}
