#include "main.h"

/**
 * _strcat - Concatenates two strings
 * @dest: Pointer to the destination string
 * @src: Pointer to the source string
 *
 * Return: Pointer to the resulting string @dest
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	/* Get length of destination string */
	i = 0;
	while (dest[i] != '\0')
	{
	i++;
	}

	/* Append source string to destination string */
	j = 0;
	while (src[j] != '\0')
	{
	dest[i] = src[j];
	i++;
	j++;
	}

	/* Add null terminator to end of concatenated string */
	dest[i] = '\0';

	/* Return pointer to concatenated string */
	return (dest);
}
