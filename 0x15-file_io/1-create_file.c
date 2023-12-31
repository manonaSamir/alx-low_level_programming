#include "main.h"
#include "main.h"

/**
 * _strlen - function that returns the length of a string.
 * @s: string to measure.
 *
 * Return: Length of the string as INT.
 */

int _strlen(char *s)
{
	if (*s)
		return (1 + _strlen((s + 1)));
	return (0);
}

/**
 * create_file - Creates a file.
 * @filename: A pointer to the name of the file to create.
 * @text_content: A pointer to a string to write to the file.
 * Return: If fails -(-1)
 */

int create_file(const char *filename, char *text_content)
{
	int fptr, count, length = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
		length = _strlen(text_content);
	fptr = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	count = write(fptr, text_content, length);
	if (fptr == -1 || count == -1)
		return (-1);
	close(fptr);
	return (1);
}
