#include <iostream>
using std::cout;
using std::endl;

#include "Utility.h"

bool IsPrime(int x) {
	bool prime = true;
	for (int i = 2; i <= x / i; i = i + 1) {
		int factor = x / i;
		if (factor * i == x) {
			cout << "factor found: " << factor << endl;
			prime = false;
			break;
		}
	}
	return prime;
}

/*
* // in order to not change original value when using by reference
	to avoid the copy
*/

bool Is2MorePrime(int const& x) { //best practice 
	//x = x + 2; 
	return IsPrime(x); 
}