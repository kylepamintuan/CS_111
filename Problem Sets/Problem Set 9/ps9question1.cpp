#include <iostream>
#include <string>
#include <fstream>
using namespace std;

//Prompt the user for two characters.  Output the movies that begin with those two characters.

struct Movie
{
  string name;
  string year;
  string genre;
};

int main()
{
    Movie movie_list[116793];

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

    //------------------------------------------------------------------------------------

    char char1, char2;

    cout << "Begins-With Movie Finder" << endl;

    cout << "Enter first character" << endl;
    cin >> char1;
    cout << "Enter second character" << endl;
    cin >> char2;
    //Notes & Main Questions:

    //Why does my program stop after the first input?

    for (int counter = 0; counter < 116793; counter++)
    {
        string title = movie_list[counter].name;

        if (title[0] == char1 && title[1] == char2)
        {
                cout << movie_list[counter].name << endl;
        }

    }

    return 0;
}
