#include <iostream>
using std::cout;
using std::cin;

int main() {
    int guess = 0;
    int answer = 7;
    bool continuePlaying = true;

    cout << "I am thinking of a number, try to guess what it is. "
    << '\n'<< "Enter your guess: " << '\n';


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
