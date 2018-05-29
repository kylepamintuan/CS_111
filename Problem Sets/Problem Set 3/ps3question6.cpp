#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    cout << fixed;
    cout << setprecision (1);

    float fahrenheit, kelvin;

    cout << "== Fahrenheit to Kelvin converter ==" << endl;
    cout << "Enter Fahrenheit:" << endl;
    cin >> fahrenheit;

    kelvin = (fahrenheit - 32.000)*(.55555) + 273.1500;


    cout << "Kelvin: " << kelvin << endl;

    return 0;
}

