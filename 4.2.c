/* Description: Table showing number in square and cubic. */
/* File name:   4.2.c                                     */
/* Date:        20200928                                  */
/* Author:      Jessica Thyselius                         */

/* Tilldela variabeln i ett värde (1-12).
Tabellen börjar på 1 och ökar med 1 tills siffran 12 är uppnådd.
För varje ökning beräknas talen i kvadrat och kubik. */

#include <stdio.h>
int main()
{
	printf("Tabell som visar\nKvadrat och kubik av talen 1-12!\n ");
	printf("\n");

	for (int i = 1; i <= 12; ++i)
	{
		printf("%3d %6d %6d\n", i, i*i, i*i*i);
	}
}