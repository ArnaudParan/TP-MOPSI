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
	double image = 1.;
	double antecedant_attendu = 1.;
	double antecedant = (this->foncTest)->inverse(image);
	double erreur = ABS(antecedant - antecedant_attendu);
	double erreur_max = 1e-5;
	CPPUNIT_ASSERT(erreur <= erreur_max);
}

FonctionCarre::FonctionCarre(){}

FonctionCarre::~FonctionCarre(){}

double FonctionCarre::operator()(double antecedant)
{
	return antecedant * antecedant;
}

Fonction* FonctionCarre::derivee() const
{
	//TODO pas encore implémenté
	FonctionCarre *carre = new FonctionCarre();
	return carre;
}

Fonction* FonctionCarre::integrale() const
{
	//TODO pas encore implémenté
	FonctionCarre *carre = new FonctionCarre();
	return carre;
}
