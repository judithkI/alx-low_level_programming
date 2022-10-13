#include <stdio.h>
#include <unistd.h>

int main(void)
{
	pid_t a, b;

	a = getpid();
	b = getppid();
	printf("%u\n%u\n", a, b);

	return (0);
}
