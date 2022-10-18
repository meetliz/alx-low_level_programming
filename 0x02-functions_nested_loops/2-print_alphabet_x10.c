#include "main.h"

/**
 * print_alphabet_x10 -  prints 10 times the alphabet, in lowercase
 */
void print_alphabet_x10(void)
{
	int ten;
	char lowercase;

	for (ten = 0; ten <= 9; ten++)
	{
		for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
			_putchar(lowercase);
		_putchar('\n');
	}
}
