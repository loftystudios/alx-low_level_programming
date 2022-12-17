#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0
 */

int main(void)
{
	char lowerc

	for (lowerc = 'a'; lowerc <= 'z'; lowerc++)
		putchar(lowerc);

	for (lowerc = 'A'; lowerc <= 'Z'; lowerc++)
		putchar(lowerc);

	putchar('\n');

	return (0);
}
