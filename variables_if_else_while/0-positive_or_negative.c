#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Fonction principale
 * Description : Ce programme génère un nombre aléatoire et
 * affiche s'il est positif, négatif ou zéro
 * Return: 0 (Succès)
 */
int main(void)
{
	int n;

	srand(time(0)); 
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d est positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d est zero\n", n);
	}
	else
	{
		printf("%d est négatif\n", n);
	}

	return (0);
}
