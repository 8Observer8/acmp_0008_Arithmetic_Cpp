/* 
 * File:   CArithmetic.h
 * Author: Ivan
 *
 * Created on May 23, 2013, 5:40 AM
 */

#ifndef CARITHMETIC_H
#define	CARITHMETIC_H

#include <string>

/**
 * Implementation of the class CArithmetic
 */
class CArithmetic {
public:
    /**
     * Whether the product
     * 
     * @param a The a
     * @param b The b
     * @param c The c
     * @return YES - if c==a*b; NO if c!=a*b
     */
     std::string arithmetic(int a, int b, int c);
};

#endif	/* CARITHMETIC_H */

