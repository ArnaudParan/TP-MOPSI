#ifndef COMPARAISONELEVESABSTRAITE_HPP
#define COMPARAISONELEVESABSTRAITE_HPP 

#include "eleve.hpp"

class ComparateurElevesAbstrait {
	public:
		ComparateurElevesAbstrait(int *compteur);
		virtual bool operator()(const Eleve &eleve1, const Eleve &eleve2);
		virtual ~ComparateurElevesAbstrait();
	private:
		int *compteur;
};

#endif /* COMPARAISONELEVESABSTRAITE_HPP */
