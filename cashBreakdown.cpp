#include <iostream>
using namespace std;

int main()
{
    // ATM Simulation :

    int amount;
    cin >> amount;
    int n500 = 0, n200 = 0, n100 = 0, n50 = 0, n20 = 0, n10 = 0, n5 = 0, n2 = 0, n1 = 0;
    // currency :- 500 200 100 50 20 10 5 2 1;

    if (amount >= 500)
    {
        n500 = amount / 500;
        amount = amount % 500;
    }
    if (amount >= 200)
    {
        n200 = amount / 200;
        amount = amount % 200;
    }
    if (amount >= 100)
    {
        n100 = amount / 100;
        amount = amount % 100;
    }
    if (amount >= 50)
    {
        n50 = amount / 50;
        amount = amount % 50;
    }
    if (amount >= 20)
    {
        n20 = amount / 20;
        amount = amount % 20;
    }
    if (amount >= 10)
    {
        n10 = amount / 10;
        amount = amount % 10;
    }
    if (amount >= 5)
    {
        n5 = amount / 5;
        amount = amount % 5;
    }
    if (amount >= 2)
    {
        n2 = amount / 2;
        amount = amount % 2;
    }
    if(amount >= 1)
    {
        n1 = amount / 1;
    }

    cout << "Notes of 500: " << n500 << endl;
    cout << "Notes of 200: " << n200 << endl;
    cout << "Notes of 100: " << n100 << endl;
    cout << "Notes of 50: " << n50 << endl;
    cout << "Notes of 20: " << n20 << endl;
    cout << "Notes of 10: " << n10 << endl;
    cout << "Coins of 5: " << n5 << endl;
    cout << "Coins of 2: " << n2 << endl;
    cout << "Coins of 1: " << n1 << endl;


    return 0;
}