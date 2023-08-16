#include "main.h"

/**
 * print_alphabet_x10 - A function that prints the alphabet 10times
 *
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	char alpha;

	for (alpha = 1; alpha <= 10; alpha++)
	{

		char letter;

		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}

		_putchar('\n');
	}


}
