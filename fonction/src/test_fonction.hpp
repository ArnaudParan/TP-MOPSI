#ifndef TEST_FONCTION_HPP
#define TEST_FONCTION_HPP 

#include <cppunit/extensions/HelperMacros.h>
#include "fonction.hpp"

class FonctionCarre;

class Test_Fonction : public CPPUNIT_NS::TestCase {
	CPPUNIT_TEST_SUITE(Test_Fonction);
	CPPUNIT_TEST(test_inverse);
	CPPUNIT_TEST_SUITE_END();

	public:
	void setUp();
	void tearDown(); 
	void test_inverse();

	private:
	FonctionCarre *foncTest;
};

class FonctionCarre : public Fonction {
	public:
	FonctionCarre();
	virtual ~FonctionCarre();
	double operator()(double antecedant);
	Fonction* derivee() const;
	Fonction* integrale() const;
};

#endif /* TEST_FONCTION_HPP */
