#include "main.h"
#include <stdio.h>

/*
 * void swap_int - a function that swaps the values of two integers
 * @a: input 1
 * @b: input 2
 * main - check the code
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}


