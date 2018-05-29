#include <cmath>
using namespace std;

bool is_prime(int num)
{
    for (int count = 2; count < num; count++)
    {
        if (num % count == 0 && count != num)
        {
            return false;
        }

    }
    if (num == 1)
    {
        return false;
    }
    else
    {
        return true;
    }
}

