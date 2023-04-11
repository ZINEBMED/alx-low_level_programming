#include <stdlib.h>
#include "main.h"



/**
* _strdup - returns a pointer to a newly allocated memory
* @s: the original string
* Return: NULL if s = NULL, else pointer to the duplicated string
*/



char *_strdup(char *s)
{
	char *s2;



	if (s == NULL)
	{
		return (NULL);
	}



	s2 = malloc(strlen(s) + 1);



	if (s2 == NULL)
	{
		return (NULL);
	}
	strcpy(s2, s);
	return (s2);
}


