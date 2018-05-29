#include <iostream>
using namespace std;

int main()
{
    int num;

    do
    {
        cout << "Which direction would you like to move?" << endl;
        cout << "[8] North" << endl;
        cout << "[4] West" << endl;
        cout << "[2] South" << endl;
        cout << "[6] East" << endl;
        cout << "[0] Exit" << endl;
        cin >> num;

        if (num == 8)
            cout << "You moved north." << endl;
        if (num == 4)
            cout << "You moved west." << endl;
        if (num == 2)
            cout << "You moved south." << endl;
        if (num == 6)
            cout << "You moved east." << endl;
    }
    while (num != 0);

    return 0;
}


