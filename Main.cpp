
#include <iostream>
using namespace std;

int main()
{
    // TYPE CASTING AND CONVERSION

    int a;
    float c;
    int n = 90;

    double d = n; // implicit type conversion

    double num = 2147483649.0;
    // int i = num; // value int ki range se bahar hai

    int a1 = 10, b = 3;
    double ans = (float)a1 / b;

    cout << "Double value = " << d << endl;
    cout << "Division = " << ans << endl;


    // SUM OF NUMBERS AND INPUT

    int x, y;

    cout << "\nEnter two numbers: ";
    cin >> x >> y;

    cout << "Value of x = " << x << endl;
    cout << "Sum = " << x + y << endl;


    // ARITHMETIC OPERATORS

    cout << "Sub = " << x - y << endl;
    cout << "Mult = " << x * y << endl;

    if (y != 0)
    {
        cout << "Div = " << x / y << endl;
        cout << "Mod = " << x % y << endl;
    }
    else
    {
        cout << "Division by zero is not allowed." << endl;
    }


    // RELATIONAL OPERATORS

    cout << (x >= y) << endl;
    cout << (x < y) << endl;
    cout << (x != y) << endl;


    // ASSIGNMENT OPERATOR

    int k = 67, l = 69;
    k += l;

    cout << k << endl;


    // LOGICAL OPERATORS

    cout << ((10 > 5) && (20 > 10)) << endl;
    cout << ((1 > 5) || (20 > 10)) << endl;
    cout << (!(1 > 5)) << endl;


    // INCREMENT AND DECREMENT

    int u = 1;

    cout << ++u << endl; // pre-increment
    cout << u++ << endl; // post-increment
    cout << u << endl;

    char ch = 'A';
    ch++;

    cout << ch << endl;


    // NAME AND AGE

    string name;
    int age;

    cout << "Enter Name: ";
    cin >> name;

    cout << "Enter Age: ";
    cin >> age;

    cout << "My name is \"" << name
         << "\" and I am " << age << " years old." << endl;

    // BITWISE OPERATORS

    int p = 5, q = 3;

    cout << "AND = " << (p & q) << endl;
    cout << "OR = " << (p | q) << endl;   
    cout << "XOR = " << (p ^ q) << endl;  

    cout << "NOT = " << (~p) << endl;     // ~n = -(n + 1), ~5 = -6
    cout << "Left Shift = " << (p << 1) << endl;  // n * 2 = 10
    cout << "Right Shift = " << (p >> 1) << endl; // n / 2 = 2

    return 0;
}
