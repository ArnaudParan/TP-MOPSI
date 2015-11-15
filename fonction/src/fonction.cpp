#include "fonction.hpp"
#include <iostream>

#define ABS(val) ((val >= 0 ) ? val : -val)

Fonction::~Fonction()
{
}

double Fonction::inverse(double image)
{
	return this->methode_newton(image);
}

Fonction* Fonction::derivee() const
{
	Fonction* deriv = NULL;
	deriv = new Fonction(this);
	return deriv;
}

double Fonction::operator()(double antecedant) const
{
	double epsilon = 1e-5;
	double f_x_plus_eps = (*(this->integrale))(antecedant + epsilon);
	double f_x_moins_eps = (*(this->integrale))(antecedant - epsilon);
	return (f_x_plus_eps - f_x_moins_eps) / (2 * epsilon);
}

Fonction::Fonction(const Fonction* integrale)
{
	this->integrale = integrale;
}

double Fonction::methode_newton(double image, int maxiter, double antecedantDepart)
{
	Fonction *derivee = this->derivee();

	double approxAntecedant = antecedantDepart;

	double imageApprox = (*this)(approxAntecedant);
	double derivApprox = (*derivee)(approxAntecedant);

	for (int iteration = 0; iteration <= maxiter; ++iteration) {
		approxAntecedant += (image - imageApprox) / derivApprox;

		imageApprox = (*this)(approxAntecedant);
		derivApprox = (*derivee)(approxAntecedant);
	}

	delete derivee;
	return approxAntecedant;
}
