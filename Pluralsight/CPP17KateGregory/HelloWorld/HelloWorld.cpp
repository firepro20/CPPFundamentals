// HelloWorld.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
//#include "Person.h"
#include "Tweeter.h"

int main()
{
	/*
    std::cout << "Hello World!\n" << std::endl;
	std::cout << "Enter your name:" << std::endl;
	std::string name;
	std::cin >> name;
	std::cout << "Hello " << name << "!" << std::endl;
	*/

	int a1 = 5;
	double a2 = 9.62;

	std::cout << "a2 is actually " << a2 << " but when cast from double to int it is " << static_cast<int>(a2) << std::endl;
	

	Person p1("Daniel", "Zammit", 28);
	{
		Tweeter t1("Someone", "Else", 456, "@whoever");
		std::string name2 = t1.getName();
	}
	std::cout << "after innermost block" << std::endl;
	std::string name = p1.getName();

	std::cout << "t1: " << p1.getName() << " " << p1.GetNumber() << std::endl;

	// Operator Overloading
	Person p2("Someone", "Else", 456);
	std::cout << "p1 is";
	if (!(p1 < p2))
		std::cout << "not ";
	std::cout << "less than 300" << std::endl;

	std::cout << "300 is ";
	if (!(300 < p1))
		std::cout << "not ";
	std::cout << "less than p1" << std::endl;

	system("pause");
	return 0;
}

