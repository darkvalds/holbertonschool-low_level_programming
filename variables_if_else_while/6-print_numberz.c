#include <stdio.h>

/**
 *main - Entry point
 *
 * Description: Prints all single digits numbers of base 10 starting from 0,
 *		followed by a new line. Only putchar can be used twice.
 *
 * Return: Always 0 (Sucess)
 */
int main(void)
{
int number;

	for (number = 0; number < 10; number++)
	{
	putchar(number + '0');
	}
	putchar('\n');

	return (0);
}
