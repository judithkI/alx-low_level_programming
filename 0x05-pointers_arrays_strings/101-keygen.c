#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"

/**
* main - entry point
*
* Return: generated password
*/

int main(void)
{
	char c;
	int x;

	srand(time(0));
	while (x <= 2645)
	{
		c = rand() % 128;
		if ((x + c) > 2772)
			break;
		x += c;
		printf("%c", c);
	}
	printf("%c\n", (2772 - x));

	return (0);
}
