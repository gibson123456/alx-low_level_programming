#include "main.h"
/**
 * print_chessboard - prints the chessboard
 * @a: char pointer
 * print_chessboard: prints the chessboard over an array
 *
 */
void print_chessboard(char (*a)[8])
{
	/*Declaring variables*/
	int i, j;

	i = 0;
	while (i < 8) /*number repetitions*/
	{
		j = 0;
		while (j < 8)
		{
			_putchar (a[i][j]);
			j++;
		}
		_putchar ('\n'); /*print new line*/
		i++; /*add +1*/
	}
}
