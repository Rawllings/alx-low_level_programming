#include <stdio.h>
/**
 * main - print all alphabets in lower case
 * followed by a line except q and e
 * return: 0
 *
 */
int main(void)
{
char la;
for (la = 'a'; la <= 'z'; la++)
{
if (la != 'e' && la != 'q')
{
putchar(la);
}
}
putchar('\n');

return (0);
}
