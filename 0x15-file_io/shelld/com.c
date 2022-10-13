// Online C compiler to run C program online
//Using everything we saw, write a first version of a super simple shell that can run commands with their full path, without any argument.
//prompt
//parsing
//execution
#include  <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void prompt();
void parsing(char *buf, ssize_t bufsize);
void sarray(char *buffer, size_t bufsize, char *delim);
void action(char **bufptr);
int main ()
{
	prompt();

	return (0);
}
//prompt
void prompt()
{
	char *buffer = "$ ";
	int count = 2;
	ssize_t num_read;
	size_t c = 1024;
	char *buf;

//	num_read = getline(&buf, &c, stdin);
	write(STDOUT_FILENO, buffer, count);
	//remember my error
	num_read = getline(&buf, &c, stdin);
	//remember my error
	//calling parsinng
	parsing(buf, num_read);
}
//parsing
void parsing(char *buf, ssize_t bufsize)
{
	    char *delim = " \n";
	    char *token;
	    char dup[bufsize - 1];
	    char **mv;
	    size_t a = 1;
	    //char *mv;
	    strcpy(dup, buf);
	    //printf("%s\n", dup);
	    //tokenize buffer
	    token = strtok(buf, delim);
	    //a = 1;
	    //printf("%s %d", token, a);
	    while (token != NULL)
	    {
		token = strtok(NULL, delim);
		a++;
		//printf("%s %d", token, a);
	    }
	    sarray(dup, a, delim);
	    //*mv = malloc(sizeof(char) * a);
	    //if (mv == NULL)
		//return;
	   // printf("%d", a);
	   //action(mv);
}

void sarray(char *buffer, size_t bufsize, char *delim)
{
	    char *mv[bufsize - 1];
	    char *token;
	    size_t i = 0;
	    char **a;

	    token = strtok(buffer, delim);
	   // printf("hgkjdh\n");
	    //mv[i] = malloc((sizeof(char) * strlen(token)) + 1);
	    //mv[i] = strcpy(mv[i], token);
	    //printf("%s %d", token, a);
	    //printf("\n%s\n", token);
	    //printf("%s", mv[i]);
	    while (token != NULL)
	    {
		mv[i] = malloc((sizeof(char) * strlen(token)));
		strcpy(mv[i], token);
		printf("%s\n", mv[i]);
		//i++;
		token = strtok(NULL, delim);
		i++;
		//mv[i] = malloc((sizeof(char) * strlen(token)) + 1);
		//mv[i] = strcpy(mv[i], token);
	       // a++;
	       // printf("%s %d", token, a);
	    }
	    //mv[1+i] = NULL;
	    //a = mv;
	    //printf("%d", i);
	    //return (a);
	    action(mv);
}

//execurion
void action(char **bufptr)
{
	    char *cmd = bufptr[0];
	    char **agrs = bufptr;

	    execve(cmd, 
	    agrs, 
	    NULL);
}
