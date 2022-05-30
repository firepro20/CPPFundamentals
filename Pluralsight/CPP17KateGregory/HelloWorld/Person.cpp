#include "Person.h"
#include <iostream>

using std::cout;
using std::endl;

Person::Person(std::string first, std::string last, int arbitrary)
	: firstname(first), lastname(last), arbitrarynumber(arbitrary)
{
	cout << "constructing " << getName() << endl;
}

Person::Person() : arbitrarynumber(0)
{
	cout << "constructing " << getName() << endl;
}

Person::~Person() {
	cout << "destructing " << getName() << endl;
}

std::string Person::getName() const 
{
	return firstname + " " + lastname;
}