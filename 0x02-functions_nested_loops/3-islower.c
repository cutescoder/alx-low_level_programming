#include "main.h"

/**
 * _islower - A function that checks for lowercase character
 * @c: main character
 *
 * Return: 1 if c is lowercase, Returns 0 if otherwise
 */

int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
		return (1); /* c is a lowercase character */

	else
	{
		return (0); /* c is not a lowercase character */
	}
}
