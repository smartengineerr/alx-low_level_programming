#include <stdio.h>

/**
 * main entry point
 *
 * return 0 success
 *
 */

int main ()

{ 
	char e;

	for (e = 'a'; e <= 'z'; e++)
	{
		if (e != 'e' && e != 'q')

		{
			putchar(e);
		}
	}

	putchar('\n');
	return (0);

}
