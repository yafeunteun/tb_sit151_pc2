#include <stdio.h>
#include <stdlib.h>
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



Polynome insererEnTete(int indice, double valeur, Polynome p)
{
    // Créer un nouveau monome (de type element_liste_polynome)
    Polynome MonomeAAjouter = malloc(sizeof(element_liste_polynome));
    
    if(MonomeAAjouter!=NULL)
    {
        // Affecter les bonnes valeurs dans chacun de ses champs
        MonomeAAjouter->indice_coefficient = indice;
        MonomeAAjouter->valeur_coefficient = valeur;
        MonomeAAjouter->suivant = p;
        
        // Le nouveau monome devant se situer en tête du polynôme, son adresse est la nouvelle adresse du polynôme
        p=MonomeAAjouter;
    }
    else
        exit(0);
    
    return p;
    
}





Polynome insererEnQueue(int indice, double valeur, Polynome p)
{
    // Créer un nouveau monome (de type element_liste_polynome)
    Polynome polynome = p;
    Polynome MonomeAAjouter = malloc(sizeof(element_liste_polynome));
    
    if(MonomeAAjouter!=NULL)
    {
        // Affecter les bonnes valeurs dans chacun de ses champs
        MonomeAAjouter->indice_coefficient = indice;
        MonomeAAjouter->valeur_coefficient = valeur;
        MonomeAAjouter->suivant = NULL;
        
        // Trouver le dernier monome actuellement dans la liste
        if (polynome!=NULL)
        {
            while(polynome->suivant !=NULL)
                polynome = polynome->suivant;
        
        // Remplacer la valeur NULL de son pointeur par l'adresse du nouveau monome
        polynome->suivant = MonomeAAjouter;
        }
        else
            p = MonomeAAjouter;
    }
    else
        exit(0);
    
    return p;

}
	
	
