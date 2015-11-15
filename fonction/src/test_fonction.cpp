#include "test_fonction.hpp"

#define ABS(val) ((val >= 0) ? val : -val)

void Test_Fonction::setUp()
{
	this->foncTest = NULL;
	this->foncTest = new FonctionCarre;
}

void Test_Fonction::tearDown()
{
	delete this->foncTest;
	this->foncTest = NULL;
}

void Test_Fonction::test_inverse()
{
	double image = 2.;
	double antecedant = (this->foncTest)->inverse(image);
	double image_calculee = (*(this->foncTest))(antecedant);
	double erreur = ABS(image_calculee - image);
	double erreur_max = 1e-5;
	CPPUNIT_ASSERT(erreur <= erreur_max);
}

void Test_Fonction::test_derivee()
{
	Fonction* derivee = this->foncTest->derivee();
	double antecedant = 1.;
	double image_attendue = 2.;
	double image = (*derivee)(antecedant);
	double erreur = ABS(image - image_attendue);
	double erreur_max = 1e-5;

	CPPUNIT_ASSERT(erreur <= erreur_max);

	delete derivee;
}

FonctionCarre::FonctionCarre()
{
}

FonctionCarre::~FonctionCarre()
{
}

double FonctionCarre::operator()(double antecedant) const
{
	return antecedant * antecedant;
}
