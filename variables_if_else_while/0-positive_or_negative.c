#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - Lean la docu
* Return: return 0
*/

int main(void)
{
	int n;
	srand(time(0));
	n=rand() - RAND_MAX / 2;
	
	if (n > 0)
		printf ("98 is positive\n");
		else if (n < 0)
			printf ("-98 is negative\n");
		else if (n == 0)
			printf ("0 is zero\n");
	return (0);
}	
	

