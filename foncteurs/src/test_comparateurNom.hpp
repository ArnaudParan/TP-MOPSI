#ifndef TEST_COMPARATEURNOMS_HPP
#define TEST_COMPARATEURNOMS_HPP 

#include <cppunit/extensions/HelperMacros.h>
#include "comparateurNom.hpp"

class Test_ComparateurNom : public CPPUNIT_NS::TestCase {
	CPPUNIT_TEST_SUITE(Test_ComparateurNom);
	CPPUNIT_TEST(test_comparaison);
	CPPUNIT_TEST_SUITE_END();

	public:
	void setUp();
	void tearDown(); 

	private:
	void test_comparaison();

	Eleve *plusGrand;
	Eleve *plusPetit;
	ComparateurNom *comp;
	int *compteur;
};



#endif /* TEST_COMPARATEURNOMS_HPP */
