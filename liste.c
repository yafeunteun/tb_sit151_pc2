#include <stdio.h>
#include "liste.h"

void affichage(Polynome polynome)
{
	Bool first_elem = True;
	Polynome p = polynome;

	printf("f(x) = ");
	
	while(p != NULL)
	{
		if(first_elem) {
			first_elem = False;
		} else {
			printf(" + ");
		}

		printf("%.2f", p->valeur_coefficient);
		
		switch(p->indice_coefficient) {
			case 0 :
			break;
			case 1 : printf("x"); 
			break;
			default : printf("x^%d", p->indice_coefficient);
		}

		p = p->suivant;
	}

	puts("");
}
	
	
