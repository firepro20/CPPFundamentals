#include "BankAccount.h"

BankAccount::BankAccount(std::string name, int balance) //initializer list
	:holderName(name), BalanceinPennies(balance)
{
	
}



BankAccount::~BankAccount()
{
}

bool BankAccount::operator<(BankAccount const& b) const
{
	return BalanceinPennies < b.BalanceinPennies;
}
