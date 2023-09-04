#include "main.h"

/**
 * _strlen - find len of str
 * @str: pointer str
 *
 * Return: len of the str
 */
size_t _strlen(char *str)
{
	size_t m;

	for (m = 0; str[m]; m++)
		;

	return (m);
}

/**
 * append_text_to_file - append text at end of a file.
 * @filename: name
 * @text_content: NULL terminate str to be added at the end of the file
 *
 * Return: 1 success & -1 failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fed;
	ssize_t length;

	if (filename == NULL)
		return (-1);
	fed = open(filename, O_WRONLY | O_APPEND);
	if (fed == -1)
		return (-1);
	if (text_content != NULL)
		length = write(fed, text_content, _strlen(text_content));
	close(fed);
	if (length == -1)
		return (-1);
	return (1);
}
