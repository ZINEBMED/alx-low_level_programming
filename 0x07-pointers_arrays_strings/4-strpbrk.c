#include "main.h"
#include <stdio.h>

/**
 * *_strpbrk - a function that searches a string for any set of bytes
 * @s: string to be searched
 * @accept: bytes to search for
 *
 * Return: 0
 */

char *_strpbrk(char *s, char *accept)
{
	int u, r;

	for (u = 0; s[u] != '\0'; u++)
	{
		for (r = 0; accept[r] != '\0'; r++)
		{
			if (s[u] == accept[r])
			{
			return (s + u);
			}
		}
	}
	return (NULL);
}
