#include <iostream>
#include <cctype>
using namespace std;

//Print the numbers 33 to 126 and their corresponding ASCII character values.

int main()
{
    for (char counter = '!'; counter <= '~'; counter++)
    {
        int alt = counter;
        cout << alt << " " << counter << endl;
    }


    return 0;
}
