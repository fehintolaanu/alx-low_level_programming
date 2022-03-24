#include "main.h"
#include <stdio.h>

/**
* strcmp - Compares two strings
* @s1: A pointer that points to character that will be changed
* @s2: A pointer that points to a character that will be also changed or modified
* Return: dest
*/

int _strcmp(char *s1, char *s2);


{

char *strc_one = s1;
char *str_two = s2;

while (*str_one != '\0' && *str_two != '\0' && *str_one == *str_two)
{
str_one++;
str_two++;
    }
return (*str_one - *str_two);
}
