#include <iostream>
using namespace std;

int main()
{
    int result;

    for (int counter = 99; counter >= 3; counter--)
    {
        result = counter - 1;

        cout << counter << " bottles of Pepsi on the wall, " << counter << " bottles of Pepsi." << endl;
        cout << "Take one down, pass it around, " << result << " bottles of Pepsi on the wall." << endl;
    }

    /*2 bottles of Pepsi on the wall, 2 bottles of Pepsi.
    Take one down, pass it around, 1 bottle of Pepsi on the wall.
    1 bottle of Pepsi on the wall, 1 bottle of Pepsi.
    Take one down, pass it around, 0 bottles of Pepsi on the wall. */

    cout << "2 bottles of Pepsi on the wall, 2 bottles of Pepsi." << endl;
    cout << "Take one down, pass it around, 1 bottle of Pepsi on the wall." << endl;
    cout << "1 bottle of Pepsi on the wall, 1 bottle of Pepsi." << endl;
    cout << "Take one down, pass it around, 0 bottles of Pepsi on the wall." << endl;

    return 0;
}
