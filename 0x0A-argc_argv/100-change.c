#include "main.h"

/**
 * main - prints the minimum number of coins to
 * make change for an amount of money
 * @argv: argument
 * @argc: nimber of argument
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;


	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	int cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	int num_coins = 0;
	int coins[] = { 25, 10, 5, 2, 1 };
	int num_coin_types = sizeof(coins) / sizeof(coins[0]);

	for (i = 0; i < num_coin_types; i++)
	{
		num_coins += cents / coins[i];
		cents %= coins[i];
	}

	printf("%d\n", num_coins);
	return (0);
}
