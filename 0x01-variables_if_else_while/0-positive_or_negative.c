#include <stdio.h>

	#include <stdlib.h>

	#include <time.h>

	



	/**

	 * main - assigns a random number to int n

	 *

	 * Return: return 0 if correct

	 */

	int main(void)

	{

		int n;

		int l;

	



		srand(time(0));

		n = rand() - RAND_MAX / 2;

		if (n > 0)

			printf("%d is positive\n", n);

		else if (n == 0)

			printf("%d is zero\n", n);

		else if (n < 0)

			printf("%d is negative\n", n);

		return (0);

		n = rand() - RAND_MAX / 2;

	}

