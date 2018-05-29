#include <cmath>
using namespace std;

float find_ke_value(float mass, float velocity)
{
    float result;

    result = (0.5) * mass * pow(velocity, 2.0);

    return result;
}

