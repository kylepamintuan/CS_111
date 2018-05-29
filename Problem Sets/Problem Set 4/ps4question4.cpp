#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int HH, MM, SS, result;

    cout << "Enter a time value in the following format: HH MM SS" << endl;
    cin >> HH >> MM >> SS;

    result = HH - 12;

    if (HH > 12 && HH <= 23)
        cout << setw(2) << setfill('0') << result << ":" << setw(2) << setfill('0') << MM << ":" << setw(2) << setfill('0') << SS << "PM" << endl;
     else if (HH > 23)
        cout << "Hour must be between 0 and 23 inclusive.";

    if (HH < 12 && HH > 0)
        cout << setw(2) << setfill('0') << HH << ":" << setw(2) << setfill('0') << MM << ":" << setw(2) << setfill('0') << SS << "AM"<< endl;
     else if (HH < 0)
        cout << "Hour must be between 0 and 23 inclusive.";

    if (HH == 00)
        cout << "12:00:00AM"<< endl;

    if (HH == 12)
        cout << "12:00:00PM"<< endl;

    return 0;
}
