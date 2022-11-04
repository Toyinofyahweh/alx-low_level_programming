#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @s: string.
 *
 * Return: Length.
 */

int _strlen(const char *s)
{
	int p = 0;
	/*increment up to when the last character is NULL,\0*/
		while (*(s + p) != 0)
		{
			p++;
		}
	return (p);
}
