#include <stdio.h>
/**
 * main - list of all natural nums below 10249exxcluded)
 * that are multiples of 3 and 5
 * Return: 0
 */
int main(void)
{
	int i, sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
			sum += i;
	}
	printf("%d\n", sum);

	return (0);
}
