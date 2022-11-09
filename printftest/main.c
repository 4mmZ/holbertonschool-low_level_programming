#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len;
    int len2;

    len = printf("%K\n");
    len2 = _printf("%K\n");
    printf("%d\n%d\n", len, len2);
    return (0);
}
