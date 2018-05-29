#include <iostream>
using namespace std;

int main()
{
    int x;

    for (x = 1; x <= 1000; x++)
    {
        if (x % 5 == 0)
        {
            cout << "-" << x << endl;
        }

       else
            cout << x << endl;
    }

    return 0;
}



