typedef struct element {
	int indice_coefficient;
	double valeur_coefficient;
	struct element * suivant;
}element_liste_polynome;                                    // définition du type element_liste_polynome correspondant à la structure element

typedef element_liste_polynome *Polynome;                   // Le type Polynome correspond à un pointeur sur un element_liste_polynome

typedef enum {False, True} Bool;                            // Définition du type booléen qui n'existe pas en C






void affichage(Polynome polynome);
Polynome insererEnTete(int indice, double valeur, Polynome p);
Polynome insererEnQueue(int indice, double valeur, Polynome p);
Polynome add(Polynome p1, Polynome p2);
Polynome ajouterOuRemplacerIndiceValeur(int indice, double valeur, Polynome p);
double valeur(Polynome p, double x);
void liberer(Polynome p);

