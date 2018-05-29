#include <iostream>
#include <string>
#include <cmath>
using namespace std;

//Write a program that finds the average of several floats.
//Allow the user to specify how many values that will be entered.
//Limit the number count to 20.

int main()
{
    float number_of_floats;

    cout << "How many numbers do you want? (max 20)" << endl;
    cin >> number_of_floats;

    //End (if invalid size)
    if (number_of_floats > 20)
    {
        cout << "Invalid size.  Ending." << endl;

        return 0;
    }
    else
    {
        //User Input & Average
        float average = 0, number_list[20];

        for(int counter = 0; counter < number_of_floats; counter++)
        {
            cout << "Enter value " << counter << ":" << endl;
            cin >> number_list[counter];
            average += (number_list[counter] / number_of_floats);

        }

        cout << "Average: " << average << endl;


        //Copy List
        cout << "You entered: " << endl;

        for (int counter = 0; counter < number_of_floats; counter++)
        {
            cout << number_list[counter] << endl;
        }
    }

    return 0;
}


