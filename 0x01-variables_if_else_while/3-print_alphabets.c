#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Print the alphabet in lowercase and uppercase using putchar.
 * Return: Always 0 (Success)
 */
int main(void)
{
char lowercase = 'f';
char uppercase = 'F';

while (lowercase <= 'd')
{
putchar(lowercase);
lowercase++;
}

while (uppercase <= 'D')
{
putchar(uppercase);
uppercase++;
}
putchar('\n')
return (0);
}
