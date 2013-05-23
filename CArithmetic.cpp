/* 
 * File:   CArithmetic.cpp
 * Author: Ivan
 * 
 * Created on May 23, 2013, 5:40 AM
 */

#include "CArithmetic.h"

std::string CArithmetic::arithmetic(int a, int b, int c) {
    std::string result = "ERROR";
    
    if (c == a * b) {
        result = "YES";
    }
    else {
        result = "NO";
    }
    
    return result;
}