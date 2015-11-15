#ifndef TEST_TRIGO_HPP
#define TEST_TRIGO_HPP 

#include <cppunit/extensions/HelperMacros.h>
#include "trigo.hpp"

class Test_Trigo : public CPPUNIT_NS::TestCase {
	CPPUNIT_TEST_SUITE(Test_Trigo);
	CPPUNIT_TEST(test_eval);
	CPPUNIT_TEST(test_to_string);
	CPPUNIT_TEST_SUITE_END();

	public:
	void setUp();
	void tearDown(); 
	void test_eval();
	void test_to_string();

	private:
	Trigo *cosinus;
};

#endif /* TEST_TRIGO_HPP */
