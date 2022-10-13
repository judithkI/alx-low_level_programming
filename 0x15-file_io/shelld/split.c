// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void split(char *buffer);
char **sarray(char *buffer, int bufsize, char *delim);
int main() {
    // Write C code here
    //printf("Hello world");
    char buffer[] = "my life is hidden in Christ.";
    //char *buffer = buffr;
    printf("Hello world\n");
    split(buffer);
    return 0;
}
/* i want to tokenize a string and return a pointer to tokens*/

void split(char *buffer)
{
    char *delim = " \n";
    char *token;
    char *dup = malloc(sizeof(char) * strlen(buffer) + 1);
    int a = 1;
    //char *mv;
    dup = strcpy(dup, buffer);
    printf("%s\n", dup);
    //tokenize buffer
    token = strtok(buffer, delim);
    //a = 1;
    printf("%s %d", token, a);
    while (token != NULL)
    {
        token = strtok(NULL, delim);
        a++;
        printf("%s %d", token, a);
    }
    sarray(dup, a, delim);
    //*mv = malloc(sizeof(char) * a);
    //if (mv == NULL)
        //return;
    printf("\n%d", a);
}

char **sarray(char *buffer, int bufsize, char *delim)
{
    char *mv[bufsize - 1];
    char *token;
    int i = 0;
    char **a;

    token = strtok(buffer, delim);
    printf("hgkjdh\n");
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
    a = mv;
    printf("%d", i);
    return (a);
}
