#ifndef TRIGO_HPP
#define TRIGO_HPP 

#include "fonction.hpp"
#include <string>
#include <cmath>

class Trigo : public Fonction {
	public:
	Trigo(std::string nomFonction);
	virtual ~Trigo();
	double operator()(double antecedant) const;
	bool operator==(const Trigo &fonc) const;
	std::string to_string() const;

	private:
	std::string nomFonction;
	double (*fonctionTrigo)(double);
};

std::ostream& operator<<(std::ostream& stream, const Trigo &trigo);

#endif /* TRIGO_HPP */
