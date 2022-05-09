#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}

/**
 * append_text_to_file - append text and only if file exists
 * @filename: file
 * @text_content: appends this content into file
 * Return: 1 on success, -1 on error
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int nbre_wrote;

	if (!filename)
		return (-1);

	/* open file if it exists */
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	/* if nothing to write, still successful */
	if (!text_content)
	{
		close(fd);
		return (1);
	}

	/* write */
	nbre_wrote = write(fd, text_content, _strlen(text_content));
	if (nbre_wrote == -1 || nbre_wrote != _strlen(text_content))
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
