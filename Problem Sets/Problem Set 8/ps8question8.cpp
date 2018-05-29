#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
    string word_list[150000];

    //Step 1
    ifstream dictionary;

    //Step 2
    dictionary.open("dict.txt");

    //Step 3
    if (!dictionary)
    {
        cout << "dict.txt not found" << endl;
        return 0;
    }

    int counter = 0;

    while(!dictionary.eof())
    {
        string word;

        getline(dictionary, word);

        word_list[counter] = word;

        counter++;
    }

    //Step 4
    dictionary.close();


    //User Input & Spellchecks

    string user_input;
    bool flag = false;

     for (int counter = 0; counter < 10; counter++)
     {
        cout << "Enter word to spellcheck (or exit to end)" << endl;
        getline(cin, user_input);

        flag = false;

       if (user_input != "exit")
       {
            for (int counter = 0; counter < 150000; counter++)
            {

                if (word_list[counter] == user_input)
                {
                    cout << user_input << " is spelled correctly." << endl;
                    flag = true;
                }

            }

            if (flag != true)
            {
                cout << user_input << " is not spelled correctly." << endl;
            }
        }
        else if (user_input == "exit")
        {
            cout << "Ending program..." << endl;
            return 0;
        }
     }


    return 0;
}

