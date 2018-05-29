#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

//Write a program that randomly determines whom the user should send a text message to.
//Allow the user to enter five friends that will be used for the selection.

//Random name selection function
string select_person(string friend_list[])
{
    //get a number in between 0 and 5
    int random_names = rand() % 5;
    //select a random name in the name_list
    string result = friend_list[random_names];
    //give back the result
    return result;
}

//Main function
int main()
{
    string friend_list[5];
    int seed_value;

    cout << "== Who Should I Text? ==" << endl;
    cout << "Enter seed" << endl;
    cin >> seed_value;
    srand(seed_value);

    //User Input
    for(int counter = 0; counter < 5; counter++)
    {
        cout << "Enter friend " << counter << endl;
        cin >> friend_list[counter];
    }

    //Declare a string for friend with the Random Name Selection function
    string selection = select_person(friend_list);

    //Output the selection
    cout << "You should text: "<< selection << endl;

    //Output the names that were NOT selected
    cout << "These other friends didn't make the cut:" << endl;
    for (int counter = 0; counter < 5; counter++)
    {
        if (friend_list[counter] != selection)
                {
                    cout << friend_list[counter] << endl;
                }
    }

    return 0;
}

