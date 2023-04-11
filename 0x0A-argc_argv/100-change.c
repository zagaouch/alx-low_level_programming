#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - program that calculates the minimum number of coins needed to make change
 *        for an amount of money in cents.
 * @argc: the number of command line arguments
 * @argv: an array of strings representing the command line arguments
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	int cents, coins, remaining;
       	if (argc != 2)
	{
		printf("Error\n");
		eturn 1;
	}
	cents = atoi(argv[1]);
	if (cents < 0)
	{
		printf("0\n");
		return 0;
	}
	coins = cents / 25;
	remaining = cents % 25;
	coins += remaining / 10;
	remaining = remaining % 10;
	coins += remaining / 5;
	remaining = remaining % 5;
	coins += remaining / 2;
	remaining = remaining % 2;
	coins += remaining;
	printf("%d\n", coins);
	return 0;
}
