#include "main.h"
/**
 * _strncat - Concatenates two strings,
 * @dest: the destination.
 * @src: the source.
 * @n: the amount of bytes used from src.
 * Return: the pointer to dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
