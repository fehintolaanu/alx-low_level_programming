#include "main.h"
/**
* string-toupper - changes all lowercase letter
* @str: string
* Return: returns char
*/

char *string_toupper(char *str)
{
int i;

for (i =0; str{i} != '\0' i++)
{
if (str{i} >= 'a' && str{i} <= 'z')
{
str{i} = str{i} - 32;
}
}

return (str);
}
