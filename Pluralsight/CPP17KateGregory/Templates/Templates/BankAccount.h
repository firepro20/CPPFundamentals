#pragma once
#include <string>
class BankAccount
{
public:
	BankAccount(std::string name, int balance);
	~BankAccount();
private:
	std::string holderName;
	int BalanceinPennies;
public:
	std::string GetHolderName() { return holderName; }
	bool operator<(BankAccount const& b) const;
};

