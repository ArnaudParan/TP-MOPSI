#include "matrice.hpp"
#include <cassert>

Matrice::Matrice(int nlig, int ncol)
{
	this.nlig = nlig;
	this.ncol = ncol;
	this.tab = new float[nlig * ncol];
	this.compteur = new int;
	*this.compteur = 1;
}

Matrice::~Matrice()
{
	--(*this.compteur);

	if (*this.compteur == 0) {
		delete[] this.tab;
		delete this.compteur;
	}
}

Matrice::Matrice(const Matrice& copied)
{
	this.nlig = copied.nlig;
	this.ncol = copied.ncol;
	this.tab = copied.tab;
	this.compteur = copied.compteur;
	++(*this.compteur);
}

float Matrice::operator()(int col, int lig) const
{
	return this.tab[this.ncol * lig + col];
}

float& Matrice::operator()(int col, int lig) const
{
	return this.tab[this.ncol * lig + col];
}

ostream& operator<<(ostream& outStream, Matrice matOut)
{
	for(int lig = 0; lig < matOut.nlignes(); lig++){
		for(int col = 0; col < matOut.ncolonnes() - 1; col++){
			outStream << matOut(lig, col) << ',';
		}
		outStream << matOut(lig, matOut.ncolonnes() - 1) << ')';
	}
}
