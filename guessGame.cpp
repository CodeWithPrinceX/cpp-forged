#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    int guess;
    srand(time(0));
    int r = rand() % 10 + 1;

    do
    {
        cout << "Guess the Number between 1-10" << endl;
        cin >> guess;

        if(guess > r){
            cout << "TOO HIGH!!, Guess the smaller" << endl;
        }
        else if(guess < r){
            cout << "TOO LOW!!, Guess the higher number" << endl;
        }
        else{
            cout << "CORRECT!!" << endl;
        }
    } while (guess != r);

    return 0;
}