#include "main.h"
/**
 * _strcmp - Compare two strings
 * @s1: First string.
 * @s2: Second string.
 * Return: 0 if s1 and s2 are equals,
 * another number if not.
 *
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
	}
	return (0);
}
