#include "test_polynome.hpp"

void Test_Polynome::setUp()
{
	this->poly = NULL;
	this->coeff = NULL;
	double tabCoeffs[] = {2., 2., 1.};
	unsigned int tailleTab = sizeof(tabCoeffs) / sizeof(tabCoeffs[0]);
	this->coeff = new std::vector<double>(tabCoeffs, tabCoeffs + tailleTab);
	this->poly = new Polynome(*(this->coeff));
}

void Test_Polynome::tearDown()
{
	delete this->poly;
	delete this->coeff;
	this->poly = NULL;
	this->coeff = NULL;
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
	unsigned int tailleTab = sizeof(tabCoeffs) / sizeof(tabCoeffs[0]);
	std::vector<double> coeffs(tabCoeffs, tabCoeffs + tailleTab);
	Polynome derivee_attendue(coeffs);
	Polynome* derivee = this->poly->derivee();
	CPPUNIT_ASSERT_EQUAL((*derivee), derivee_attendue);
	delete derivee;
}

void Test_Polynome::test_integrale()
{
	double tabCoeffs[] = {0., 2., 1., 1./3.};
	unsigned int tailleTab = sizeof(tabCoeffs) / sizeof(tabCoeffs[0]);
	std::vector<double> coeffs(tabCoeffs, tabCoeffs + tailleTab);
	Polynome integrale_attendue(coeffs);
	Polynome* integrale = this->poly->integrale();
	CPPUNIT_ASSERT_EQUAL((*integrale), integrale_attendue);
	delete integrale;
}
