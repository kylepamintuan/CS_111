#include <iostream>
using namespace std;

int main ()
{
    int age;

    cout << "Enter your age:" << endl;
    cin >> age;



    if (age >= 35)
        cout << age << "?  You can run for President!" << endl;
    else
        cout << age << "?  You cannot run for President!" << endl;



    return 0;
}
