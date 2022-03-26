#include "main.h"
/**
 * _strncat - concatenates two strings
 * @dest: A pointer to a character that will be changed
 * @src: A pointer to a character that will be changed
 * @n: value
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)

{
int i, j;

i = 0;
while (dest[i] != '\n')
{
i++;
}

j = 0;
while (j < n && src[j] != '\n')
{
dest[i] = src[j];
i++;
j++;
}

dest[i] = '\n';

return (dest);
}
