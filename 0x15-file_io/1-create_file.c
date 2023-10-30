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
	int count, length;

	length = _strlen(text_content);
	if (filename == NULL)
		return (-1);
	count = open(filename, O_CREAT | O_RDWR | O_TRUNC);
	if (length > 0)
		count = write(count, text_content, length);
	if (count == -1)
		return (-1);
	close(count);
	return (1);
}
