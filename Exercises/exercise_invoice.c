
#include <stdio.h>

// declare constant variables
const float price_tart = 30.00;
const float price_cookies = 28.00;
const float price_cake = 20.00;

int main()
{
	// declare variables
	int num_order, quantity_tart, quantity_cookies, quantity_cake;
	float total_tart, total_cookies, total_cake, total_price;
	
	// display description data
	printf("Item\t\t\tDescription\t\tPrice (RM)");
	printf("\n----\t\t\t-----------\t\t----------");
	printf("\nPinneapple Tart\t\t50 pcs\t\t\t%.2f", price_tart);
	printf("\nAlmond Cookies\t\t50 pcs\t\t\t%.2f", price_cookies);
	printf("\nFruit Cake\t\t50 pcs\t\t\t%.2f", price_cake);
	
	// get input from user
	printf("\n\nEnter order no: ");
	scanf("%d", &num_order);
	
	printf("Enter quantity for Pineapple Tart: ");
	scanf("%d", &quantity_tart);
	
	printf("Enter quantity for Almond Cookies: ");
	scanf("%d", &quantity_cookies);
	
	printf("Enter quantity for Fruit Cake: ");
	scanf("%d", &quantity_cake);
	
	// quick maths
	total_tart = quantity_tart * price_tart;
	total_cookies = quantity_cookies * price_cookies;
	total_cake = quantity_cake * price_cake;
	
	total_price = total_tart + total_cookies + total_cake;
	
	// display invoice data
	printf("\n\t\t\t**INVOICE**");
	printf("\nOrder No: %d", num_order);
	printf("\nItem\t\t\tQuantity\t\tPrice (RM)");
	printf("\n----\t\t\t--------\t\t----------");
	printf("\nPinneapple Tart\t\t%d\t\t\t%.2f", quantity_tart, total_tart);
	printf("\nAlmond Cookies\t\t%d\t\t\t%.2f", quantity_cookies, total_cookies);
	printf("\nFruit Cake\t\t%d\t\t\t%.2f", quantity_cake, total_cake);
	printf("\n\nTOTAL PRICE (RM): %.2f", total_price);
}