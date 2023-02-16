#include <iostream>
#include <ctime>
using namespace std;

int getRandomNumber();
int getGuessNumber();
void printAnswer(int guess, int secretNumber);

int main()
{
    int guess;
    int secretNumber = getRandomNumber();
    bool isPlaying = true;
    do
    {
        cout << "Press a lucky number (this number is in [0; 100]): ";
        guess = getGuessNumber();
        cout << endl;
        printAnswer(guess, secretNumber);
        cout << endl;
        if (guess == secretNumber)
        {
            int num;
            cout << endl;
            cout << "Do you want to play again?" << endl << "Press (1) if you want to play again, else press (0): ";
            cin >> num;
            if (num == 1);
            else
                isPlaying = false;
            cout << endl;
        }
    } while (isPlaying);
    cout << "Thanks for playing Guess It 1.0!..." << endl;
    return 0;
}

int getRandomNumber()
{
    srand(time(0));
    int n = rand() % 100 + 1;
    return n;
}

int getGuessNumber()
{
    int guess;
    cin >> guess;
    return guess;
}

void printAnswer(int guess, int secretNumber)
{
    if (guess  > secretNumber)
        cout << "Your number is bigger than secret number!" << endl;
    else if (guess < secretNumber)
        cout << "Your number is smaller than secret number!" << endl;
    else
        cout << "Congratulations! You win!! The secret number is: " << secretNumber << endl;
}
