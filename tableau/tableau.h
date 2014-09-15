#define MIN(X,Y) (X<=Y)?X:Y
#define MAX(X,Y) (X>=Y)?X:Y

typedef struct {
	double * coefficients;
	int degre;
} Polynome;

typedef enum {False, True} Bool;                            // Définition du type booléen qui n'existe pas en C





void affichage(Polynome polynome);
Polynome insererEnTete(int indice, double valeur, Polynome p);
Polynome insererEnQueue(int indice, double valeur, Polynome p);
Polynome add(Polynome p1, Polynome p2);
Polynome ajouterOuRemplacerIndiceValeur(int indice, double valeur, Polynome p);
double valeur(Polynome p, double x);
void liberer(Polynome p);

