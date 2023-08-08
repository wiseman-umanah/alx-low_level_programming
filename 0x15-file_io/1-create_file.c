#include "main.h"

/**
* create_file - create a file and add content to it
* @filename: file to create
* @text_content: the content of the file
* Return: returns  1 if successful, -1 if failed
*/

int create_file(const char *filename, char *text_content)
{
	int fd, i, wr;

	i = 0;
	if (filename == NULL)
		return (-1);
	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (fd < 0)
		return (-1);
	if (text_content)
	{
		while (text_content[i] != '\0')
			i++;
		wr = write(fd, text_content, i);
		if (wr < 0)
			return (-1);
	}
	close(fd);
	return (1);
}
