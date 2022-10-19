#include <stdio.h>
/**
 * main - print all alphabets in reverse and a new line
 * Return: 0
 */
int main(void)
{
	char lt;

	for (lt = 'z'; lt >= 'a'; lt--)
		putchar(lt);

	putchar('\n');

	return (0);
}
