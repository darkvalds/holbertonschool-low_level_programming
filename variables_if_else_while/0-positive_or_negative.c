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

	srand(time(0)); /* Initialise le générateur de nombres aléatoires */
	n = rand() - RAND_MAX / 2; /* Génère un nombre aléatoire */

	if (n > 0)
	{
		printf("%d est positif\n", n);
	}
	else if (n == 0)
	{
		printf("%d est zéro\n", n);
	}
	else
	{
		printf("%d est négatif\n", n);
	}

	return (0);
}
