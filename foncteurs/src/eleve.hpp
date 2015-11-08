#ifndef ELEVE_HPP
#define ELEVE_HPP 

#include <string>
#include <iostream>
#include <vector>

class ComparateurElevesAbstrait;
class ComparateurNom;
class ComparateurNote;

class Eleve {
	friend ComparateurElevesAbstrait;
	friend ComparateurNom;
	friend ComparateurNote;
	public:
		Eleve(std::string nom, int note);
		std::string to_string() const;
	private:
		std::string nom;
		int note;
};

std::ostream& operator<<(std::ostream& stream, const Eleve &eleve);
std::ostream& operator<<(std::ostream& stream, const std::vector<Eleve> &eleves);

#endif /* ELEVE_HPP */
