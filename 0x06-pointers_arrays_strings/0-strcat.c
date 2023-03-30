#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest:char dest
 * @src: char src
 * Return:char
 */
char *_strcat(char *dest, char *src, char *result)
{
	char *result = dest;

	while (*dest != '\0')
	{
	dest++;
	}
	while (*src != '\0')
	{
	*dest = *src;
	dest++;
	src++;
	}
	*dest = '\0';
	return (result);
}
