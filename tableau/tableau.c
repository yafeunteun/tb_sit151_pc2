#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "tableau.h"


void affichage(Polynome polynome)
{
	int i = 0; 

	if(polynome.coefficients != NULL && polynome.degre >= 0)
	{
		printf("f(x) = ");
		for(i = 0; i < polynome.degre; ++i) {
			printf("%.1f ", polynome.coefficients[i]);
			if(i > 0) {
				printf("x^%d + ", i);
			} else {
				printf("+ ");
			}
		}
		
		if(polynome.degre > 0) {
			printf("%.1f x^%d\n", polynome.coefficients[i], i);		} else {
			printf("%.1f", polynome.coefficients[0]);
		}
	}
}

Polynome add(Polynome p1, Polynome p2)
{
	int i = 0, degreMin = MIN(p1.degre, p2.degre), degreMax = MAX(p1.degre, p2.degre);
	Polynome p;
	Polynome *ptrSurPlusLong = p1.degre > p2.degre ? &p1 : &p2;

	p.coefficients = (double*)malloc(sizeof(double)*(degreMax+1));


	for(i = 0; i <= degreMin; ++i) {
		p.coefficients[i] = p1.coefficients[i] + p2.coefficients[i];
	}

	for(i = (degreMin+(degreMax-degreMin)); i <= ptrSurPlusLong->degre; ++i) {
		p.coefficients[i] = ptrSurPlusLong->coefficients[i];
	}

	p.degre = degreMax;
	return p;
}

double valeur(Polynome p, double x)
{
	int i = 0;
	double val = 0;

	for(i = 0; i <= p.degre; ++i) {
		val += p.coefficients[i] * pow(x, i);
	}

	return val;
}
