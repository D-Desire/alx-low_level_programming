#include <stdio.h>
/**
 * main-program entry point
 * Return: 0 if no error, non zero if error
*/
int main(void)
{
	int k;
	char hexnum;

	for (k = 0; k < 10; k++)
		putchar((k % 10) + '0');

	for (hexnum = 'a'; hexnum <= 'f'; hexnum++)
		putchar(hexnum);

	putchar('\n');

	return (0);
}
