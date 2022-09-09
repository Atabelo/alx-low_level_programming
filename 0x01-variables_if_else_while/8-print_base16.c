#include <stdio.h>
/**
 * main - Entry point
 * Description: 'Output the size of dataTypes'
 * Return: Always 0 (Success)
 */
int main(void)
{
char c;
for (c = 48; c <= 57; c++)
putchar(c);
for (c = 'a'; c <= 'f'; c++)
putchar(c);

putchar('\n');
return (0);
}
