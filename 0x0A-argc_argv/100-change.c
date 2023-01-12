#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>

/**
 * main - basic function.
 * @argc: argument count.
 * @argv: array.
 * Return: 0 if exactly 1 argument is passed into this program, 1 otherwise.
 */

int main(int argc, char *argv[])
{
int a, b, c, d;
int change[] = {25, 10, 5, 2, 1};

a = b = c = d = 0;

if (argc != 2)
{
printf("Error\n");
return (1);
}

b = atoi(argv[1]);

if (b <= 0)
{
printf("0\n");
return (0);
}

while (change[a] != '\0')

{
if (b >= change[a])
{
d = (b / change[a]);
c += d;
b -= change[a] * d;
}

a++;

}

printf("%d\n", c);
return (0);
}
