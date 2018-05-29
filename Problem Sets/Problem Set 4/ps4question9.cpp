#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    float percentage, result;

    cout << "Enter your percentage:" << endl;
    cin >> percentage;

    if (percentage < 0 || percentage > 100)
        cout << "Letter grade: Invalid percentage" << endl;
    else if (percentage >= 90)
        cout << "Letter grade: A" << endl;
    else if (percentage >= 80)
        cout << "Letter grade: B" << endl;
    else if (percentage >= 70)
        cout << "Letter grade: C" << endl;
    else if (percentage >= 60)
        cout << "Letter grade: D" << endl;
    else if (percentage >= 0)
        cout << "Letter grade: F" << endl;

    return 0;
}


