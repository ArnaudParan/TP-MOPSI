#include <cstdlib>
#include <vector>
#include <iostream>
#include "polynome.hpp"
#include "trigo.hpp"

int main()
{
	double coeffsCube[] = {0., 0., 0., 1.};
	Polynome cube(coeffsCube, 4);
	Trigo tangente = Trigo("tan");
	double rac27 = cube.inverse(27.);
	double atan1 = tangente.inverse(1.);
	std::cout << "(27)^(1/3) = " << rac27 << std::endl;
	std::cout << "4 atan(1) = " << 4. * atan1 << std::endl;
	return EXIT_SUCCESS;
}
