#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
//Get three numbers from the user: left, right, and x.
//If left <= x <= right output x is within the range [left, right].
//Otherwise, output x is outside the range [left, right]. Use floating point precision.

int main()
{
    cout << fixed;
    cout << setprecision(6);

    float left, x, right;

    cout << "Enter three numbers:" << endl;
    cin >> left >> right >> x;

    if (left <= x && x <= right)
        cout << x << " is within the range [" << left << ", " << right << "]" << endl;
    else
        cout << x << " is outside the range [" << left << ", " << right << "]" << endl;

    return 0;
}
