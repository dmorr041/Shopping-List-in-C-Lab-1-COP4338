/*
 *	I affirm that this is my original work and not the work of anyone else.
 *	Darien Quinn Morrison 3380082
 *
 *	COP4338 Section U02
 *
 *	Simple C program to print out a shopping list of items. Items have
 *	a number, description, price and count.
 * */
#include <stdio.h>

int main()
{
	// Print my name for the output screenshot
	printf("\nDarien Quinn Morrison\n\n");

	// Print the header for the list
	printf("%-12s %-16s %12s %8s %14s\n\n", "Item Num", "Description",
		"Price", "Count", "Extended Price");
	
	// First item
	int number = 345;
	char description[20] = "Bookshelf";
	double price = 78.5;
	int count = 4;

	// Print the first item with extended price
	printf("%06d       %-16s $%11.2lf %8d      $%8.2lf\n",
		number, description, price, count, ((double)count * price));

	// Second item
	number = 7474;
	char description2[20] = "Pen";
	price = 2.99;
	count = 100;

	// Print the second item with extended price
	printf("%06d       %-16s $%11.2lf %8d      $%8.2lf\n",
		number, description2, price, count, ((double)count * price));

	// Third item
	number = 987;
	char description3[20] = "Chair";
	price = 129.99;
	count = 6;

	// Print the third item with extended price
	printf("%06d       %-16s $%11.2lf %8d      $%8.2lf\n",
		number, description3, price, count, ((double)count * price));

	// Fourth item
	number = 2342;
	char description4[20] = "Camera";
	price = 1295.40;
	count = 3;

	// Print the fourth item with extended price
	printf("%06d       %-16s $%11.2lf %8d      $%8.2lf\n",
		number, description4, price, count, ((double)count * price));

	// Fifth item
	number = 1984;
	char description5[20] = "Xbox One";
	price = 399.99;
	count = 4;

	// Print the fifth item with extended price
	printf("%06d       %-16s $%11.2lf %8d      $%8.2lf\n",
		number, description5, price, count, ((double)count * price));	
}
