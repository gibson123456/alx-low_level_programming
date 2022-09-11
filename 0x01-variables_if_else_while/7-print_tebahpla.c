#include <stdio.h>
/**
 * main - main function
 *
 * Return: end program
 */
int main(void)
{
	char lowcase;

	for (lowcase = 'z'; lowcase >= 'a'; lowcase--)
		putchar(lowcase);
	putchar('\n');
	return (0);
}

