#include "main.h"

/**
 * _isalpha - A function that checks for alphabetic character
 * @c: main character
 * Retutn: 1 if c is a letter, Return 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
	return (1); /* c is a letter, lowercase or uppercase */
	}

	return (0); /* c is not a letter, lowercase or uppercase */

}
