#include <iostream>
#include <string>
#include <fstream>
using namespace std;

//Prompt the user for two years.  Print all Comedy movies that were released between those two years.

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

    string year1, year2;

    cout << "Comedy Movie Finder" << endl;

    cout << "Enter beginning year" << endl;
    getline(cin, year1);
    cout << "Enter ending year" << endl;
    getline(cin, year2);

    for (int counter = 0; counter < 116792; counter++)
    {
        if (movie_list[counter].genre == "Comedy" && movie_list[counter].year >= year1
                                                  && movie_list[counter].year <= year2)
        {
            cout << movie_list[counter].name << " " << movie_list[counter].year << endl;
        }

    }

    return 0;
}

