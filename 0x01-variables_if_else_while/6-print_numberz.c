#include <stdio.h>

/**
 * main - prints all single digit number using putchar
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int p;

	for (p = 0; p < 10; p++)
	{
		putchar(p + '0');
	}
	putchar('\n');
	return (0);
}
