#include "comparateurElevesAbstrait.hpp"

ComparateurElevesAbstrait::ComparateurElevesAbstrait(int *compteur)
{
	this->compteur = compteur;
}

bool ComparateurElevesAbstrait::operator()(const Eleve &eleve1, const Eleve &eleve2)
{
	++(*compteur);
	return true;
}

ComparateurElevesAbstrait::~ComparateurElevesAbstrait()
{
}
