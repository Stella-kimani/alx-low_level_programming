<<<<<<< HEAD
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints the last digit of the random
 * number stored in the variable n
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
printf("Last digit of %d is %d ", n, n % 10);
if (n % 10 > 5)
{
printf("and is greater than 5\n");
}
else if (n % 10 == 0)
{
printf("and is 0\n");
}
else if (n % 10 < 6 && n % 10 != 0)
{
printf("and is less than 6 and not 0\n");
}
return (0);
}

=======
#include <stdlib.h>
#include <time.h>
#include<stdio.h>
/**
* main - entry point
* 
* return: always 0 (success)
*/
int main (void)
{
int n;
int p;
srand(time(0));
n = rand() - RAND_MAX / 2;
p = (n % 10);
if (p > 5)
{
/* checks if no if positive */
printf("Last digit of %d is %d and is greater than 5\n", n, p);
/* checks if no is zero */
}
else if (p == 0)
{
printf("Last digit of %d is %d and is 0\n", n, p);
/* checks if no is negative */
}
else
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, p);
}
return (0);
}
>>>>>>> 354211b1255a74145c62a2afa05673b228ce4f53
