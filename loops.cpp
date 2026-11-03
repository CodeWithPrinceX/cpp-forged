#include <iostream>
using namespace std;

int main()
{
    // 1. Sum of even and odd numbers from 1 to n
    {
        int n;
        long long sumEven = 0, sumOdd = 0;
        cout << "Enter n: ";
        cin >> n;

        for (int i = 1; i <= n; i++)
        {
            if (i % 2 == 0)
            {
                sumEven += i;
            }
            else
            {
                sumOdd += i;
            }
        }

        cout << "Sum of even numbers: " << sumEven << endl;
        cout << "Sum of odd numbers: " << sumOdd << endl;
    }

    // 2. Factorial of a number
    {
        int n;
        long long factorial = 1;
        cout << "Enter n: ";
        cin >> n;

        for (int i = 1; i <= n; i++)
        {
            factorial = factorial * i;
        }

        cout << "Factorial: " << factorial << endl;
    }

    // 3. Sum of the factors of a number
    {
        int n;
        long long sumOfFactors = 0;
        cout << "Enter n: ";
        cin >> n;

        for (int i = 1; i <= n; i++)
        {
            if (n % i == 0)
            {
                sumOfFactors += i;
            }
        }

        cout << "Sum of factors: " << sumOfFactors << endl;
    }

    // 4. Check whether a number is prime
    {
        int n, factorCount = 0;
        cout << "Enter n: ";
        cin >> n;

        for (int i = 1; i <= n; i++)
        {
            if (n % i == 0)
            {
                factorCount++;
            }
        }

        if (factorCount == 2)
        {
            cout << "Prime" << endl;
        }
        else
        {
            cout << "Not Prime" << endl;
        }
    }

    // 5. Fibonacci series with n terms
    {
        int terms;
        long long firstTerm = 0, secondTerm = 1;
        cout << "Enter number of terms: ";
        cin >> terms;

        for (int i = 1; i <= terms; i++)
        {
            cout << firstTerm << " ";
            long long nextTerm = firstTerm + secondTerm;
            firstTerm = secondTerm;
            secondTerm = nextTerm;
        }
        cout << endl;
    }

    return 0;
}