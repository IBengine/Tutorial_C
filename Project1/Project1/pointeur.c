#include <stdio.h>
#include <stdlib.h>
#include "pointeur.h"

int pointeur()
{
	int heures = 0, minutes = 90;

	printf("L'adresse de la variable heures est : %p\n", &heures);

	/* On a une variable minutes qui vaut 90.
	Après appel de la fonction, je veux que ma variable
	"heures" vaille 1 et que ma variable "minutes" vaille 30 */
	
	decoupeMinutes(heures, minutes);

	printf("%d heures et %d minutes\n", heures, minutes);
	
	return 0;
}

void decoupeMinutes(int h, int m)
{
	h = m / 60;  // 90 / 60 = 1
	m = m % 60; // 90 % 60 = 30
}