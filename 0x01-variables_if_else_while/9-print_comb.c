#include <stdio.h>
/**
 * main - Entry point of the program
 * * Description: Prints all possible combinations of single-digit numbers.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;

for (n = 48; n <= 57; n++)
{
putchar(n);
if (n != 57) // check if it's not the last number (57)
{
putchar(n);
putchar(',');
putchar(' ');
}

putchar('\n');
return (0);
}
