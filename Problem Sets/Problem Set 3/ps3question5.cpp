#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    cout << fixed;
    cout << setprecision (2);

    float principal, interest_rate, result1, result2;

    cout << "== One Year Interest Calculator ==" << endl;
    cout << "Enter principal followed by interest rate." << endl;
    cout << "Omit the dollar sign and percent symbol." << endl;
    cout << "e.g. 13500.23 5.3" << endl;
    cin >> principal >> interest_rate;

    result1 = (interest_rate / 100) * principal;

    result2 = result1 + principal;

    cout << "Interest earned: $" << result1 << endl;
    cout << "Ending balance: $" << result2 << endl;
    cout << "Big money!" << endl;



    return 0;
}
