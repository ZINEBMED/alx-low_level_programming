#include "main.h"

/**
 * read_textfile - reads a text file and prints to the STDOUT
 * @filename: name of the file to be read
 * @letters: maximum number of letters to be read and printed
 *
 * Return: actual number of letters it could read and print
 * if filename is NULL return 0
 * if write fails return 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int f, lgth, i, rslt;
	char *buffer;

	if (filename == NULL)
		return (0);

	f = open(filename, O_RDONLY);
	if (f == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	read(f, buffer, letters);
	buffer[letters] = '\0';

	for (i = 0; buffer[i] != '\0'; i++)
		lgth += 1;

	rslt = close(fd);
	if (result != 0)
		exit(-1);

	rslt = write(STDOUT_FILENO, buffer, lgth);
	if (rslt != lgth)
		return (0);

	free(buffer);

	return (lgth);
i}
