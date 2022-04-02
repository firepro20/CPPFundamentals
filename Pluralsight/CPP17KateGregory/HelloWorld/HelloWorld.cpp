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

	std::cout << "Hello Motto!" << std::endl;

	system("pause");
	return 0;
}

