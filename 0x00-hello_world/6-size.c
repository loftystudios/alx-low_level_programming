#include <stdio.h>
/**
 * main - Entry point
 * Description: 'the program's description'
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("size of char: %c bytes(s)\n", sizeof(char));
	printf("size of int: %i bytes(s)\n", sizeof(int));
	printf("size of long int: %li bytes(s)\n", sizeof(long int));
	printf("size of long long int: %lli bytes(s)\n", sizeof(long long int));
	printf("size of float: %f bytes(s)\n", sizeof(float));
	return (0);
}
