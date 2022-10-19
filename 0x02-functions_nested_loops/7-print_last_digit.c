#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: the number
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	int ltd = n % 10;

	if (ltd < 0)
		ltd *= -1;

	_putchar(ltd + '0');

	return (0);
}
