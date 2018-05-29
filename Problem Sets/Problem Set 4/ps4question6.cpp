#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    cout << fixed;
    cout << setprecision(6);

    float num;

    cout << "Enter a number:" << endl;
    cin >> num;

    if (num < 30.5)
        cout << num << " is under 30.5" << endl;

    else if (num >= 30.5)
        cout << num << " is greater than or equal to 30.5" << endl;



    return 0;
}


