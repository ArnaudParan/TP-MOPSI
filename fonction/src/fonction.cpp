#include "fonction.hpp"

#define ABS(val) ((val >= 0 ) ? val : -val)

double Fonction::inverse(double image)
{
	return this->methode_newton(image);
}

double Fonction::methode_newton(double image, double errMax, int maxiter)
{
	Fonction *derivee = this->derivee();

	double approxAntecedant = 1.;

	double imageApprox = (*this)(approxAntecedant);
	double derivApprox = (*derivee)(approxAntecedant);
	
	double erreur = ABS(image - imageApprox);

	for (int iteration = 0; iteration <= maxiter && erreur > errMax; ++iteration) {
		approxAntecedant += (image - imageApprox) / derivApprox;

		imageApprox = (*this)(approxAntecedant);
		derivApprox = (*derivee)(approxAntecedant);

		erreur = ABS(image - imageApprox);
	}
	return approxAntecedant;
}
