/**Write a program that prints "$ ", 
 * wait for the user to enter a command, 
 * prints it on the next line.
 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
	size_t size = 1024;
	char *buffer = malloc(sizeof(char) * size);
	//ssize_t num_read;

	if (buffer == NULL)
		return (0);
	printf("$ ");
	//num_read =
	getline(&buffer, &size, stdin);
	printf("%s", buffer);
	free(buffer);
	return (0);
}
