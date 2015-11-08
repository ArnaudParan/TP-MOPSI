#ifndef TEST_COMPARATEURNOTE_HPP
#define TEST_COMPARATEURNOTE_HPP 

#include <cppunit/extensions/HelperMacros.h>
#include "comparateurNote.hpp"

class Test_ComparateurNote : public CPPUNIT_NS::TestCase {
	CPPUNIT_TEST_SUITE(Test_ComparateurNote);
	CPPUNIT_TEST(test_comparaison);
	CPPUNIT_TEST_SUITE_END();

	public:
	void setUp();
	void tearDown(); 

	private:
	void test_comparaison();

	Eleve *plusGrand;
	Eleve *plusPetit;
	ComparateurNote *comp;
	int *compteur;
};



#endif /* TEST_COMPARATEURNOMS_HPP */
