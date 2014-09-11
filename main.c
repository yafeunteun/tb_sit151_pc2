#include <stdio.h>
#include "liste.h"


int main(int argc, char** argv)
{
	Polynome p;

	element_liste_polynome e1 = {3, 6.8, NULL};
	element_liste_polynome e2 = {2, 0.1, &e1};
	element_liste_polynome e3 = {0, 0.8, &e2};

	p = &e3;

	affichage(p);

	return 0;
}
