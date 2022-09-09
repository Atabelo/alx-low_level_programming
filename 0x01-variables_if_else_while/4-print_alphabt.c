#include <stdio.h>

/**
 * main- Print alphabet except q - e
 * Description: 'Output the data printed in lowercase'
 * Return: Always 0
 */
int main(void)
{
int letter;

for (letter = 'a'; letter <= 'z'; letter++)
{

if (letter == 'q' || letter == 'e')
letter++;

putchar (letter);
}
putchar ('\n');
return (0);
}
