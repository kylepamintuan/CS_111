#include <iostream>
using namespace std;

//Prompt the user for a string. Output the length of the string.

int main()
{
    string word;

    cout << "Enter a word:" << endl;
    cin >> word;

    int character_count = word.length();

    cout << "Character count: " << character_count << "."<< endl;

    return 0;
}
