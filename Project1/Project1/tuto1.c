#include <stdio.h>
#include <stdlib.h>
#include "tuto1a.h"

int tuto1(void)
{
	printf("Hello world!\n");

	int aire = aireRectangle(5, 4);
	printf("AireRectangle = %d\n", aire);
	return 0;
}

// Notre fonction aireRectangle peut maintenant être mise n'importe où dans le code source :
double aireRectangle(double largeur, double hauteur)
{
	return largeur * hauteur;
}