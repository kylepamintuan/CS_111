#include <string>
#include <fstream>
using namespace std;

int count_the_word(string filename, string word)
{
    ifstream data_store;

    data_store.open(filename.c_str());

    int word_count = 0;
    while (!data_store.eof())
    {
        string some_word;
        data_store >> some_word;
        if (some_word == word)
        {
            word_count++;
        }
    }

    data_store.close();

    return word_count;
}
