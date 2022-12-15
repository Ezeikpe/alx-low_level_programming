#include "main.h"

/**
 * _strlen - gets character string
 *
 * @s: character to getstring
 * Return: returns length
 */

int _strlen(char *s)
{
int u;

u = 0;
while (s[u] != '\0')
{
	u++;
}
return (u);
}
