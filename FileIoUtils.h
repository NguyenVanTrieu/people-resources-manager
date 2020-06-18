//
//  FileIoUtils.h
//  people-resource
//
//  Created by Trieu on 6/4/20.
//  Copyright © 2020 Trieu. All rights reserved.
//

#ifndef FileIoUtils_hpp
#define FileIoUtils_hpp

#include <stdio.h>
#include <list>
#include <string>
using namespace std;

class Employee;
class CheckPoint;
class EmployeeDTO;
class FileIoUtils {
    
private:
    static string _resourceFile;

public:
    static void addEmployee(Employee *employee);
    static void addListEmployees(list<Employee> & employees);
    static void loadAllEmployee(list<Employee> & employees);
    static list<Employee> & readEmployeeFromCsv(string & path);
    static bool checkExist(string & path);
    static void addCheckPoint(const CheckPoint & checkpoint); // Write to a file, indentify by employee_id
    static list<CheckPoint> loadCheckPoint(const string & employeeId); // Get checkpoit of a employee by employee_id
    static void rewriteCheckPoint(const string & employeeId, const list<CheckPoint> & checkPoints);
    static void appendCheckPoint(const string & employeeId, const list<CheckPoint> & checkPoints);
    static const string genCheckpointFileName(const string & employeeId); // Specify checkpoint file by employeeId
    static const string genCheckpointHistory(const list<EmployeeDTO> & employees, int month, int year);
    static const string genCheckpointHistoryMulti(const vector<list<EmployeeDTO>> & employeesVector, int month, int year);
};
#endif /* FileIoUtils_hpp */
