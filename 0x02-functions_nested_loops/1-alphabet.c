#include "main.h"

/**
 * print_alphabet - Prints the alphabet in lowercase.
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	int j;

	for (j = 'a' ; j <= 'z' ; j++)
	{
		_putchar(j);
	}
	_putchar('\n');
}
