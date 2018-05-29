#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ifstream data_store;

    string file_name;

    string line_of_text;

    int number_of_lines = 1;

    cout << "Enter filename" << endl;
    cin >> file_name;

    data_store.open(file_name.c_str());


    if (!data_store)
    {
        cout << "File not found" << endl;
        return 0;
    }

    while (!data_store.eof())
    {

        getline(data_store, line_of_text);

        cout << number_of_lines << ": " << line_of_text << endl;

        number_of_lines++;
    }

    data_store.close();
}

