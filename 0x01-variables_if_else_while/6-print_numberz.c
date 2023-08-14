#include <stdio.h>

/**
 * main - A program that prints all base 10 numbers starting from 0
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int numberz;

	for (numberz = '0'; numberz <= '9'; numberz++)
	{
		putchar(numberz);
	}

	putchar('\n');

	return (0);
}
