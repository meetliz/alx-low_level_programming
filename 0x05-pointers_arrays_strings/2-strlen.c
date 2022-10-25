#include "main.h"

/**
 * _strlen - returns the length of a string.
 * @s: a string
 * Return: the length
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;

	return (i);
}
