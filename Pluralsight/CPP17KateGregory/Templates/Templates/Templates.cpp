// Defines the entry point for the console application
#include <string>
using std::string;
#include <iostream>
using std::cout;
using std::endl;
#include "Person.h"
#include "BankAccount.h"

template <class T>
T mymax(T const& t1, T const& t2)
{
    return t1 < t2 ? t2 : t1;
}

int main()
{
    cout << "max of 33 and 44 is " << mymax(33, 44) << endl;
    string s1 = "hello";
    string s2 = "world"; // w larger than h, alphabetical
    cout << "max of " << s1 << " and " << s2 << " is " << mymax(s1, s2) << endl;
    Person p1("Kate", "Gregory", 123);
    Person p2("Someone", "Else", 456); // using overload operator comparison with arbitrary number
    cout << "max of " << p1.getName() << " and " << p2.getName() << 
        " is " << mymax(p1, p2).getName() << endl;
    // error C2678: binary '<': no operator found which takes 
    // a left-hand operand of type 'const T' 
    // (or there is no acceptable conversion) (without a proper operator overload)
    BankAccount b1 ("Daniel", 300);
    BankAccount b2 ("Sarah", 200);

    cout << "max of " << b1.GetHolderName() << " and " <<
        b2.GetHolderName() << " is " << mymax(b1, b2).GetHolderName() << endl;
    system("pause");
}


