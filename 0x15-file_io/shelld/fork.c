/*Write a program that executes the command ls -l /tmp in 5 different child processes. Each child should be created by the same process (the father). Wait for a child to exit before creating a new child.*/

//executes the command ls -l /tmp in 5 different child processes
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
int main()
{
	//execute ls -l /tmp
	char *cmd = "/usr/bin/ls";
	char *args[] = {"/usr/bin/ls", "-l", "/tmp", NULL};
	char *en[] = {NULL};
	int f1, f2, f3, f4, f5, status;

	//5 different child processes.
	f1 = fork();
	if (f1 != 0)
	{
		wait(&status);
		f2 = fork();
		if (f2 != 0)
		{
			wait(&status);
			f3 = fork();
			if (f3 != 0)
			{
				wait(&status);
				f4 = fork();
				if (f4 != 0)
				{
					wait(&status);
					f5 = fork();
					wait(&status);
				}
			}
		}
	}
	//Wait for a child to exit before creating a new child.
	//printf("smoker\n");


	execve(cmd, args, en);

	return (0);
}

//Each child should be created by the same process (the father)

// Wait for a child to exit before creating a new child.

