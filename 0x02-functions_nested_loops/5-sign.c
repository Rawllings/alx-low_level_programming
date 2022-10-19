#include "main.h"

/**
 * print_sign - print the sign of a number
 * @n: the sign of which the number will be printed
 * Return: 1 if number is greater than zero
 * 0 if the number is 0
 * -1 if the number is less than 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (0);
	}

	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}

	else
	{
		_putchar('-');
		return (-1);
	}
}
