#include "main.h"
/**
 * print_alphabet_x10 - Prints the alphabet in lowercase, 10 times.
 *
 * Description: This function prints the lowercase alphabet 10 times,
 * each followed by a new line.
 */
void print_alphabet_x10(void)
{
	int count = 0;
	char l;

	for (count = 0; count < 10; count++)
	{
	for (l = 'a'; l <= 'z'; l++)
	{
	_putchar(l);
	}
	_putchar('\n');
	}
}
