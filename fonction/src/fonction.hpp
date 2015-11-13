#ifndef FONCTION_HPP
#define FONCTION_HPP 

class Fonction {
	public:
	double inverse(double image);
	virtual double operator()(double antecedant) const = 0;
	virtual Fonction* derivee() const = 0;
	virtual Fonction* integrale() const = 0;

	private:
	double methode_newton(double image, double erreur = 1e-5, int maxiter = 100);
};

#endif /* FONCTION_HPP */
