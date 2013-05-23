/*
 * File:   newtestclass.cpp
 * Author: Ivan
 *
 * Created on May 23, 2013, 5:57:08 AM
 */

#include "newtestclass.h"
#include "../CArithmetic.h"


CPPUNIT_TEST_SUITE_REGISTRATION(newtestclass);

newtestclass::newtestclass() {
}

newtestclass::~newtestclass() {
}

void newtestclass::setUp() {
}

void newtestclass::tearDown() {
}

void newtestclass::testArithmetic_YES() {
    int a = 5;
    int b = 6;
    int c = 30;
    CArithmetic cArithmetic;
    std::string result = cArithmetic.arithmetic(a, b, c);
    std::string expected = "YES";
    CPPUNIT_ASSERT_EQUAL(expected, result);
}

void newtestclass::testArithmetic_NO() {
    int a = 5;
    int b = 6;
    int c = 10;
    CArithmetic cArithmetic;
    std::string result = cArithmetic.arithmetic(a, b, c);
    std::string expected = "NO";
    CPPUNIT_ASSERT_EQUAL(expected, result);
}

void newtestclass::testArithmetic_negative_A_YES() {
    int a = -5;
    int b = 6;
    int c = -30;
    CArithmetic cArithmetic;
    std::string result = cArithmetic.arithmetic(a, b, c);
    std::string expected = "YES";
    CPPUNIT_ASSERT_EQUAL(expected, result);
}

void newtestclass::testArithmetic_negative_A_NO() {
    int a = -5;
    int b = 6;
    int c = 31;
    CArithmetic cArithmetic;
    std::string result = cArithmetic.arithmetic(a, b, c);
    std::string expected = "NO";
    CPPUNIT_ASSERT_EQUAL(expected, result);
}

void newtestclass::testArithmetic_negative_B_YES() {
    int a = 5;
    int b = -6;
    int c = -30;
    CArithmetic cArithmetic;
    std::string result = cArithmetic.arithmetic(a, b, c);
    std::string expected = "YES";
    CPPUNIT_ASSERT_EQUAL(expected, result);
}

void newtestclass::testArithmetic_negative_B_NO() {
    int a = 5;
    int b = -6;
    int c = -31;
    CArithmetic cArithmetic;
    std::string result = cArithmetic.arithmetic(a, b, c);
    std::string expected = "NO";
    CPPUNIT_ASSERT_EQUAL(expected, result);
}

void newtestclass::testArithmetic_negative_C_NO() {
    int a = 5;
    int b = 6;
    int c = -30;
    CArithmetic cArithmetic;
    std::string result = cArithmetic.arithmetic(a, b, c);
    std::string expected = "NO";
    CPPUNIT_ASSERT_EQUAL(expected, result);
}

void newtestclass::testArithmetic_negative_All_YES() {
    int a = -5;
    int b = -6;
    int c = 30;
    CArithmetic cArithmetic;
    std::string result = cArithmetic.arithmetic(a, b, c);
    std::string expected = "YES";
    CPPUNIT_ASSERT_EQUAL(expected, result);
}

void newtestclass::testArithmetic_negative_All_NO() {
    int a = -5;
    int b = -6;
    int c = -31;
    CArithmetic cArithmetic;
    std::string result = cArithmetic.arithmetic(a, b, c);
    std::string expected = "NO";
    CPPUNIT_ASSERT_EQUAL(expected, result);
}

void newtestclass::testArithmetic_zerro_A_YES() {
    int a = 0;
    int b = 6;
    int c = 0;
    CArithmetic cArithmetic;
    std::string result = cArithmetic.arithmetic(a, b, c);
    std::string expected = "YES";
    CPPUNIT_ASSERT_EQUAL(expected, result);
}

void newtestclass::testArithmetic_zerro_B_YES() {
    int a = 5;
    int b = 0;
    int c = 0;
    CArithmetic cArithmetic;
    std::string result = cArithmetic.arithmetic(a, b, c);
    std::string expected = "YES";
    CPPUNIT_ASSERT_EQUAL(expected, result);
}

void newtestclass::testArithmetic_zerro_All() {
    int a = 0;
    int b = 0;
    int c = 0;
    CArithmetic cArithmetic;
    std::string result = cArithmetic.arithmetic(a, b, c);
    std::string expected = "YES";
    CPPUNIT_ASSERT_EQUAL(expected, result);
}
