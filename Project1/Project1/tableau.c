#include <stdio.h>
#include <stdlib.h>
#include "tableau.h"


int MainTableau()
{
	int tableau[5] = { 10, 15, 3, 19 };

	// On affiche le contenu du tableau
	afficheTableau(tableau, 5);

	//On ordonne le tableau
	ordonnerTableau(tableau, 5);

	// On affiche le contenu du tableau
	//afficheTableau(tableau, 5);

	return 0;
}

void ordonnerTableau(int tableau[], int tailleTableau)
{
	for (int i = 0; i <= tailleTableau - 2; i++)
	{
		//printf("i = %d\n", i);
		for (int j = 1 + i; j <= tailleTableau - 1; j++)
		{
			//printf("j = %d\n", j);
			if (tableau[i]<tableau[j])
			{
				swap(&tableau[i], &tableau[j]);
				afficheTableau(tableau, 5);
			}
			/*else
			{
				printf("nope\n");
			}*/
		}
	}
}

void afficheTableau(int *tableau, int tailleTableau)
{
	int i;

	for (i = 0; i < tailleTableau; i++)
	{
		printf("%d ", tableau[i]);
	}
	printf("\n");
}

static void swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}