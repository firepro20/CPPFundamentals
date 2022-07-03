#include "Person.h"
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

//compare person to person by arbitrary number
bool Person::operator<(Person const& p) const
{
	return arbitrarynumber < p.arbitrarynumber;
}
// person compare to any integer
bool Person::operator<(int i) const
{
	return arbitrarynumber < i;
}
// integer compared to person
bool operator<(int i, Person const& p)
{
	return i < p.GetNumber(); // return i < p.arbitrarynumber.
	// this will not work unless you declare a friend.
	// ideally avoid friends just use public functions
	// friend should only be used when the other option is adding
	// a public function that would break encapsulation, which would
	// not be desired
}
