#include <cmath>
#include <iostream>
using namespace std;

void output_stars(int num)
{
    cout << num << ": ";

    for (int counter = 0; counter < num; counter++)
    {
        cout << "*";
    }
    cout << endl;
}
