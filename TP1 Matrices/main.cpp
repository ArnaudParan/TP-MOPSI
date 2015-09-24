#include "matrice.hpp"

//shallow copy
//copy and write
//deep copy

int main()
{
	Matrice test1(3, 5), test2(5, 10);
	for(int i = 0; i < test1.nlignes(); i++) {
		for(int j = 0; j < test1.ncolonnes(); j++) {
			test1(i, j) = rand() / (float) RAND_MAX;
		}
	}

	std::cout << test1 * test2 << std::endl
}
