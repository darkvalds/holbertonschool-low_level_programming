#include "main.h"
/**
 * _memset - Remplit une zone mémoire avec un octet constant
 * @s: Pointeur vers la zone mémoire à remplir
 * @b: L'octet constant avec lequel remplir la mémoire
 * @n: Le nombre d'octets à remplir dans la zone mémoire
 *
 * Return: Un pointeur vers la zone mémoire remplie
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
