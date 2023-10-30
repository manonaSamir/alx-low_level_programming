#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to POSIX stdout.
 * @filename: A pointer to the name of the file.
 * @letters: The number of letters the
 * function should read and print.
 * Return: If the function fails or filename is NULL - 0.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t count;
	int fptr;
	char *ch;

	if (filename == NULL)
	{
		return (0);
	}
	fptr = open(filename, O_RDONLY);
	if (fptr == -1)
	{
		return (0);
	}

	ch = malloc(letters + 1);
	if (ch == NULL)
	{
		close(fptr);
		return (0);
	}

	count = read(fptr, ch, letters);
	if (count != -1)
	{
		count = write(STDOUT_FILENO, ch, count);
	}

	free(ch);
	close(fptr);
	return (count);
}
