#include <iostream>
#include <string>
#include <cctype>
using namespace std;

//Prompt the user for a line of text.  Output that line in all capitals.  Leave non-alphabetic characters untouched.

int main()
{
    string user_input, result;

    cout << "Enter a line of text" << endl;
    getline(cin, user_input);

    for (int counter = 0; counter < user_input.length(); counter++)
    {
        result[counter] = toupper(user_input[counter]);

        cout << result[counter];
    }

    cout << endl;


    return 0;
}


