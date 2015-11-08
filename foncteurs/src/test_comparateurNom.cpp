#include "test_comparateurNom.hpp"

void Test_ComparateurNom::setUp()
{
	this->compteur = new int;
	(*this->compteur) = 0;
	this->plusGrand = new Eleve("arnaud", 10);
	this->plusPetit = new Eleve("bastien", 20);
	this->comp = new ComparateurNom(this->compteur);
}

void Test_ComparateurNom::tearDown()
{
	delete this->plusGrand;
	delete this->plusPetit;
	delete this->comp;
	delete this->compteur;
	this->plusGrand = NULL;
	this->plusPetit = NULL;
	this->comp = NULL;
	this->compteur = NULL;
}

void Test_ComparateurNom::test_comparaison()
{
	bool testTrue = (*(this->comp))(*(this->plusGrand), *(this->plusPetit));
	bool aIncremente = (*this->compteur) == 1;
	CPPUNIT_ASSERT(testTrue);
	CPPUNIT_ASSERT(aIncremente);
}
