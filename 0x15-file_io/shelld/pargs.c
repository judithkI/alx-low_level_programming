#include <stdio.h>
#include <stdlib.h>
int main(_attribute_((unused))int ac, char **av)
{
	int i;

	for (i = 1; av[i] != NULL; i++)
	{
		printf("%s\n", av[i]);
	}

	return (0);
}
