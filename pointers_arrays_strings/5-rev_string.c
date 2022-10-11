#include "main.h"

/**
 *
 *
 *
 */
void rev_string(char *s)
{
	int i = 0;
	int n;
	int j = 0;
	char m;

	while (s[i] != '\0')
	{
		i++;
	}
	n = i;

	while (j <= n / 2)
	{
		m = s[n - 1 - j];
		s[n - 1 - j] = s[j];
		s[j] = m;
		j++;
	}
}
