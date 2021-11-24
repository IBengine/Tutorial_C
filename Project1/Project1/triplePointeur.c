#include <stdio.h>
#include <stdlib.h>
#include "triplePointeur.h"


void MainTriplePointeur(void)
{
	int age = 10;
	int *pointeur = &age;
	/* same
	int *pointeur;
	pointeur = &age;
	*/
	//triplePointeur(&age);
	int pointeurSurNombreBis = doubleAndtriplePointeur(&age);
	printf("%d\n", *pointeur);
	printf("%d", pointeurSurNombreBis);
}


void triplePointeur(int *pointeurSurNombre)
{
	*pointeurSurNombre *= 3; // On multiplie par 3 la valeur de nombre
}


int doubleAndtriplePointeur(int *pointeurSurNombre)
{

	int pointeurSurNombreBis = *pointeurSurNombre * 2; // On multiplie par 2 la valeur de nombre
	*pointeurSurNombre *= 3; // On multiplie par 3 la valeur de nombre
	return pointeurSurNombreBis;
}
