#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    cout << fixed;
    cout << setprecision(1);

    float x1, y1, distance1, distance2, distance3;

    cout << "== Zelda (version 0.000001) ==" << endl;
    cout << "What is the position of our hero, Link?" << endl;
    cout << "Enter X and Y coordinates separated by a space" << endl;
    cin >> x1 >> y1;

    distance1 = sqrt( pow(5.0 - x1, 2.0) + pow(3.0 - y1, 2.0) );
    distance2 = sqrt( pow(-3.125 - x1, 2.0) + pow(0.0 - y1, 2.0) );
    distance3 = sqrt( pow(1.5 - x1, 2.0) + pow(8.1 - y1, 2.0) );

    cout << "Sword is at (5.0, 3.0).  Distance from: " << distance1 << endl;
    cout << "Heart is at (-3.125, 0).  Distance from: " << distance2 << endl;
    cout << "Triforce is at (1.5, 8.1).  Distance from: " << distance3 << endl;



    return 0;

}
