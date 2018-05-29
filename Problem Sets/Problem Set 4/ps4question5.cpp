#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    cout << fixed;
    cout << setprecision (2);

    float annual_income, monthly_mortgage, result;

    cout << "Enter your annual income and monthly mortgage separated by a space." << endl;
    cin >> annual_income >> monthly_mortgage;

    result = (annual_income / 12) * 0.30;

    if (annual_income <0 || monthly_mortgage <0)
        cout << "Both annual income and monthly mortgage must not be negative";

    else if (monthly_mortgage <= result)
        cout << "You can afford the house!" << endl;
    else
    {
        cout << "You cannot afford the house." << endl;
        cout << "You can only afford a $" << result << " monthly payment." << endl;
    }


    return 0;
}


