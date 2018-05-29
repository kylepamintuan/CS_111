#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    cout << fixed;
    cout << setprecision(6);

    float num1, num2, option, result;

    cout << "Enter first number:" << endl;
    cout << "Enter second number:" << endl;
    cout << "Enter a menu option:" << endl;
    cout << "[1] Add:" << endl;
    cout << "[2] Subtract:" << endl;
    cout << "[3] Multiply:" << endl;
    cout << "[4] Divide:" << endl;
    cin >> num1 >> num2 >> option >> result;

    if (option == 1)
    {
        result = num1 + num2;
        cout << num1 << " + " << num2 << " = " << setprecision(1) << result;
    }
    else if (option == 2)
    {
        result = num1 - num2;
        cout << num1 << " - " << num2 << " = " << setprecision(1) << result;
    }
    else if (option == 3)
    {
        result = num1 * num2;
        cout << num1 << " * " << num2 << " = " << setprecision(1) << result;
    }
    else if (option == 4)
    {
        result = num1 / num2;

        if (num2 == 0)
            cout << "If division is selected the second number cannot be zero" << endl;
        else
            cout << num1 << " / " << num2 << " = " << setprecision(1) << result;

    }
    else
        cout << "Invalid menu option";

    return 0;
}

