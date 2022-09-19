#include "main.h"

/**
 * swap_int - swaps integers
 *@a: a pointer to an int
 *
 *@b: b pointer to an int
 * Return: void if correct
 */

void swap_int(int *a, int *b)
{
	int f;

	f = *a;
	*a = *b;
	*b = f;
}
