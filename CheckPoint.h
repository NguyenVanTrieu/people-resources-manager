//
//  CheckPoint.hpp
//  people-resource
//
//  Created by Trieu on 6/11/20.
//  Copyright © 2020 Trieu. All rights reserved.
//

#ifndef CheckPoint_h
#define CheckPoint_h

#include <stdio.h>
#include <string>
#include <sstream>
using namespace std;


class CheckPoint {

private:
    string _employeeId;
    string _date;
    string _value;

public:
    CheckPoint(const string &_employeeId,
               const string &_date,
               const string &_value);
    
    CheckPoint();

    bool operator <(const CheckPoint & _checkpoint) const;

public:
    
    const string &employeeId() const;
    const string &date() const;
    const string &value() const;
    
    void printInfo() const;
    void printValue() const;
};

#endif /* CheckPoint_h */
