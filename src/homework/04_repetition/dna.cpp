#include "dna.h"

using std::cin;
using std::cout;

int factorial(int num)
{
    int factorial = 1;
    while (num != 0)
    {
        factorial = num * factorial;
        num --;
    }
    return factorial;
}

int gcd(int usernum1, int usernum2)
{
    int gcd;
    for (int i = 1; i <= usernum1 && i <= usernum2; i++)
    {
        if (usernum1 % i == 0 && usernum2 % i == 0)
        {
            gcd = i;
        }
    }

    return gcd;
}