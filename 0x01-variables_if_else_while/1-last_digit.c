#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	last_num = n%10;
		printf("Last digit of %d is %d", n, last_num);
	if (last_num > 5);
		printf("is greater than 5"\n,n);
	else if (last_num == 0);
		printf("is 0"\n,n);
	else if (last_num < 6 && != 0);
		printf("is less than 6 and not 0"\n,n);
	return (0);

}
