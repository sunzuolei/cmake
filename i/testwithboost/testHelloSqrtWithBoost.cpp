//#define BOOST_AUTO_TEST_MAIN
#define BOOST_TEST_MAIN
#include <stdio.h>
#include "sqrt.h"
#include "sayHello.h"
#include <boost/test/included/unit_test.hpp>

//using boost::unit_test_framework::test_suite;
//using boost::unit_test_framework::test_case;

BOOST_AUTO_TEST_CASE(testSqrtA)
{
	double b = 25.0;
	double a = 0.0;
	
	a = getSqrt(b);
	printf("\n");
	printf("**************************\n");
	printf("Testing sqrt lib:\n a is %.lf, b is %.lf\n\n", a, b);
	printf("**************************\n");
	printf("\n");
}
BOOST_AUTO_TEST_CASE(testSqrtB)
{
	double b = 16;
	double a;
	printf("\n");
	printf("**************************\n");
	printf("Testing sqrt lib:\n a is %.lf, b is %.lf\n\n", a, b);
	printf("**************************\n");
	printf("\n");
}
BOOST_AUTO_TEST_CASE(testHello)
{
	sayHello();
}