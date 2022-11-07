#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: file
 * @text_content: added text
 *
 * Return: 1 if success -1 otherwise
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int res, fd, length = 0;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		return (1);

	fd = open(filename, O_WRONLY | O_APPEND);
	
	if (fd == -1)
	{
		return (-1);
	}

	while (text_content[length])
	{
		length += 1;
	}

	res = write(fd, text_content, length);
	if (res == -1)
		return (-1);
	res = close(fd);
	if (res == -1)
		return (-1);
	return (1);

}
