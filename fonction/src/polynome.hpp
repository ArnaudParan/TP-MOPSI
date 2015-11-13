#ifndef POLYNOME_HPP
#define POLYNOME_HPP 

#include "fonction.hpp"
#include <vector>
#include <iostream>
#include <string>

class Polynome : public Fonction {
	public:
	Polynome(std::vector<double> coeffs);
	virtual ~Polynome();
	virtual double operator()(double antecedant) const;
	virtual Polynome* derivee() const;
	virtual Polynome* integrale() const;
	virtual bool operator==(const Polynome &poly) const;
	std::string to_string() const;

	private:
	std::vector<double> *coeffs;
};

std::ostream& operator<<(std::ostream& stream, const Polynome &poly);

#endif /* POLYNOME_HPP */
