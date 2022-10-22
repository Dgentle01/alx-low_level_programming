#include <main.h>
/**
 * main - prints the alphabet without q and e
 * return: always 0 (success)
 */
int main(void)
{
	int i;

	for (i = 97; I < 123; i++)
	{
		if (i != 101 &&  i != 113)
		{
			ptchr(i);
		}
	}
	putchar('\n');
	return (0);
}
