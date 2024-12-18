#include "main.h"

/**
 * _isupper - Checks if a character is uppercase.
 * @c: The character to check.
 *
 *  Description: This function takes a character as input and checks if
 *  it is an uppercase letter (A-Z). It returns 1 if the character is
 * uppercase and 0 otherwise.
 *
 * Return: 1 if the character is uppercase, 0 otherwise.
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
