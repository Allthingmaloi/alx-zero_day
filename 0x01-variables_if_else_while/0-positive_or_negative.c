#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
  * main - main function here
  *Return: always 0
  */
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	printf("%d it is positive\n", n);
	else if (n < 0)
	printf("%d it is negative\n", n);
	else
	printf("%d it is zero\n", n);
	return (0);
}
