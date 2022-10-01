#include <stdio.h>
#include <stdlib.h>
/**
 * main - adds positive numbers
 * @argc: number of arguments
 * @argv: array of strings
 * Return: 0, success
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;
	char *p;
	int num;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			num = strtol(argv[i], &p, 10);

			if (*p == '\0')
			{
				sum += num;
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	printf("%d\n", sum);

	return (0);
}
