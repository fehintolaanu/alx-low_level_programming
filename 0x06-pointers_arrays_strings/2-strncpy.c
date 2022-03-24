#include "main.h"
#include <stdio.h>

/**
 *_strncpy - COpies a string
 *@dest: A pointer to a character that will be changed
 *@src: A pointer to a character that will be changed
 *@n: value
 *Return: dest
 */

char *_strncpy(char *dest, char *src, int n)

{
int i;

i = 0;
while (i < n && src {i} != '\0')
{
dest{i} = src {i};
i++;
}

j = 0;
while (j < n && src {j} != '\0')
{
dest{i} = src{j}
i++;
j++;
}

dest{i} = '\0';

return (dest);
}
