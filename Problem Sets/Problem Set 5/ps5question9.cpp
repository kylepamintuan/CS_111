#include <iostream>
using namespace std;

int main()
{
    int height;

    cout << "Enter a height" << endl;
    cin >> height;

    if (height < 1)
    {
        cout << "Height must be at least one." << endl;
    }
    else
    {
        for (int outer = 1; outer <= height; outer++)
        {

            for(int inner = 1; inner <= outer; inner++)
            {
                cout << "*";
            }

            cout << endl;
        }
    }
    return 0;
}
