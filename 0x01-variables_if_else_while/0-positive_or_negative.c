#include <stdlib.h>

#include <time.h>

#include <stdio.h>



/**
 * main - Printing positive, negative and zero
 *
 * Description: depending on the value of n, print positive
 * negative or zero
 *
 * Return: Always 0 (Successful)
 */

int main(void)

{

		int n;



			srand(time(0));

				n = rand() - RAND_MAX / 2;

					if (n > 0)
					{
					printf("%d is positive\n", n);
					}
					else if (n == 0)
					{
					printf("%d is zero\n", n);
					}
					else if (n < 0)
					{
					printf("%d is negative\n", n);

					return (0);

}
