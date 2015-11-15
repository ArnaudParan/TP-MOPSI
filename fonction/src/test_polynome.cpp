#include "test_polynome.hpp"

void Test_Polynome::setUp()
{
	this->poly = NULL;
	double tabCoeffs[] = {2., 2., 1.};
	this->poly = new Polynome(tabCoeffs, 3);
}

void Test_Polynome::tearDown()
{
	delete this->poly;
	this->poly = NULL;
}

void Test_Polynome::test_evaluation()
{
	double antecedant = 1.;
	double image_attendue = 1. + (1. + antecedant) * (1. + antecedant);
	double image = (*(this->poly))(antecedant);
	CPPUNIT_ASSERT_EQUAL(image, image_attendue);
}

void Test_Polynome::test_derive()
{
	double tabCoeffs[] = {2., 2.};
	Polynome derivee_attendue(tabCoeffs, 2);
	Polynome* derivee = this->poly->derivee();
	CPPUNIT_ASSERT_EQUAL((*derivee), derivee_attendue);
	delete derivee;
}
