#include "matrice.hpp"
#include <cassert>

Matrice::Matrice(unsigned int nlig, unsigned int ncol)
{
	if (nlig < 1 || ncol < 1) {
		throw "Trop peu de lignes/colonnes dans la matrice";
	}
	this->nlig = nlig;
	this->ncol = ncol;
	this->tab = new float[nlig * ncol];
	this->compteur = new unsigned int;
	*(this->compteur) = 1;
}

Matrice::~Matrice()
{
	--(*(this->compteur));

	if (*this->compteur == 0) {
		delete[] this->tab;
		delete this->compteur;
	}
}

Matrice::Matrice(const Matrice& copied)
{
	this->nlig = copied.nlig;
	this->ncol = copied.ncol;
	this->tab = copied.tab;
	this->compteur = copied.compteur;
	++(*(this->compteur));
}

float Matrice::operator()(unsigned int lig, unsigned int col) const
{
	if (*this->compteur == 0) {
	}
	return this->tab[this->ncol * lig + col];
}

float& Matrice::operator()(unsigned int lig, unsigned int col)
{
	return this->tab[this->ncol * lig + col];
}

//Ce qu'on a fait ensemble s'arrête ici

Matrice Matrice::operator+(Matrice summed) const
{
	if (this->ncol != summed.ncolonnes() || this->nlignes() != summed.nlignes()) {
		throw "Matrices non sommables";
	}

	Matrice sum(this->nlignes(), this->ncolonnes());
	for (unsigned int tabElem = 0; tabElem < this->ncolonnes() * this->nlignes(); ++tabElem) {
		sum.tab[tabElem] = this->tab[tabElem] + summed.tab[tabElem];
	}
	return sum;
}

Matrice Matrice::operator*(Matrice rightMat) const
{
	if (this->ncolonnes() != rightMat.nlignes()) {
		throw "Matrices non multipliables";
	}

	Matrice prod(this->nlignes(), rightMat.ncolonnes());
	for (unsigned int lig = 0; lig < prod.nlignes(); ++lig) {
		for (unsigned int col = 0; col < prod.ncolonnes(); ++col) {
			prod(lig, col) = 0.;
			for (unsigned int sumIndex = 0; sumIndex < rightMat.nlignes(); ++sumIndex) {
				prod(lig, col) += (*this)(lig, sumIndex) * rightMat(sumIndex, col);
			}
		}
	}

	return prod;
}

Matrice& Matrice::operator=(Matrice copied)
{
	--(*(this->compteur));

	if (*this->compteur == 0) {
		delete[] this->tab;
		delete this->compteur;
	}

	this->nlig = copied.nlig;
	this->ncol = copied.ncol;
	this->tab = copied.tab;
	this->compteur = copied.compteur;
	++(*(this->compteur));
}

Matrice Matrice::ident(unsigned int nlig, unsigned int ncol)
{
	Matrice id(nlig, ncol);
	for (unsigned int lig = 0; lig < nlig; ++lig) {
		for (unsigned int col = 0; col < ncol; ++col) {
			id(lig, col) = (lig == col) ? 1.0 : 0.0;
		}
	}
	return id;
}

std::ostream& operator<<(std::ostream& outStream, Matrice matOut)
{
	for(unsigned int lig = 0; lig < matOut.nlignes(); lig++){
		outStream << '(';
		for(unsigned int col = 0; col < matOut.ncolonnes() - 1; col++){
			outStream << matOut(lig, col) << ',';
		}
		outStream << matOut(lig, matOut.ncolonnes() - 1) << ')' << std::endl;
	}
	return outStream;
}
