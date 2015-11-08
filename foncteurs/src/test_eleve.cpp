#include "test_eleve.hpp"
#include "to_string.hpp"

void Test_Eleve::setUp()
{
	this->nom = new std::string("Matthieu");
	this->note = new int(10);
	this->eleve = new Eleve(*(this->nom), *(this->note));
}

void Test_Eleve::tearDown()
{
	delete this->nom;
	delete this->note;
	delete this->eleve;
	this->nom = NULL;
	this->note = NULL;
	this->eleve = NULL;
}

void Test_Eleve::test_to_string()
{
	std::string chaineAttendue = "(" + *(this->nom) + ", " + std::to_string(*(this->note)) + ")";
	std::string chaineReele = (this->eleve)->to_string();
	CPPUNIT_ASSERT_EQUAL(chaineAttendue, chaineReele);
}

