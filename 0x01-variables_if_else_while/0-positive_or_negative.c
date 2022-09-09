1   #include <stdio.h>
2   #include <stdlib.h>
3   #include <time.h>
4   /**
5    * main - Entry point
6    *
7    * Return: Always 0 (Success)
8    */
9   int main(void)
10  {
11    	    int n;
12
13          srand(time(0));
14          n = rand() - RAND_MAX / 2;
15          if (n > 0)
16                  printf("%d is positive\n", n);
17          else if (n == 0)
18                  printf("%d is zero\n", n);
19          else
20                  printf("%d is negative\n", n);
21          return (0);
22  }


