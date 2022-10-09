#pragma once
template <class T>
class Accum
{
private:
	T total;
public:
	Accum(T start) : total(start) {};
	T operator+=(T const& t) { return total = total + t; };
	T GetTotal() const { return total; }
};

/*Template Specialisation*/
/*
* If we want to add a class Person for instance,
* without overloading the + operator on Person it is possible
* to create a template specialisation to deal with a specific type.
* Design wise this would make more sense to have accumulation and addition in 
* the Accumulator class instead of in Person. The specialisation
* does not have to be an exact substitute for T. If we just want to
* accumulate their arbitrary numbers and not names, then no need to
* have a T(Person) total. 
*/


template <> // still a template
class Accum<Person> // specifically for Person
{
private:
	int total;
public:
	Accum(int start) : total(start) {};
	int operator+=(Person const& t) { return total = total + t.GetNumber(); };
	int GetTotal() const { return total; }
};