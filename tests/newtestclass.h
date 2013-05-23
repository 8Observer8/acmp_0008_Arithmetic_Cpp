/*
 * File:   newtestclass.h
 * Author: Ivan
 *
 * Created on May 23, 2013, 5:57:08 AM
 */

#ifndef NEWTESTCLASS_H
#define	NEWTESTCLASS_H

#include <cppunit/extensions/HelperMacros.h>

class newtestclass : public CPPUNIT_NS::TestFixture {
    CPPUNIT_TEST_SUITE(newtestclass);

    CPPUNIT_TEST(testArithmetic_YES);
    CPPUNIT_TEST(testArithmetic_NO);
    CPPUNIT_TEST(testArithmetic_negative_A_YES);
    CPPUNIT_TEST(testArithmetic_negative_A_NO);
    CPPUNIT_TEST(testArithmetic_negative_B_YES);
    CPPUNIT_TEST(testArithmetic_negative_B_NO);
    CPPUNIT_TEST(testArithmetic_negative_C_NO);
    CPPUNIT_TEST(testArithmetic_negative_All_YES);
    CPPUNIT_TEST(testArithmetic_negative_All_NO);
    CPPUNIT_TEST(testArithmetic_zerro_A_YES);
    CPPUNIT_TEST(testArithmetic_zerro_B_YES);
    CPPUNIT_TEST(testArithmetic_zerro_All);

    CPPUNIT_TEST_SUITE_END();

public:
    newtestclass();
    virtual ~newtestclass();
    void setUp();
    void tearDown();

private:
    void testArithmetic_YES();
    void testArithmetic_NO();
    void testArithmetic_negative_A_YES();
    void testArithmetic_negative_A_NO();
    void testArithmetic_negative_B_YES();
    void testArithmetic_negative_B_NO();
    void testArithmetic_negative_C_NO();
    void testArithmetic_negative_All_YES();
    void testArithmetic_negative_All_NO();
    void testArithmetic_zerro_A_YES();
    void testArithmetic_zerro_B_YES();
    void testArithmetic_zerro_All();
};

#endif	/* NEWTESTCLASS_H */

