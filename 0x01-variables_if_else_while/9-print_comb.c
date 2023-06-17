#include <stdio.h>
/**
 * main - Entry point of the program
 * * Description: This program prints all possible combinations of single-digit numbers.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
putchar('0');

if ('0' <= '9')
{
while (putchar(',') && putchar(' '))
{
putchar('0');
if (putchar('9'))
break;
}
}

putchar('\n');
return (0);
}
