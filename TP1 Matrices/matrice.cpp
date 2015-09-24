#include "matrice.hpp"
#include <cassert>

ostream& operator<<(ostream& outStream, Matrice matOut)
{
	for(int lig = 0; lig < matOut.nlignes(); lig++){
		for(int col = 0; col < matOut.ncolonnes() - 1; col++){
			outStream << matOut(lig, col) << ',';
		}
		outStream << matOut(lig, matOut.ncolonnes() - 1) << ')';
	}
}
