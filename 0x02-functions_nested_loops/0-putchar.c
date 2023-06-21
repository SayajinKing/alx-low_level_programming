#include <main.h>

/**
 * main - Entry point
 *
 * Description: Prints the characters of the word "_putchar"
 *              using the putchar function.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char word[] = "_putchar";
	int i = 0;

	while (word[i] != '\0')
	{
		putchar(word[i]);
		i++;
	}

	putchar('\n');

	return (0);
}	
