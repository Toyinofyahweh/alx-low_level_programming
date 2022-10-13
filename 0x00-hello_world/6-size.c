#include <stdio.h>

/**
 * main - Printing size of various type
 *
 * Return: Always 0 (Successful)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf("size of a char: %Id byte(s)\n", sizeof(a));
	printf("size of an int: %Id byte(s)\n", sizeof(b));
	printf("size of a long int: %Id byte(s)\n", sizeof(c));
	printf("size of a long long int: %Id byte(s)\n", sizeof(d));
	printf("size of a float: %Id byte(s)\n", sizeof(e));
	return (0);
}
