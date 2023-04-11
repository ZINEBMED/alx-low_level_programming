#include "main.h"

/**
* str_concat -  a function that concatenates two strings
* @s1: contains contents of string 1
* @s2: contains contents of string 2
* Return: NULL on failure, pointer to new string
*/

char *str_concat(char *s1, char *s2)
{
	char *new_string;
	int i;
	int concat_i = 0;
	int lenght = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] || s2[i]; i++)
		lenght++;
	new_string  = malloc(sizeof(char) * lenght);
	if (new_string == NULL)
		return (NULL);
	for (i = 0; s1[i]; i++)
		new_string[concat_i++] = s1[i];
	for (i = 0; s2[i]; i++)
		new_string[concat_i++] = s2[i];
	return (new_string);
}
