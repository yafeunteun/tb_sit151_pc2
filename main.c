#include <stdio.h>
#include "liste.h"


int main(int argc, char** argv)
{
	Polynome poly1=NULL;
    

	poly1 = insererEnQueue(0,0.8,NULL);
    poly1 = insererEnQueue(2, 0.1, poly1);
    poly1 = insererEnQueue(3, 6.8, poly1);
    
	affichage(poly1);

	return 0;
}
