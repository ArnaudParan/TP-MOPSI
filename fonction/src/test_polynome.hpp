#ifndef TEST_POLYNOME_HPP
#define TEST_POLYNOME_HPP 

#include <cppunit/extensions/HelperMacros.h>
#include <vector>
#include "polynome.hpp"

class FonctionCarre;

class Test_Polynome : public CPPUNIT_NS::TestCase {
	CPPUNIT_TEST_SUITE(Test_Polynome);
	CPPUNIT_TEST(test_evaluation);
	CPPUNIT_TEST(test_derive);
	CPPUNIT_TEST_SUITE_END();

	public:
	void setUp();
	void tearDown(); 
	void test_evaluation();
	void test_derive();

	private:
	Polynome *poly;
};

#endif /* TEST_POLYNOME_HPP */
