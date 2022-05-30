// Operators.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using std::cout;
using std::endl;
#include "Utility.h"


int main()
{
    int i = 0;
    i += 2;
    i *= 3;
    i -= 2;
    i /= 4;

    int j = i++;
    j = ++i; // i will first be incremented to 3, then i(3) assigned to j
    j = i--;
    j = --i;

    i = 2;
    j = 0;
    while (i < 101)
        j += IsPrime(i++) ? 1 : 0;
    cout << "I found " << j << " primes up to 100" << endl;

    return 0;
}

