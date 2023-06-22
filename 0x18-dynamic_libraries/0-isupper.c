#include "main.h"

/**
 * _isupper - Checks if the parameter is an uppercase char.
 * @c:Input character.
 * Return: 1 if is an uppercase char, 0 in other case.
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
