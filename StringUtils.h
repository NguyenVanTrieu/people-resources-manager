//
//  StringUtils.hpp
//  people-resource
//
//  Created by Trieu on 6/16/20.
//  Copyright © 2020 Trieu. All rights reserved.
//

#ifndef StringUtils_h
#define StringUtils_h

#include <stdio.h>
#include <string>
#include <string>
#include <list>

using namespace std;
class CheckPoint;
class StringUtils {
    
private:
    const static string WHITESPACE;
public:
    static bool containIgnoreCase(const string & str1, const string & str2);
    static void toLower(string & str);
    static void toUpper(string & str);
    static string ltrim(const std::string& s);
    static string trim(const std::string& s);
    static string rtrim(const std::string& s);
};
#endif /* StringUtils_h */
