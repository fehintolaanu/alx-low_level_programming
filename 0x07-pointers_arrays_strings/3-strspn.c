#include "main.h"

/**
* _strspn - gets lentgh of prefix sunsting
* @s: string to check
* @accept: string to check against
*
* Return: number of bytes of s in accept
*/
unsigned  int _strspn(char *s, char *acceept)
{
unsigned int i, j;
for (i = 0; s[i]; i++)
{
for (j = 0; accept[j]; j++)
{
if (s[i] == accept[j])
break;
}
if (!accept[j])
break;
}
return (i);
}

