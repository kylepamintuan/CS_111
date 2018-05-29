#include <iostream>
using namespace std;

//Prompt the user for a string. Output the string in reverse.

int main()
{
    string word;

    cout << "Enter some word" << endl;
    cin >> word;

    for (int counter = word.length() - 1; counter >= 0; counter--)
    {
        cout << word[counter];
    }

    cout << endl;

    return 0;
}

