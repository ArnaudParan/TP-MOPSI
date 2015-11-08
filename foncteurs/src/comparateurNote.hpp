#ifndef COMPARAISONNOTE_HPP
#define COMPARAISONNOTE_HPP 

#include "comparateurElevesAbstrait.hpp"

class ComparateurNote : public ComparateurElevesAbstrait {
	public:
		ComparateurNote(int *compteur);
		bool operator()(const Eleve &eleve1, const Eleve &eleve2);
};

#endif /* COMPARAISONNOM_HPP */
