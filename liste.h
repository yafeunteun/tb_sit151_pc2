typedef struct element {
	int indice_coefficient;
	double valeur_coefficient;
	struct element * suivant;
}element_liste_polynome;

typedef element_liste_polynome * Polynome;

typedef enum {False, True} Bool;

void affichage(Polynome polynome);
