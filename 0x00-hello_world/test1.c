#include <stdio.h>

/**
 * main : prints sum of two numbers
 *
 * Return: sum
 */

int main(void)
{
	int a = 0;
	int b = 0;

	printf("Enter first number: ");
	scanf("%d", &a);

	printf("Enter second number: ");
	scanf("%d", &b);

	int sum = 0;
	sum = a + b;

	printf("sum is %d\n", sum);
}
