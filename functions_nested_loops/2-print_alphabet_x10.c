#include "main.h"
/**
 * fuction that print 10 timesthe alphabet,in lowercase
 */

void print_alphabet_x10(void)
{	int count =0;
	char l;

	for (count = 0;count < 10; count++)
	{
	for(l ='a'; l <='z'; l++)
	{
	_putchar(l);
	}
	_putchar('\n');
	}
}
