#include <stdio.h>

/**
 * main entry point
 *
 * return 0 success
 *
 */

int main ()

{ 
	char f;

	for (f = 'a'; f <= 'z'; f++)
	{
		if (f != 'e' && f != 'q')

		{
			putchar(f);
		}
	}

	putchar('\n');
	return (0);

}
