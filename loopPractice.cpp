#include <iostream>
using namespace std;

int main()
{
    // Seprate out the digits:
    int n, divisor = 1, count = 0;
    cin >> n;
    int temp = n;

    while (temp > 0)
    {
        count++;
        temp = temp / 10;
    }

    for (int i = 1; i < count; i++)
    {
        divisor = divisor * 10;
    }

    while (divisor > 0)
    {
        cout << n / divisor << " ";
        n = n % divisor;
        divisor = divisor / 10;
    }
    cout << endl;

    // count the number of digits:
    int m, digit = 0;
    cin >> m;

    while (m > 0)
    {
        digit++;
        m = m / 10;
    }

    cout << digit << endl;

    // reverse of a number & palindrome;
    int num;
    cin >> num;

    int original = num;

    int reverse = 0;
    while (num > 0)
    {
        int lastDigit = num % 10;
        reverse = reverse * 10 + lastDigit;
        num = num / 10;
    }

    if (original == reverse)
    {
        cout << "Palindrome" << endl;
    }
    else
    {
        cout << "Not Palindrome" << endl;
    }

    long long k, isAutomorphic = 1;
    cin >> k;

    long long sq = k * k;

    while (k > 0)
    {
        if (k % 10 != sq % 10)
        {
            isAutomorphic = 0;
            break;
        }

        k = k / 10;
        sq = sq / 10;
    }

    cout << ((isAutomorphic == 1) ? "Automorphic" : "Not Automorphic") << endl;

    // Strong Number:

    int p, facSum = 0;
    cin >> p;
    int orgNum = p;

    while (p > 0)
    {
        int lastDigit = p % 10;
        long long factorial = 1;

        for (int i = 1; i <= lastDigit; i++)
        {
            factorial *= i;
        }

        facSum += factorial;
        p = p / 10;
    }

    if (orgNum == facSum)
    {
        cout << "Strong Number" << endl;
    }
    else
    {
        cout << "Not a Strong Number" << endl;
    }

    // Armstrong Number:

    int armNum, armOriginal, armDigit, armCount = 0, armSum = 0;
    cin >> armNum;

    armOriginal = armNum;

    int armTemp = armNum;

    if (armOriginal == 0)
    {
        armCount = 1;
    }

    while (armTemp > 0)
    {
        armCount++;
        armTemp = armTemp / 10;
    }

    while (armNum > 0)
    {
        armDigit = armNum % 10;

        int armPower = 1;
        int armI = 1;

        while (armI <= armCount)
        {
            armPower *= armDigit;
            armI++;
        }

        armSum += armPower;
        armNum = armNum / 10;
    }

    if (armOriginal == armSum)
    {
        cout << "Armstrong Number" << endl;
    }
    else
    {
        cout << "Not Armstrong Number" << endl;
    }

    return 0;
}