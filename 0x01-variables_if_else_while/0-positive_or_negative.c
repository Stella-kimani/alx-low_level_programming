#include <stdlib.h>
#include <time.h>
#include <stdio.h>

<<<<<<< HEAD


/*
*
* main - assigns a random number to int n everytime
*
*
* Return: Always 0 (Success)
*
*/

=======
/**
 * main - assigns a random number to int n everytime
 * it executes, and prints it
 * Return: Always 0 (Success)
 */
>>>>>>> b6e000c892dedfa4eddcd33864b1e4e39f6ab4c2
int main(void)
{
<<<<<<< HEAD

int n;


srand(time(0));

n = rand() - RAND_MAX / 2;
/*code here*/

if (n > 0)
{
/*checks if no is positive */
printf("%d is positive\n", n);
}
else if (n == 0)
{
printf("%d is zero\n", n);
}
else if (n < 0)
{
printf("%d is negative\n", n);
}
return (0);

=======
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	return (0);
>>>>>>> b6e000c892dedfa4eddcd33864b1e4e39f6ab4c2
}
