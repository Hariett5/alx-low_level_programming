#include "main.h"
/**
* _strchr - Point of entry
* @s: the input
* @c: the input
* Return: Always 0 (Success)
*/
char *_strchr(char *s, char c)
{
int i = 0;
for (; s[i] >= '\0'; i++)
{
if (s[i] == c)
return (&s[i]);
}
return (0);
}
