#include "main.h"

/**
* append_text_to_file - appends text to a file
* @filename: destination file
* @text_content: string to be appended to file
* Return: returns 1 if successful, -1 if failed
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, i, wr;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_EXCL | O_APPEND | O_WRONLY);
	if (fd < 0)
		return (-1);
	if (text_content)
	{
		i = 0;
		while (text_content[i] != '\0')
			i++;
		wr = write(fd, text_content, i);
		if (wr < 0)
			return (-1);
	}
	close(fd);
	return (1);
}
