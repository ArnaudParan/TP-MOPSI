#ifndef MATRICE_HPP
#define MATRICE_HPP

#include <iostream>

class Matrice {
	private:
	float* tab;
	unsigned int nlig, ncol;
	//nombre de copies, initialement, 1
	unsigned int* compteur;
	public:
	Matrice(unsigned int nlig, unsigned int ncol);
	~Matrice();
	Matrice(const Matrice& copied);
	unsigned int nlignes() const {return nlig;};
	unsigned int ncolonnes() const {return ncol;};
	float operator()(unsigned int lig, unsigned int col) const;
	float& operator()(unsigned int lig, unsigned int col);
	Matrice operator+(Matrice summed) const;
	Matrice operator*(Matrice rightMat) const;
	Matrice& operator=(Matrice copied);

	static Matrice ident(unsigned int nlig, unsigned int ncol);
};

std::ostream& operator<<(std::ostream& outStream, Matrice matOut);

#endif
