#include <iostream>
#include <cctype>
#include <string>
using namespace std;

//Prompt the user for a social security number.  Determine if the SSN is in the correct format.

const int SSN_LENGTH = 11;

int main()
{
    //declare user social security
    string user_SSN;
    //set the counter to 0
    int counter = 0;
    //ask for SSN
    cout << "Enter your SSN in this format: XXX-XX-XXXX" << endl;
    cin >> user_SSN;
    //if he length of the SSN is equal to 11 AND the 3rd and 6th subscript is equal to the dash
    if (user_SSN.length() == SSN_LENGTH && user_SSN[3] == '-' && user_SSN[6] == '-')
    {
        //loop to each character to check if it is a digit and if is not a letter
        for (int x = 0; x < SSN_LENGTH; x++)
        {
            //if it is a digit add to the counter
            if (isdigit(user_SSN[x]))
            {
                counter++;
            }
            else if (isalpha(user_SSN[x]))
            {
                cout << "Problem: Only digits are allowed in a SSN" << endl;
                return 0;
            }
        }
    }
    //output an error if the length of the SSN is not 11 characters
    else if (user_SSN.length() != SSN_LENGTH)
    {
        cout << "Problem: You must type exactly 11 characters." << endl;
    }
    //if 3rd and 6th subscript is not a dash, output an error message
    else if(user_SSN[3] != '-' || user_SSN[6] != '-')
    {
        cout << "Problem: The dashes are missing or are in the wrong spot" << endl;
    }
    //if counter is equal to 9
    if (counter == 9)
    {
        //output valid
        cout << "That is valid." << endl;
    }

    return 0;
}

