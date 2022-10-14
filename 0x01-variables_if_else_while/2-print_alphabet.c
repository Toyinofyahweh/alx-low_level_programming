#include <stdio.h>

/**
 * main - printing alphabets in lower case
 *
 * Return: Always 0 (Successful)
 */
int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
