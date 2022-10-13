// Online C compiler to run C program online
// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
void prompt();
void token(char *buffer, ssize_t num_read, char **re);
void execute(char **mv);
int main() {
    // Write C code here
   // printf("Hello world");
    prompt();
    return 0;
}

/**
 * prompt
 * read
 * parse
 * execute
*/
void prompt()
{
    char *promptbuf = "$ ";
    size_t count = 2;
    ssize_t num_read;
    size_t n = 13;
    char *buffer;
    char **mv;
    
    buffer = malloc(sizeof(char) * n);
    //remember my error
    write(STDOUT_FILENO, promptbuf, count);
    //remember my error
    num_read = getline(&buffer, &n, stdin);
    printf("what you stored\n%s", buffer);
    token(buffer, num_read, mv);
    execute(mv);
    free(buffer);
}

//tokenize/parse

void token(char *buffer, ssize_t num_read, char **re)
{
    char bufcopy[num_read - 1], bufcopy2[num_read - 1];
    char *delim = " \n";
    char *token;
    int a = 0, i = 0;
    
    strcpy(bufcopy, buffer);
    strcpy(bufcopy2, buffer);
    printf("%s%s", bufcopy, bufcopy2);
    token = strtok(bufcopy, delim);
    /* to get tok num*/
    while (token)
    {
        a++;
        token = strtok(NULL, delim);
    }
    re = malloc((sizeof(char *) * a) + 1);
    //remember my error
    token = strtok(bufcopy2, delim);
    /* to get array of tokens*/
    while (token)
    {
        re[i] = malloc((sizeof(char) * strlen(token)) + 1);
	strcpy(re[i], token);
        printf("\n%s", re[i]);
        i++;
        //a++;
        token = strtok(NULL, delim);
    }
    printf("girls");
    //printf("\n%d", a);
    execute(re);
    //return (re);
}

//execution
void execute(char **mv)
{
    char *cmd = mv[0];
   // char *argv[] = mv;
    //char *en[];
    
    execve(cmd, mv, NULL);
    //remember errors
}
