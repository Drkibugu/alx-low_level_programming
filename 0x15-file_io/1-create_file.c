#include "main.h"

/**
 * create_file - This function creates a file in the code
 * @filename: This is the pointer to the name of the file to create
 * @text_content: This a pointer to a string to write to the file
 * Drkibugu
 * Return: This states that if the function fails - -1.
 * Otherwise - 1.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(fd, text_content, len);

	if (fd == -1 || w == -1)
		return (-1);

	close(fd);

	return (1);
}
