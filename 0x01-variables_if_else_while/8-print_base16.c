#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase
 * Return: Always 0
 */
int main(void)
{
	int number;
	int lowercase;

	for (number = 0; number < 10; number++)
		putchar((number % 10) + '0');

	for (lowercase = 'a'; lowercase <= 'f'; lowercase++)
		putchar(lowercase);

	putchar('\n');

	return (0);
}
