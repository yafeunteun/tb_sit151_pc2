#include <stdio.h>
#include "liste.h"


int main(int argc, char** argv)
{
	Polynome poly1=NULL, poly2 = NULL, poly3=NULL;
    

	poly1 = insererEnQueue(0,0.8,NULL);
    poly1 = insererEnQueue(2, 0.1, poly1);
    poly1 = insererEnQueue(3, 6.8, poly1);
    
    poly2 = insererEnTete(2, 8.9, NULL);
    poly2 = insererEnTete(1, 1.7, poly2);
    poly2 = insererEnTete(0, 1.1, poly2);
    
	affichage(poly1);
    affichage(poly2);
    
    poly3 = add(poly1, poly2);
    affichage(poly3);

	return 0;
}
