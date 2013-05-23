/* 
 * File:   main.cpp
 * Author: Ivan
 *
 * Created on May 23, 2013, 5:38 AM
 */

#include <iostream>
#include "CArithmetic.h"

int main(int argc, char** argv) {
    CArithmetic arith;

    int a = 5;
    int b = 6;
    int c = 30;
    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;
    std::cout << "c = " << c << std::endl;
    std::cout << arith.arithmetic(a, b, c) << std::endl;
    std::cout << std::endl;

    a = 5;
    b = 6;
    c = 10;
    std::cout << "a = " << a << std::endl;
    std::cout << "a = " << b << std::endl;
    std::cout << "a = " << c << std::endl;
    std::cout << arith.arithmetic(a, b, c) << std::endl;

    return 0;
}

