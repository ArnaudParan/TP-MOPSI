#include <cstdlib>
#include <vector>
#include <iostream>
#include <algorithm>
#include "eleve.hpp"
#include "comparateurNom.hpp"
#include "comparateurNote.hpp"

int main()
{
	int compteurNom = 0;
	ComparateurNom compNom(&compteurNom);
	int compteurNote = 0;
	ComparateurNote compNote(&compteurNote);

	std::vector<Eleve> elevesNom;
	elevesNom.push_back(Eleve("BENERRAMI", 2));
	elevesNom.push_back(Eleve("BERARD", 4));
	elevesNom.push_back(Eleve("BERKES", 4));
	elevesNom.push_back(Eleve("BLARRE", 3));
	elevesNom.push_back(Eleve("BUBBA", 1));
	elevesNom.push_back(Eleve("COHEN", 4));
	elevesNom.push_back(Eleve("CONSTANTINI", 5));
	elevesNom.push_back(Eleve("CRESSOT", 5));
	elevesNom.push_back(Eleve("DAYAN", 4));
	elevesNom.push_back(Eleve("DESCHAMPS", 4));
	elevesNom.push_back(Eleve("DING", 4));
	elevesNom.push_back(Eleve("DRONNIER", 5));
	elevesNom.push_back(Eleve("EL", 4));
	elevesNom.push_back(Eleve("FENG", 5));
	elevesNom.push_back(Eleve("FLEURY", 3));
	elevesNom.push_back(Eleve("FUJIKAKE", 5));
	elevesNom.push_back(Eleve("GILLIER", 1));
	elevesNom.push_back(Eleve("HAYAT", 5));
	elevesNom.push_back(Eleve("KABBAJ", 3));
	elevesNom.push_back(Eleve("LEBASTARD", 1));
	elevesNom.push_back(Eleve("LEMAIGRE", 5));
	elevesNom.push_back(Eleve("LINA", 1));
	elevesNom.push_back(Eleve("MARGHERITI", 5));
	elevesNom.push_back(Eleve("MARTIN", 1));
	elevesNom.push_back(Eleve("MILLET", 3));
	elevesNom.push_back(Eleve("OUCHTAR", 4));
	elevesNom.push_back(Eleve("PARAN", 4));
	elevesNom.push_back(Eleve("SANH", 5));
	elevesNom.push_back(Eleve("SOULIER", 3));
	elevesNom.push_back(Eleve("TROUSSARD", 4));
	elevesNom.push_back(Eleve("VESSAIRE", 5));
	elevesNom.push_back(Eleve("ZEMMOURI", 5));
	elevesNom.push_back(Eleve("ZOUAKI", 5));

	std::vector<Eleve> elevesNote;
	elevesNote.push_back(Eleve("BENERRAMI", 2));
	elevesNote.push_back(Eleve("BERARD", 4));
	elevesNote.push_back(Eleve("BERKES", 4));
	elevesNote.push_back(Eleve("BLARRE", 3));
	elevesNote.push_back(Eleve("BUBBA", 1));
	elevesNote.push_back(Eleve("COHEN", 4));
	elevesNote.push_back(Eleve("CONSTANTINI", 5));
	elevesNote.push_back(Eleve("CRESSOT", 5));
	elevesNote.push_back(Eleve("DAYAN", 4));
	elevesNote.push_back(Eleve("DESCHAMPS", 4));
	elevesNote.push_back(Eleve("DING", 4));
	elevesNote.push_back(Eleve("DRONNIER", 5));
	elevesNote.push_back(Eleve("EL", 4));
	elevesNote.push_back(Eleve("FENG", 5));
	elevesNote.push_back(Eleve("FLEURY", 3));
	elevesNote.push_back(Eleve("FUJIKAKE", 5));
	elevesNote.push_back(Eleve("GILLIER", 1));
	elevesNote.push_back(Eleve("HAYAT", 5));
	elevesNote.push_back(Eleve("KABBAJ", 3));
	elevesNote.push_back(Eleve("LEBASTARD", 1));
	elevesNote.push_back(Eleve("LEMAIGRE", 5));
	elevesNote.push_back(Eleve("LINA", 1));
	elevesNote.push_back(Eleve("MARGHERITI", 5));
	elevesNote.push_back(Eleve("MARTIN", 1));
	elevesNote.push_back(Eleve("MILLET", 3));
	elevesNote.push_back(Eleve("OUCHTAR", 4));
	elevesNote.push_back(Eleve("PARAN", 4));
	elevesNote.push_back(Eleve("SANH", 5));
	elevesNote.push_back(Eleve("SOULIER", 3));
	elevesNote.push_back(Eleve("TROUSSARD", 4));
	elevesNote.push_back(Eleve("VESSAIRE", 5));
	elevesNote.push_back(Eleve("ZEMMOURI", 5));
	elevesNote.push_back(Eleve("ZOUAKI", 5));

	std::sort(elevesNom.begin(), elevesNom.end(), compNom);
	std::cout << "Tri nom" << std::endl;
	std::cout << elevesNom;

	std::sort(elevesNote.begin(), elevesNote.end(), compNote);
	std::cout << std::endl << "Tri note" << std::endl;
	std::cout << elevesNote;

	std::cout << std::endl << "Nombre de comparaisons nom : " << compteurNom << std::endl;
	std::cout << "Nombre de comparaisons note : " << compteurNote << std::endl;

	return EXIT_SUCCESS;
}
