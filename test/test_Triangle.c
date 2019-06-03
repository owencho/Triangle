#include "unity.h"
#include "Triangle.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_getTriangleTypename_given_10_10_10_expect_EquilateralTriangle(void)
{
    char *TriangleType = getTriangleTypename(10,10,10) ;
    TEST_ASSERT_EQUAL_STRING("equilateral",TriangleType);
}

void test_getTriangleTypename_given_120_120_9_expect_IsoscelesTriangle(void)
{
    char *TriangleType = getTriangleTypename(120,120,9) ;
    TEST_ASSERT_EQUAL_STRING("isosceles",TriangleType);
}

void test_getTriangleTypename_given_24_9_24_expect_IsoscelesTriangle(void)
{
    char *TriangleType = getTriangleTypename(24,9,24) ;
    TEST_ASSERT_EQUAL_STRING("isosceles",TriangleType);
}

void test_getTriangleTypename_given_96_130_130_expect_IsoscelesTriangle(void)
{
    char *TriangleType = getTriangleTypename(96,130,130) ;
    TEST_ASSERT_EQUAL_STRING("isosceles",TriangleType);
}

void test_getTriangleTypename_given_104_81_92_expect_ScaleneTriangle(void)
{
    char *TriangleType = getTriangleTypename(104,81,92) ;
    TEST_ASSERT_EQUAL_STRING("scalene",TriangleType);
}
void test_getTriangleTypename_given_101_0_91_expect_InvalidTriangle(void)
{
    char *TriangleType = getTriangleTypename(101,0,91) ;
    TEST_ASSERT_EQUAL_STRING("invalid (side cant be zero)",TriangleType);
}
void test_getTriangleTypename_given_0_23_97_expect_InvalidTriangle(void)
{
    char *TriangleType = getTriangleTypename(0,23,97) ;
    TEST_ASSERT_EQUAL_STRING("invalid (side cant be zero)",TriangleType);
}
void test_getTriangleTypename_given_71_11_0_expect_InvalidTriangle(void)
{
    char *TriangleType = getTriangleTypename(71,11,0) ;
    TEST_ASSERT_EQUAL_STRING("invalid (side cant be zero)",TriangleType);
}

void test_getTriangleTypename_given_neg1_112_10_expect_InvalidTriangle(void)
{
    char *TriangleType = getTriangleTypename(-1,112,10) ;
    TEST_ASSERT_EQUAL_STRING("invalid (side cant be negative)",TriangleType);
}

void test_getTriangleTypename_given_711_neg11_30_expect_InvalidTriangle(void)
{
    char *TriangleType = getTriangleTypename(711,-11,30) ;
    TEST_ASSERT_EQUAL_STRING("invalid (side cant be negative)",TriangleType);
}

void test_getTriangleTypename_given_77_121_neg200_expect_InvalidTriangle(void)
{
    char *TriangleType = getTriangleTypename(77,121,-200) ;
    TEST_ASSERT_EQUAL_STRING("invalid (side cant be negative)",TriangleType);
}






