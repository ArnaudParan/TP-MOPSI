#include <cstdlib>
#include <vector>
#include <iostream>
#include <cppunit/TestRunner.h>
#include <cppunit/TestResult.h>
#include <cppunit/TestResultCollector.h>
#include <cppunit/BriefTestProgressListener.h>
#include <cppunit/extensions/TestFactoryRegistry.h>
#include "test_comparateurNom.hpp"
#include "test_comparateurNote.hpp"
#include "test_eleve.hpp"

CPPUNIT_TEST_SUITE_REGISTRATION(Test_ComparateurNom);
CPPUNIT_TEST_SUITE_REGISTRATION(Test_ComparateurNote);
CPPUNIT_TEST_SUITE_REGISTRATION(Test_Eleve);

int main()
{
	CPPUNIT_NS::TestResult controlleur;

	CPPUNIT_NS::TestResultCollector resultat;
	controlleur.addListener(&resultat);

	CPPUNIT_NS::BriefTestProgressListener progression;
	controlleur.addListener(&progression);

	CPPUNIT_NS::TestRunner lanceur;
	lanceur.addTest(CPPUNIT_NS::TestFactoryRegistry::getRegistry().makeTest());
	lanceur.run(controlleur);

	return resultat.wasSuccessful() ? 0 : 1;
}
