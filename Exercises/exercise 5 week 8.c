#include <stdio.h>

#define S_rate 0.3
#define C_rate 0.1
#define M_rate 0.4

int main() {
	
	char product;
	float price, discount;
	
	while (product != 'X') {
		printf("Please enter product type (S/C/M): ");
		scanf(" %c", &product);
		if (product == 'S' || product == 's') {
			printf("Please enter price: ");
			scanf("%f", &price);
			discount = price - (price * S_rate);
			printf("Price after discount: RM %.2f\n\n", discount);
		}	
		else if (product == 'C' || product == 'c') {
			printf("Please enter price: ");
			scanf("%f", &price);
			discount = price - (price * C_rate);
			printf("Price after discount: RM %.2f\n\n", discount);
		}		
		else if (product == 'M' || product == 'm') {
			printf("Please enter price: ");
			scanf("%f", &price);
			discount = price - (price * M_rate);
			printf("Price after discount: RM %.2f\n\n", discount);
		}	
		else if (product == 'X')
			break;
		else
			printf("\nInvalid product type\n\n");
	}
	
	return 0;
}