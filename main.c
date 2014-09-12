#include <stdio.h>
#include "liste.h"


int main(int argc, char** argv)
{
	Polynome poly1=NULL, poly2 = NULL;
    
    poly1 = ajouterOuRemplacerIndiceValeur(0,0.8,NULL);
    poly1 = ajouterOuRemplacerIndiceValeur(3, 6.8, poly1);
    poly1 = ajouterOuRemplacerIndiceValeur(2, 0.1, poly1);
    poly1 = ajouterOuRemplacerIndiceValeur(3, 14.5, poly1);

	/*poly1 = insererEnQueue(0,0.8,NULL);
    poly1 = insererEnQueue(2, 0.1, poly1);
    poly1 = insererEnQueue(3, 6.8, poly1);*/
    
    poly2 = insererEnTete(2, 8.9, NULL);
    poly2 = insererEnTete(1, 1.7, poly2);
    poly2 = insererEnTete(0, 1.1, poly2);
    
	affichage(poly1);
    affichage(poly2);

    affichage(add(poly1,poly2));
    
    printf("f(2.0) = %g \n", valeur(poly2, 2.));

	return 0;
}
