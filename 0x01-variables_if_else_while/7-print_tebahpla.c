#include <stdio.h>

/**
 * main - entry of program
 *
 * Return: Always 0 (Successful)
 */
int main(void)
{
	char i;

	for (i = 'z'; i >= 'a'; i--)
		putchar(i);
	putchar('\n');
	return (0);
}
