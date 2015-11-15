#include <cstdlib>
#include <vector>
#include <iostream>
#include <cppunit/TestRunner.h>
#include <cppunit/TestResult.h>
#include <cppunit/TestResultCollector.h>
#include <cppunit/BriefTestProgressListener.h>
#include <cppunit/extensions/TestFactoryRegistry.h>

#include "test_fonction.hpp"
#include "test_polynome.hpp"
#include "test_trigo.hpp"

CPPUNIT_TEST_SUITE_REGISTRATION(Test_Fonction);
CPPUNIT_TEST_SUITE_REGISTRATION(Test_Polynome);
CPPUNIT_TEST_SUITE_REGISTRATION(Test_Trigo);

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
