#include <stdio.h>

/**
 * main -  prints all possible different combinations of two digits
 * Return: Always 0
 */
int main(void)
{
	int i;
	int j;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
		putchar(j);
		if (i != 56 && j != 58)
		{
			putchar(44);
			putchar(32);
		}

	}

	putchar(10);

	return (0);
}
