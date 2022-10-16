// PointersReferences.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Person.h"
using namespace std;

int main()
{

	int a = 3;
	cout << "a is " << a << endl;
	int& rA = a;
	rA = 5;
	cout << "a is " << a << endl;

	Person Daniel("Daniel", "Zammit", 234);
	Person& rDaniel = Daniel; //alias for Daniel
	rDaniel.SetNumber(345); // so will affect Daniel
	cout << "rDaniel: " << rDaniel.getName() << " " << rDaniel.GetNumber() << endl;

	// A reference has to refer to something real, so it can never
	// be initialised to nothing. If you really never want something to 
	// be null, use a reference not a pointer.

	// Everytime you used a pointer checking if it's null can have a
	// performance impact, especially with many pointer checks

	int* pA = &a;
	*pA = 4; // dereference
	cout << "a is " << a << endl;
	int b = 100;
	pA = &b; // point to where b is
	(*pA)++; // dereference, get 100 and increment
	cout << "a " << a << ", *pA " << *pA << endl;

	Person* pDaniel = &Daniel;
	(*pDaniel).SetNumber(235);
	pDaniel->SetNumber(236);
	cout << "Daniel: " << Daniel.getName() << " " << Daniel.GetNumber() << endl;
	cout << "pDaniel: " << pDaniel->getName() << " " << pDaniel->GetNumber() << endl;


	// int* badPointer; 
	// // not allowed, uninitialised pointer, can use nullptr
	// but then you have to check, which is expensive
	// *badPointer = 3;
	// cout << *badPointer << endl;

	// Don't use pointer as first choice if you have indirection

	// references are set, pointers can be rearranged to 
	// repoint somehwere else

	return 0;
}
