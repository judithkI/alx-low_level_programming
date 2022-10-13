#include "main.h"
/**
 * main - program that copies the content of a file to another file.
 * @ac: the number of arguments
 * @av: pointer to the arguments
 * Return: returns an int
 */

int main(int ac, char **av)
{
	int fd1, fd2, num1, num2, c1, c2;
	char *buffer = malloc(sizeof(char) * 1024);

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit (97);
	}
	fd1 = open(av[1], O_RDONLY);
	num1 = read(fd1, buffer, 1024);
	if (fd1 < 0 || num1 < 0)
	{
		dprintf(STDERR_FILENO, "Can't read from file %s\n", av[1]);
		exit (98);
	}

	fd2 = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	num2 = write(fd2, buffer, 1024);
	if (fd2 < 0 || num2 < 0)
	{
		dprintf(STDERR_FILENO, "Can't write to file %s\n", av[2]);
		exit (99);
	}
	c1 = close(fd1);
	c2 = close(fd2);
	if (c1 < 0 || c2 < 0)
	{
		if (c1 < 0)
			dprintf(STDERR_FILENO, "Can't close fd %d\n", fd1);
		if (c2 < 0)
			dprintf(STDERR_FILENO, "Can't close fd %d\n", fd2);
		exit (100);
	}
	return (0);
}
