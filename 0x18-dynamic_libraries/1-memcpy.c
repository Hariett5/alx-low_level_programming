#include "main.h"
/**
*_memcpy - function that copies memory area
*@dest: Memory where is stored
*@src: Memory where is copied
*@n: The number of bytes
*
*Return: Copy memory with n byted changed
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
int r = 0;
int i = n;
for (; r < i; r++)
{
dest[r] = src[r];
n--;
}
return (dest);
}
