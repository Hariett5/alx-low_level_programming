#include "main.h"
/**
* _strpbrk - Point of entry
* @s: The input
* @accept: The input
* Return: always 0 (Success)
*/
char *_strpbrk(char *s, char *accept)
{
int k;
while (*s)
{
for (k = 0; accept[k]; k++)
{
if (*s == accept[k])
return (s);
}
s++;
}
return ('\0');
}
