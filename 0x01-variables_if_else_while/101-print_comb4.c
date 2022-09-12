#include <stdio.h>
/**
 * main - print triple combos
 *
 * Description: print triple digit combos
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j, k;
	
	for (i = 48; i < 58; i++)
	{
		for (j = 49; j < 58; j++)
		{
			for (k = 50; k < 58; k++)
			{
				if (k > j && j > i)
				{
				putchar(i);
				putchar(j);
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
