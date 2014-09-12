#include <stdio.h>
#include "liste.h"

void affichage(Polynome polynome)
{
	Bool first_elem = True;
	Polynome p = polynome;

	printf("f(x) = ");
	
	while(p != NULL)                                            // Le pointeur *suivant du dernier élément de la liste pointe sur NULL. On détermine de cette façon que la fin de la liste est atteinte.
	{
		if(first_elem) {
			first_elem = False;
		} else {
			printf(" + ");
		}

		printf("%.2f", p->valeur_coefficient);                  // Syntaxe équivalente à (*p).valeur_coefficient
		
		switch(p->indice_coefficient) {
			case 0 :
			break;
			case 1 : printf("x"); 
			break;
			default : printf("x^%d", p->indice_coefficient);
		}

		p = p->suivant;                                         // Accès à l'élément suivant de la liste chainée
	}

	puts("");                                                   //Passage à la ligne suivante
}
	
	
