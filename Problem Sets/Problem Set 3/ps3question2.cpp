#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int num, result;

    cout << "Enter an integer" << endl;
    cin >> num;

    result = num % 2;

    cout << num << " mod 2 = " << result;

    return 0;
}
