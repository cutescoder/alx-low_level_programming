#include <stdio.h>

/**
 * main - A programs that uses for loop to print alphabets omitting e and q
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter == 'e' || letter == 'q')
			continue;
		{
			putchar(letter);
		}
	}

putchar('\n');

return (0);
}
