#define MIN(X,Y) (X<=Y)?X:Y
#define MAX(X,Y) (X>=Y)?X:Y

typedef struct {
	double * coefficients;
	int degre;
} Polynome;


void affichage(Polynome polynome);
Polynome add(Polynome p1, Polynome p2);
double valeur(Polynome p, double x);

