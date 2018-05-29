#include <iostream>
#include <string>
#include <fstream>
using namespace std;

//Prompt the user for a movie name.  Output the three movies that come alphabetically before the one entered.

struct Movie
{
  string name;
  string year;
  string genre;
};

int main()
{
    Movie movie_list[116792];

    //Step 1
    ifstream movie_db;

    //Step 2
    movie_db.open("movie_database.txt");

    //Step 3
    if (!movie_db)
    {
        cout << "movie_database.txt not found" << endl;
        return 0;
    }

    int counter = 0;

    while(!movie_db.eof())
    {
        string name, year, genre;

        getline(movie_db, name);
        getline(movie_db, year);
        getline(movie_db, genre);

        movie_list[counter].name = name;
        movie_list[counter].year = year;
        movie_list[counter].genre = genre;

        counter++;
    }

    //Step 4
    movie_db.close();

    //---------------------------------------------------------------------------------

    string user_input;

    cout << "Similar Title Finder" << endl;

    cout << "Enter a movie name" << endl;
    getline(cin, user_input);

    cout << "The movies just before " << user_input << " are:" << endl;

    for (int counter = 0; counter < 116792; counter++)
    {
        if (movie_list[counter].name == user_input)
        {
            cout << movie_list[counter - 3].name << endl;
            cout << movie_list[counter - 2].name << endl;
            cout << movie_list[counter - 1].name << endl;

            return 0;
        }

    }

    return 0;
}


