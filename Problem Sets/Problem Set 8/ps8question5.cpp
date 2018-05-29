#include <iostream>
using namespace std;

//Prompt the user for two strings, s1 and s2.
//Determine if s1 and s2 are equal.
//If they're not equal, output them in alphabetical order.

int main()
{
    string s1, s2;

    cout << "== String Compare ==" << endl;

    cout << "Enter a word" << endl;
    cin >> s1;
    cout << "Enter another word" << endl;
    cin >> s2;

    if (s1 == s2)
    {
        cout << "Words are exactly the same." << endl;
    }
    else if(s1 > s2)
    {
        cout << "\"" << s1 << "\"" << " comes after "<< "\"" << s2 << "\"." << endl;
        return 0;
    }
    else if(s1 < s2)
    {
        cout << "\"" << s1 << "\"" << " comes before "<< "\"" << s2 << "\"." << endl;
        return 0;
    }


    return 0;
}


