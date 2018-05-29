#include <iostream>
using namespace std;

int main()
{
    int num, total = 1;

    cout << "Enter a number:" << endl;
    cin >> num;

    if (num < 0)
    {
        cout << "Factorial not defined for negative numbers." << endl;
    }
    else
    {
        for (int counter = num; counter > 0; counter --)
            total = counter * total;
        {
            cout << num << "! = " << total << endl;
        }
    }

    return 0;
}
