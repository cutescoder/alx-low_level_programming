#include "main.h"

/**
 * _islower - A function that checks for lowercase character
 * @c: main character
 * Returns 1 if c is lowercase, Returns 0 if otherwise
 */

int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
		return (1);

	else
	{
		return (0);
	}
}
