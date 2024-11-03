#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string>

using namespace std;

class Person {
protected:
    string ten;  // Name
    string sdt;  // Phone Number

public:
    Person(const string& ten, const string& sdt);
    void display() const;
};

#endif // PERSON_H
