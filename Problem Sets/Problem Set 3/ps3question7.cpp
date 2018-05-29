#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    cout << fixed;
    cout << setprecision (1);

    float num, result;

    cout << "Enter a number.  I will find the square root." << endl;
    cin >> num;

    result = sqrt(num);

    cout << "Square root: " << result;

    return 0;
}


