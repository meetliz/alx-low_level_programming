#include "main.h"

/**
 * print_alphabet -  prints the alphabet, in lowercase
 */
void print_alphabet(void)
{
	char lowercase;

	for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
		_putchar(lowercase);

	_putchar('\n');
}
