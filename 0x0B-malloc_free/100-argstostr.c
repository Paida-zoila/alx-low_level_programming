#include <stdlib.h>
#include "holberton.h"

/**
* *argstostr - concatenates all the arguments of the program
* @ac: number of arguments
* @av: array of arguments
* Return: Pointer to the new string (Success), NULL (Error)
*/

char *argstostr(int ac, char **av)

{
int a;

int b;

char *t;

int index;

int c = 0;

index = 0;
if (ac == 0 || av == NULL)
return (NULL);
for (a = 0; a < ac; a++)
{
for (b = 0; av[a][b] != '\0'; b++)
;
(c = c + b);
}
t = malloc(sizeof(char) * (ac + c + 1));
if (t == NULL)
return (NULL);
for (a = 0; a < ac; a++)
{
for (b = 0; av[a][b] != '\0'; b++, index++)
t[index] = av[a][b];
t[index] = '\n';
(index = index + 1);
}
return (t);
}
