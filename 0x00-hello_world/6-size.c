#include <stdio.h>

/**
 * main - Printing size of various type
 *
 * Return: Always 0 (Successful)
 */
int main(void)
{

	printf("size of a char: %Id byte(s)\n", sizeof(char));
	printf("size of an int: %Id byte(s)\n", sizeof(int));
	printf("size of a long int: %Id byte(s)\n", sizeof(long int));
	printf("size of a long long int: %Id byte(s)\n", sizeof(long long int));
	printf("size of a float: %Id byte(s)\n", sizeof(float));
	return (0);
}
