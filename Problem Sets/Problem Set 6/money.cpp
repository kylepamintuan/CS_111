#include <cmath>
using namespace std;

//current: How much money you have now
//rate: The interest rate (e.g. 0.05 for 5%)
//time: How many years the money will sit

float future_value(float current, float interest, float years)
{
    float result;

    result = current * pow(interest + 1, years);

    return result;
}
