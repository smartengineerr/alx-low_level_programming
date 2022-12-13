#include <stdio.h>

/**
 * main - Entry point
 * Printing suze of various types of computers
 *
 * Return: Always 0 success
 */
int main(void)
{
	printf("Size of char: %zu\n", sizeof(char));
	printf("Size of int: %zu\n", sizeof(int));
	printf("Size of long int: %zu\n", sizeof(long int));
	printf("Size of long long int: %zu\n", sizeof(long long int));
	printf("Size of float: %zu\n", sizeof(float));
	return (0);
}
