#include <stdio.h>
/**
 * Main - Entry point
 *
 * Return always 0 (Success)
 */
int main(void)
{
char *sh = "Holberton";

while (*sh)
{
putchar(*sh);
sh++;
}
putchar('\n');

return (0);
}
