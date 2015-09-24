#ifndef MATRICE_HPP
#define MATRICE_HPP

#include <iostream>

class Matrice {
	private:
	float* tab;
	int nlig, ncol;
	//nombre de copies, initialement, 1
	int* compteur;
	public:
	Matrice(int nlig, int ncol);
	~Matrice();
	Matrice(const Matrice& copied);
	int nlignes() const {return nlig};
	int ncolonnes() const {return ncol};
	float operator()(int i, int j) const;
	float& operator()(int i, int j);
	Matrice operator+(Matrice summed) const;
	Matrice operator*(Matrice rightMat) const;
	Matrice& operator=(Matrice copied);
};

ostream& operator<<(ostream& outStream, Matrice matOut);

#endif
