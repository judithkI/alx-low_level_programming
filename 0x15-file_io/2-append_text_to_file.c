#include "main.h"
/**
 * append_text_to_file - function that appends text at the end of a file.
 * @filename: the file we are appending to
 * @text_content: the text we are appending
 * Return: returns an integer
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int ch, fd, num = 0;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd < 0)
		return (-1);
	if (text_content)
	{
		while (text_content[num])
			num++;
		ch = write(fd, text_content, num);
		if (ch < 0 || ch != num)
			return (-1);
	}
	close(fd);
	return (1);
}
