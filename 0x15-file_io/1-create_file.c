#include "main.h"
/**
 * create_file - function that creates a file
 * @filename: the name of the file we want to open
 * @text_content: the text we want to add
 * Return: returns an integer
 */
int create_file(const char *filename, char *text_content)
{
	int fd, y, num = 0;

	fd = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);
	if (fd < 0)
		return (-1);
	if (!filename)
		return (-1);
	if (text_content)
	{
		while (text_content[num])
			num++;
	}
	y = write(fd, text_content, num);
	if (y < 0 || y != num)
		return (-1);
	close(fd);
	return (1);
}
