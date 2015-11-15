#include "test_trigo.hpp"

void  Test_Trigo::setUp()
{
	this->cosinus = NULL;
	this->cosinus = new Trigo("cos");
}

void Test_Trigo::tearDown()
{
	delete this->cosinus;
	this->cosinus = NULL;
}

void Test_Trigo::test_eval()
{
	double antecedant = 0.;
	double im_attendue = 1.;
	double image = (*(this->cosinus))(antecedant);
	CPPUNIT_ASSERT_EQUAL(image, im_attendue);
}

void Test_Trigo::test_to_string()
{
	std::string texte_attendu = "cos";
	std::string texte = this->cosinus->to_string();
	CPPUNIT_ASSERT_EQUAL(texte, texte_attendu);
}
