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

	size_t i = 0;
	ssize_t count = 1;
	FILE *fptr;
	char ch;

	fptr = fopen(filename, "r");

	if (fptr == NULL)
	{
		return (0);
	}

	for (; i <= letters; i++)
	{
		ch = fgetc(fptr);
		if (feof(fptr))
		{
			break;
		}
		_putchar(ch);
		count++;
	}

	fclose(fptr);
	return (count);
}
