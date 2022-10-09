// AccumulatorTemplate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <string>
using std::string;
#include <iostream>
using std::cout;
using std::endl;
#include "Person.h"
#include "Accumulator.h"


int main()
{
    Accum<int> integers(0);
    integers += 3;
    integers += 7;
    cout << integers.GetTotal() << endl;              

    Accum<string> strings("");
    strings += "hello";
    strings += " world";
    cout << strings.GetTotal() << endl;

    //integers += "testing"; will not be allowed due to 
                            // C++ being strongly-typed language and type safety

    //Person start("", "", 0);
    Accum<Person> people(0);
    Person p1("Kate", "Gregory", 123);
    Person p2("Daniel", "Zammit", 456);
    people += p1;
    people += p2;
    cout << people.GetTotal() << endl ;

    system("pause");
    return 0;
    
}

