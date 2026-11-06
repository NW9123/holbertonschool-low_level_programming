#include <stdio.h>

/**
 * print_menu - prints the calculator menu
 */
void print_menu(void)
{
	printf("Simple Calculator\n");
	printf("1) Add\n");
	printf("2) Subtract\n");
	printf("3) Multiply\n");
	printf("4) Divide\n");
	printf("0) Quit\n");
}

/**
 * main - entry point of the calculator, shows the menu until 0 is chosen
 *
 * Return: Always 0.
 */
int main(void)
{
	int choice = -1;

	print_menu();
	while (choice != 0)
	{
		printf("Choice: ");
		if (scanf("%d", &choice) != 1)
			break;
		if (choice < 0 || choice > 4)
			printf("Invalid choice\n");
		else if (choice != 0)
			printf("Not implemented yet\n");
	}
	printf("Bye!\n");

	return (0);
}
