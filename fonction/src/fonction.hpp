#ifndef FONCTION_HPP
#define FONCTION_HPP 

#include <cstddef>

class Fonction {
	public:
	virtual ~Fonction();
	double inverse(double image);
	virtual double operator()(double antecedant) const;
	virtual Fonction* derivee() const;

	protected:
	Fonction(const Fonction* integrale = NULL);

	private:
	double methode_newton(double image, int maxiter = 100,  double antecedantDepart = 1.);

	const Fonction* integrale;
};

#endif /* FONCTION_HPP */
