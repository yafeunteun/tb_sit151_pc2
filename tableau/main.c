#include <stdio.h>
#include <stdlib.h>
#include "tableau.h"


int main(int argc, char** argv)
{

	double coeffpoly1 [4] = { 0.8, 0, 0.1, 6.8 };
	Polynome poly1 = { coeffpoly1, 3 };
	
	double coeffpoly2[3] = {1.1, 1.7, 8.9};
	Polynome poly2 = {coeffpoly2, 2};
	
	Polynome poly5 = add(poly1, poly2);

	affichage(poly5);

	free(poly5.coefficients);

	return 0;
}


