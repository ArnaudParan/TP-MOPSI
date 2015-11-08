#include "test_comparateurNote.hpp"

void Test_ComparateurNote::setUp()
{
	this->compteur = new int;
	(*this->compteur) = 0;
	this->plusGrand = new Eleve("bastien", 20);
	this->plusPetit = new Eleve("arnaud", 10);
	this->comp = new ComparateurNote(this->compteur);
}

void Test_ComparateurNote::tearDown()
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

void Test_ComparateurNote::test_comparaison()
{
	bool testTrue = (*(this->comp))(*(this->plusGrand), *(this->plusPetit));
	bool aIncremente = (*this->compteur) == 1;
	CPPUNIT_ASSERT(testTrue);
	CPPUNIT_ASSERT(aIncremente);
}
