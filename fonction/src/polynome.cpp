#include "polynome.hpp"
#include "to_string.hpp"

Polynome::Polynome(std::vector<double> coeffs)
{
	this->coeffs = new std::vector<double>(coeffs);
}

Polynome::Polynome(double* coeffs, unsigned int taille_tab)
{
	this->coeffs = new std::vector<double>(coeffs, coeffs + taille_tab);
}

Polynome::~Polynome()
{
	delete this->coeffs;
}

double Polynome::operator()(double antecedant) const
{
	std::vector<double>::const_iterator coeff;
	std::vector<double>::const_iterator debutCoeffs = this->coeffs->begin();
	--debutCoeffs;
	std::vector<double>::const_iterator finCoeffs = this->coeffs->end();
	--finCoeffs;
	double image = 0;

	for (coeff = finCoeffs; coeff != debutCoeffs; --coeff) {
		image *= antecedant;
		image += *coeff;
	}

	return image;
}

Polynome* Polynome::derivee() const
{
	std::vector<double> coeffsDerivee;
	unsigned int nbreCoeffs = this->coeffs->size();
	double coeff = 0.;

	for (unsigned int indice = 1; indice < nbreCoeffs; ++indice) {
		coeff = (*(this->coeffs))[indice];
		coeffsDerivee.push_back(indice * coeff);
	}

	Polynome *derivee = new Polynome(coeffsDerivee);

	return derivee;
}

Polynome* Polynome::integrale() const
{
	std::vector<double> coeffsIntegrale;
	coeffsIntegrale.push_back(0.);
	unsigned int nbreCoeffs = this->coeffs->size();
	double coeff = 0.;

	for (unsigned int indice = 0; indice < nbreCoeffs; ++indice) {
		coeff = (*(this->coeffs))[indice];
		coeffsIntegrale.push_back(coeff / (double) (indice + 1));
	}

	Polynome *integrale = new Polynome(coeffsIntegrale);

	return integrale;
}

bool Polynome::operator==(const Polynome &poly) const
{
	return (*(this->coeffs)) == (*(poly.coeffs));
}

std::string Polynome::to_string() const
{
	std::string description;
	std::vector<double>::const_iterator coeff;
	std::vector<double>::const_iterator debut = this->coeffs->begin();
	std::vector<double>::const_iterator fin = this->coeffs->end();
	for (coeff = debut; coeff != fin; ++coeff) {
		description += std::to_string(*coeff) + " ";
	}

	return description;
}

std::ostream& operator<<(std::ostream& stream, const Polynome &poly)
{
	stream << poly.to_string();

	return stream;
}
