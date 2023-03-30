#include "main.h"
/* *_strcat -  function that concatenates two strings.
 *
 */
char *_strcat(char *dest, char *src)
{
	char *result = dest; // Save initial address of dest
	while (*dest != '\0') { // Find the end of dest
        dest++;
	}
	while (*src != '\0') { // Concatenate src to dest
	*dest = *src;
	dest++;
	src++;
	}
	*dest = '\0'; // Add null terminator at the end
	return result;
}
