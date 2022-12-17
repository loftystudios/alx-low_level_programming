#include <stdio.h>

/**
 * main - prints the alphabet in lowercase
 * Return: Always 0
 */

int main(void)
{
	char lqe;

	for (lqe = 'a'; lqe <= 'z'; lqe++)
	{
		if (lqe != 'e' && lqe != 'q')
			putchar(lqe);
	}

	putchar('\n');

	return (0);
}
