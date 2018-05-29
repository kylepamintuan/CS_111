#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
        {
            cout << fixed;
            cout << setprecision(1);

            float ft, in, weight, result, height;


            cout << "== BMI Calculator ==" << endl;
            cout << "Step 1: Enter height" << endl;
            cout << "Feet:" << endl;
            cin >> ft;

            cout << "Inches:" << endl;
            cin >> in;

            cout << "Step 2: Enter weight" << endl;
            cout << "Pounds:" << endl;
            cin >> weight;


            height = in + (ft * 12);
            result = (weight * 703) / (pow(height,2));


            cout << "BMI: " << result;

            if(result > 29.9)
                cout << ", you are obese." << endl;

            else if(result < 29.9 && result > 25.0)
                cout << ", you are overweight." << endl;

            else if(result > 18.5 && result < 24.9)
                cout << ", you are normal." << endl;

            else
                cout << ", you are underweight." << endl;


            return 0;

        }

