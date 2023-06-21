#include <stdio.h>
#include <stdlib.h>

/**
 * m - introduction to malloc and free
 * @n0: integer to store and print
 * @n1: integer to store and print
 * @n2: integer to store and print
 *
 * Return: 0
 */
void m(int n0, int n1, int n2)
{
	int *tab;
	int sum;
	
	tab = malloc(sizeof(*tab) * 3);
	tab[0] = n0;
	tab[1] = n1;
	tab[2] = n2;
	sum = tab[0] + tab[1] + tab[2];
	printf("%d + %d + %d = %d\n", tab[0], tab[1], tab[2], sum);
	free(tab);
}

/**
 * main - introduction to malloc and free
 *
 * Return: 0.
 */
int main(void)
{
	m(98, 402, -1024);
	return (0);
}
