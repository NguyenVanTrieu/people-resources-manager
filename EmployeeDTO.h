//
//  EmployeeDTO.hpp
//  people-resource
//
//  Created by Trieu on 6/16/20.
//  Copyright © 2020 Trieu. All rights reserved.
//

#ifndef EmployeeDTO_h
#define EmployeeDTO_h

#include <stdio.h>
#include <string>
#include <list>

using namespace std;

class EmployeeDTO
{
public:
    EmployeeDTO(const string &id,
                const string &name,
                const string &department,
                const list<string> &checkpoints);
    
private:
    string _id;
    string _name;
    string _department;
    list<string> _checkpoints;
    
public:
    const list<string> & checkpoints() const;
};
#endif /* EmployeeDTO_h */