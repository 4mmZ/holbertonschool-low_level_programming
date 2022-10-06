#include "main.h"
/**
 *swap_int - the command to switch
 *@a: a pointer
 *@b: another pointer
 *Return: succes
 */
void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}

