//
//  Employee.cpp
//  people-resource
//
//  Created by Trieu on 6/4/20.
//  Copyright © 2020 Trieu. All rights reserved.
//

#include <string>
#include <iostream>

#include "Employee.h"

using namespace std;

Employee::Employee(const string &id,
                   const string &name,
                   const string &dateOfBirth,
                   const string &address,
                   const string &department)
: _id(id), _name(name), _dateOfBirth(dateOfBirth), _address(address), _department(department)
{
}
Employee::Employee()
{
}

const string &Employee::id() const
{
    return _id;
}
const string &Employee::name() const
{
    return _name;
}
const string &Employee::dateOfBirth() const
{
    return _dateOfBirth;
}
const string &Employee::address() const
{
    return _address;
}
const string &Employee::department() const
{
    return _department;
}

void Employee::printInfo() const
{
    cout << _id << "\t\t" << _name << "\t\t" << _dateOfBirth << "\t\t"
    << _address << "\t\t" << _department << "\n" << endl;
}
