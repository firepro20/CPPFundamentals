#pragma once
#include <iostream>
class Person
{
private:
	std::string firstname;
	std::string lastname;
	int arbitrarynumber;
public:
	Person(std::string first, std::string last, int arbitrary);
	Person();
	~Person();
	std::string getName() const;
	int GetNumber() const { return arbitrarynumber; }
	void SetNumber(int number) { arbitrarynumber = number; }
};

