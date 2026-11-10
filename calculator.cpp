#include <iostream>
using namespace std;

int main()
{
    int choice;
    double a, b;
    cout << "-----Welcome To Calulator-----\n";
    do
    {
        cout << "Press\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Exit\n";
        cin >> choice;

        if (choice >= 1 && choice <= 4)
        {
            cout << "Enter Two numbers: " << endl;
            cin >> a >> b;
        }

        switch (choice)
        {
        case 1:
            cout << "Sum : " << (a + b) << endl;
            break;

        case 2:
            cout << "Subtraction : " << (a - b) << endl;
            break;

        case 3:
            cout << "Multiplication : " << (a * b) << endl;
            break;

        case 4:
        {
            if (b > 0)
            {
                cout << "Divide : " << (a / b) << endl;
            }
            else
            {
                cout << "b is equal to 0" << endl;
            }
            break;
        }
        case 5:
            break;

        default:
            cout << "Invalid Choice.." << endl;
        }

    } while (choice != 5);
    return 0;
}