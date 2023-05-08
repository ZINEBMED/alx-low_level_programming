#include "main.h"
#include <string.h>

/**
 * append_text_to_file - append text at the end of a file
 * @filename: name of the file containing string to be appended
 * @text_content: pointer to the string we want to append
 * Return: 1 on success | -1 on failure
 * if filename is NULL return -1 | if text_content is NULL dont add anything
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int f, rslt, leng;

	if (filename == NULL)
		return (-1);
	f = open(filename, O_WRONLY | O_APPEND);
	if (f == -1)
		return (-1);

	if (!text_content)
		return (1);

	leng = strlen(text_content);

	rslt = write(f, text_content, leng);
	if (rslt == -1)
		return (-1);

	rslt = close(f);
	if (rslt == -1)
		return (-1);

	return (1);
}
