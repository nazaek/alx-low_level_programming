#include <stdio.h>
#include <stdlib.h>
#define J 5

/**
 * main - prints the minimum number of coins
 * @argc: argument count
 * @argv: argument vector, an array of strings
 * Description: the mimimum number of coins to
 * make change for a given amount of money
 * Return: 1 if argc > 2, 0 otherwise
 */

int main(int argc, char *argv[])
{
	int i, count = 0, amount;
	int coins[] = {1, 2, 5, 10, 25};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	amount = atoi(argv[1]);

	if (amount < 0)
	{
		printf("%d\n", 0);
		return (0);
	}
	for (i = J - 1; i >= 0; i--)
	{
		while (amount >= coins[i])
		{
			amount -= coins[i];
			count++;
		}
	}
	printf("%d\n", count);
	return (0);
}
