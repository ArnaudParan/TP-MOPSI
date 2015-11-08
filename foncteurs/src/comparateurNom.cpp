#include "comparateurNom.hpp"

ComparateurNom::ComparateurNom(int *compteur) : ComparateurElevesAbstrait::ComparateurElevesAbstrait(compteur)
{
}

bool ComparateurNom::operator()(const Eleve &eleve1, const Eleve &eleve2)
{
	ComparateurElevesAbstrait::operator()(eleve1, eleve2);
	std::string nom1 = eleve1.nom;
	std::string nom2 = eleve2.nom;
	int compNoms = nom1.compare(nom2);
	bool eleve1PlusGrand = compNoms <= 0;
	return eleve1PlusGrand;
}
