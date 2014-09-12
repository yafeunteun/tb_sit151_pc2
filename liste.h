typedef struct element {
	int indice_coefficient;
	double valeur_coefficient;
	struct element * suivant;
}element_liste_polynome;                                    // définition du type element_liste_polynome correspondant à la structure element

typedef element_liste_polynome *Polynome;                   // Le type Polynome correspond à un pointeur sur un element_liste_polynome

typedef enum {False, True} Bool;                            // Définition du type booléen qui n'existe pas en C

void affichage(Polynome polynome);
