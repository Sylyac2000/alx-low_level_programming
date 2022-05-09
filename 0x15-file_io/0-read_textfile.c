#include "main.h"

/**
 * read_textfile - read a certain size and prints to std output
 * @filename: file to read from
 * @letters: size to read
 * Return: the actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t nbre_read, nbre_wrote;
	char *buf;

	if (filename == NULL)
		return (0);

	/* open */
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	/* malloc buf */
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);

	/* read */
	nbre_read = read(fd, buf, letters);
	if (nbre_read == -1)
	{
		free(buf);
		close(fd);
		return (0);
	}

	/* write */
	nbre_wrote = write(STDOUT_FILENO, buf, nbre_read);
	if (nbre_wrote == -1)
	{
		free(buf);
		close(fd);
		return (0);
	}

	close(fd);
	return (nbre_read);

}
