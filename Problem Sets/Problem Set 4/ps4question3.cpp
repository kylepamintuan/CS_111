#include <iostream>
#include <cmath>
using namespace std;

int main ()
{
    int score, result;

    cout << "Enter your score:" << endl;
    cin >> score;



    if (score >= 7000)
        cout << "1UP";

    else if (score > 0)
    {
     result = 7000 - score;

     cout << "You need " << result << " more points for a 1UP";

    }

    else if (score < 0)
        cout << "You got less than zero?  This score is invalid.";


    return 0;
}


