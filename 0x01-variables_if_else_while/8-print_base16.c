#include <stdio.h>
/**
 * main - function
 *
 *Return:always 0 (Success)
 */
int main(void)
{
	int f;
	char lower;

	for (f = '0'; f <= '9'; f++)
		putchar(f);
	for (lower = 'a' ; lower <= 'f'; lower++)
		putchar(lower);
	putchar ('\n');
	return (0);
}
