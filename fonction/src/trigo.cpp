#include "trigo.hpp"


Trigo::Trigo(std::string nomFonction)
{
	this->nomFonction = nomFonction;
	if (nomFonction == "sin") {
		this->fonctionTrigo = sin;
	}
	else if (nomFonction == "cos") {
		this->fonctionTrigo = cos;
	}
	else if (nomFonction == "tan") {
		this->fonctionTrigo = tan;
	}
}

Trigo::~Trigo()
{
}

double Trigo::operator()(double antecedant) const
{
	return (*(this->fonctionTrigo))(antecedant);
}

bool Trigo::operator==(const Trigo &fonc) const
{
	return this->fonctionTrigo == fonc.fonctionTrigo;
}

std::string Trigo::to_string() const
{
	return this->nomFonction;
}

std::ostream& operator<<(std::ostream& stream, const Trigo &trigo)
{
	stream << trigo.to_string();
	return stream;
}
