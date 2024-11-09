
#include <stdio.h>

// declare constant values
#define chicken_price 13.90
#define days 6

int main()
{
	
	// declare variables
	int quantity_1, quantity_2, quantity_3, quantity_4, quantity_5, quantity_6, total_quantity;
	float total_sales, average_sales;
	
	// get input from user
	printf("Enter quantity of chicken sold in day 1,2,3,4,5,6: ");
	scanf("%d %d %d %d %d %d", &quantity_1, &quantity_2, &quantity_3, &quantity_4, &quantity_5, &quantity_6);
	
	// quick mathz
	total_quantity = quantity_1 + quantity_2 + quantity_3 + quantity_4 + quantity_5 + quantity_6;
	total_sales = chicken_price * total_quantity;
	average_sales = total_sales / days;
	
	// display output
	printf("\n\n Ali Roasted Chicken Sales");
	printf("\n--------------------------------");
	printf("\n Amount of chickens sold in a week: %d", total_quantity);
	printf("\n Total sales in a week: RM%.2f", total_sales);
	printf("\n Average sales in a week: RM%.2f", average_sales);
	printf("\n─▄▀▀▀▀▄─█──█────▄▀▀█─▄▀▀▀▀▄─█▀▀▄");
	printf("\n─█────█─█──█────█────█────█─█──█");
	printf("\n─█────█─█▀▀█────█─▄▄─█────█─█──█");
	printf("\n─▀▄▄▄▄▀─█──█────▀▄▄█─▀▄▄▄▄▀─█▄▄▀");
	printf("\n");
	printf("\n─────────▄██████▀▀▀▀▀▀▄");
	printf("\n─────▄█████████▄───────▀▀▄▄");
	printf("\n──▄█████████████───────────▀▀▄");
	printf("\n▄██████████████─▄▀───▀▄─▀▄▄▄──▀▄");
	printf("\n███████████████──▄▀─▀▄▄▄▄▄▄────█");
	printf("\n█████████████████▀█──▄█▄▄▄──────█");
	printf("\n███████████──█▀█──▀▄─█─█─█───────█");
	printf("\n████████████████───▀█─▀██▄▄──────█");
	printf("\n█████████████████──▄─▀█▄─────▄───█");
	printf("\n█████████████████▀███▀▀─▀▄────█──█");
	printf("\n████████████████──────────█──▄▀──█");
	printf("\n████████████████▄▀▀▀▀▀▀▄──█──────█");
	printf("\n████████████████▀▀▀▀▀▀▀▄──█──────█");
	printf("\n▀████████████████▀▀▀▀▀▀──────────█");
	printf("\n──███████████████▀▀─────█──────▄▀");
	printf("\n──▀█████████████────────█────▄▀");
	printf("\n────▀████████████▄───▄▄█▀─▄█▀");
	printf("\n──────▀████████████▀▀▀──▄███");
	printf("\n──────████████████████████─█");
	printf("\n─────████████████████████──█");
	printf("\n────████████████████████───█");
	printf("\n────██████████████████─────█");
	printf("\n────██████████████████─────█");
	printf("\n────██████████████████─────█");
	printf("\n────██████████████████─────█");
	printf("\n────██████████████████▄▄▄▄▄█");
	printf("\n");
	printf("\n─────────────█─────█─█──█─█───█");
	printf("\n─────────────█─────█─█──█─▀█─█▀");
	printf("\n─────────────█─▄█▄─█─█▀▀█──▀█▀");
	printf("\n─────────────██▀─▀██─█──█───█");
}