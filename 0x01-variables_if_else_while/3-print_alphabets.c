#include <stdio.h>
/**
 * main - Prints the alphabet.
 * Return: Always 0 (Success)
 */
int main(void)
{
	char i;
	char j;

	for (i = 'a'; i <= 'z'; i++)
	{
	putchar(i);
	}
	for (j = 'A'; j <= 'z'; j++)
	{
	putchar(j);														}
	putchar('\n');

	return (0);
}
