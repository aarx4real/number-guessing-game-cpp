#include <iostream>
#include <cstdlib>
#include <ctime>
#include "game.h"
#include "score.h"

using namespace std;

void Game::start()
{
    srand(time(0));
    int randomNumber = rand() % 100 + 1;
    int guess;

    Score score;

    cout << "Guess the number (1-100): ";

    do
    {
        cin >> guess;
        score.increment();

        if (guess > randomNumber)
        {
            cout << "Too high! Try again: ";
        }
        else if (guess < randomNumber)
        {
            cout << "Too low! Try again: ";
        }
        else
        {
            cout << "Correct! You guessed in "
                 << score.getAttempts()
                 << " attempts.\n";
        }

    } while (guess != randomNumber);
}
