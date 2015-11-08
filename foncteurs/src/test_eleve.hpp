#ifndef TEST_ELEVE_HPP
#define TEST_ELEVE_HPP 

#include <cppunit/extensions/HelperMacros.h>
#include "eleve.hpp"

class Test_Eleve : public CPPUNIT_NS::TestCase {
	CPPUNIT_TEST_SUITE(Test_Eleve);
	CPPUNIT_TEST(test_to_string);
	CPPUNIT_TEST_SUITE_END();

	public:
	void setUp();
	void tearDown(); 

	private:
	void test_to_string();

	std::string *nom;
	int *note;
	Eleve *eleve;
};



#endif /* TEST_COMPARATEURNOMS_HPP */
