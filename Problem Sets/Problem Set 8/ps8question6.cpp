#include <iostream>
using namespace std;

//Prompt the user for his/her name.  Verify that the name only contains alphabetic characters.

int main()
{
    string name;

    cout << "What's your first name?" << endl;
    getline(cin, name);

    bool invalid = false;

    for (int counter = 0; counter < name.length(); counter++)
    {
        if (!isalpha(name[counter]))
        {
            cout << "Your name cannot contain: " << name[counter] << endl;
            invalid = true;
        }
        else if (isdigit(name[counter]))
        {
            cout << "Your name cannot contain: " << name[counter] << endl;
            invalid = true;
        }
        else if (ispunct(name[counter]))
        {
            cout << "Your name cannot contain: " << name[counter] << endl;
            invalid = true;
        }
    }
    if (invalid != true)
    {
        cout << "Valid name." << endl;
    }
    else
    {
        cout << "Invalid name." << endl;
    }

    return 0;
}

