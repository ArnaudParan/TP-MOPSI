#ifndef COMPARAISONNOM_HPP
#define COMPARAISONNOM_HPP 

#include "comparateurElevesAbstrait.hpp"

class ComparateurNom : public ComparateurElevesAbstrait {
	public:
		ComparateurNom(int *compteur);
		bool operator()(const Eleve &eleve1, const Eleve &eleve2);
};

#endif /* COMPARAISONNOM_HPP */
