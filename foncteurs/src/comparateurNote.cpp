#include "comparateurNote.hpp"

ComparateurNote::ComparateurNote(int *compteur) : ComparateurElevesAbstrait::ComparateurElevesAbstrait(compteur)
{
}

bool ComparateurNote::operator()(const Eleve &eleve1, const Eleve &eleve2)
{
	ComparateurElevesAbstrait::operator()(eleve1, eleve2);
	int note1 = eleve1.note;
	int note2 = eleve2.note;
	bool eleve1PlusGrand = note1 >= note2;
	return eleve1PlusGrand;
}
