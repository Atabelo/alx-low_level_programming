#include <stdio.h>
#include <math.h>
/**
 * main - Entry point
 * Descrption: 'Output the size of dataType'
 * Return: Always 0 (Success)
 */
int main(void)
{
int i, i2;
i = 0;
while (i <= 98)
{
i2 = i + 1;
while (i2 <= 99)
{
putchar(i / 10 + '0');
putchar(i % 10 + '0');
putchar(' ');
putchar(i2 / 10 + '0');
putchar(i2 % 10 + '0');
if (i == 98 && i2 == 99)
{
putchar('\n');
}
else
{
putchar(',');
putchar(' ');
}
12++;
}
i++;
}
return (0);
}
