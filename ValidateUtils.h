//
//  ValidateUtils.hpp
//  people-resource
//
//  Created by Trieu on 6/5/20.
//  Copyright © 2020 Trieu. All rights reserved.
//

#ifndef ValidateUtils_h
#define ValidateUtils_h

#include <stdio.h>
#include <string>
#include <list>

using namespace std;

class Employee;

class ValidateUtils
{
public:
    static const list<string> validateEmployee(const Employee &em, const list<Employee> & currentEms);
    static void printValid(list<string> & valid);
    static void print(list<string> & listStr);
    static bool validateDate (const string &date);
    static bool validateStatus(const string &status);
};
#endif /* ValidateUtils_h */
