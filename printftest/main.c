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

    len = _printf("%s\n", "Hola, como estas?");
    len2 = printf("%K");

    printf("%d, %d", len, len2);

    return(0);
}
