#include "eleve.hpp"
#include "to_string.hpp"

Eleve::Eleve(std::string nom, int note)
{
	this->nom = nom;
	this->note = note;
}

std::string Eleve::to_string() const
{
	std::string chaine = "(" + this->nom + ", " + std::to_string(this->note) + ")";
	return chaine;
}

std::ostream& operator<<(std::ostream& stream, const Eleve &eleve)
{
	stream << eleve.to_string();
	return stream;
}

std::ostream& operator<<(std::ostream& stream, const std::vector<Eleve> &eleves)
{
	std::vector<Eleve>::const_iterator eleve;
	for (eleve = eleves.begin(); eleve != eleves.end(); ++eleve) {
		stream << *eleve << std::endl;
	}

	return stream;
}
