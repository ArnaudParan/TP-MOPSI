#ifndef MATRICE_HPP
#define MATRICE_HPP

class Matrice {
	private:
	float* tab;
	int nlig, ncol;
	int* compteur;
	public:
	Matrice(int nlig, int ncol);
	~Matrice();
	Matrice(const Matrice& copied);
	int nlignes() const;
	int ncolonnes() const;
	float operator()(int i, int j) const;
	float& operator()(int i, int j);
	Matrice operator+(Matrice summed) const;
	Matrice operator*(Matrice rightMat) const;
};

#endif
