#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    cout << fixed;
    cout << setprecision(1);

    float num1, result;

    cout << "Enter a number.  I will add one to it." << endl;
    cin >> num1;

    result = num1 + 1;

    cout << "Result: " << result << endl;

    return 0;

}
