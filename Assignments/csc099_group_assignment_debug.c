// debugging

/*

	Group Members: Amnie, Alisya, Megat, Fikri
	Program: Online Food Ordering Application, "BabyPanda"
	Date: 29/4/2024

*/

#include <stdio.h>

float main_course_prices[] = {
	7.60, // Nasi Lemak
	8.90, // Kuey Teow
	9.00  // Mee Goreng
};
	
float desserts_prices[] = {
	5.99, // Brownies
	3.50, // Ice Cream Sundae
	4.30  // Muffins
};
	
float beverages_prices[] = {
	2.50, // Mineral Water (Spritzer)
	7.50, // Carrot Juice
	2.40  // Kopi O
};

// menu options : 2d array because of string (also an array) is being stored inside of an array
char main_course[][100] = {"Nasi Lemak", "Kuey Teow", "Mee Goreng"};
char desserts[][100] = {"Brownies", "Ice Cream Sundae", "Muffins"};
char beverages[][100] = {"Mineral Water (Spritzer)", "Carrot Juice", "Kopi O"};

// all the user data for the program
char user_name[100]; // to store the name of the user
char user_address[200]; // to store the address of the user
char user_contact[20]; // to store the contact number : use string as precaution incase of user input "-" into the variable
int order_number = 0; // to store number of order user has completed

float total_cost = 0.0; // to store total amount of cost
int main_course_quantity[3];  // to store the quantity for each dish in each food category
int desserts_quantity[3];
int beverages_quantity[3];

int i; // for looping

// function prototype
void input_user_info();
void prompt_checkout();
void prompt_user(int choice);
float prompt_voucher();

void display_intro();
void display_item(int action);
void display_category();
void reset();

int main() {

	int choice;
	
	// user info
	display_intro();
	input_user_info();
	
	// greeting
	display_category();
	
	while (choice != 6) {
		printf("\nEnter your category: ");
		scanf("%d", &choice);
	
		// choice 1-3 : will display menu and ask for user selection
		if (choice == 1 || choice == 2 || choice == 3) {
			printf("-------------------------------------------------------------------------");
			prompt_user(choice);
			
		}
		// choice 4 : display the items in the cart
		else if (choice == 4) { 
			printf("-------------------------------------------------------------------------");
			printf("\nYour Cart:\n");
			display_item(0);
		}
		// choice 5 : process the checkout, reset and create new order once checkout completed
		else if (choice == 5) {
			printf("-------------------------------------------------------------------------");
			prompt_checkout();
			reset();
			display_category();
		}
		// choice 6 : exit the program
		else if (choice == 6) {
			break;
		}
		// error handling : incase of invalid input of choice
		else {
			printf("\nInvalid category!");
		}
	}
	
	return 0;
}
	
// function to ask user for choice
void prompt_user(int choice) {
	
	// display based on category : use for loop to print out items in the array
	if (choice == 1) {
		printf("\nMain course:");
		for (i = 0; i < 3; i++) {
			printf("\n%d. %s - RM%.2f", i + 1, main_course[i], main_course_prices[i]);
		}
	}
	else if (choice == 2) {
		printf("\nDesserts:");
		for (i = 0; i < 3; i++) {
			printf("\n%d. %s - RM%.2f", i + 1, desserts[i], desserts_prices[i]);
		}
	}
	else {
		printf("\nBeverages:");
		for (i = 0; i < 3; i++) {
			printf("\n%d. %s - RM%.2f", i + 1, beverages[i], beverages_prices[i]);
		}
	}
	
	// select menu item
	int selection = 0;
	
	while (selection != 1 && selection != 2 && selection != 3) {
		printf("\n\nPlease select a menu item (1-3): ");
		scanf("%d", &selection);
		
		// selection (1-3) : user select correct item
		if (selection == 1 || selection == 2 || selection == 3) {
			
			// ask to enter quantity for the item
			int quantity = 0;
			
			while (quantity <= 0) {
				printf("Enter the quantity: ");
				scanf("%d", &quantity);
				
				// error handling
				if (quantity < 0)
					printf("Invalid quantity!");
			}
			
			// program will add the quantity based on the category selection and will add the price into the total cost
			if (choice == 1)  {
				main_course_quantity[selection - 1] += quantity;
				total_cost += main_course_prices[selection - 1] * quantity;
			}
			else if (choice == 2) {
				desserts_quantity[selection - 1] += quantity;
				total_cost += desserts_prices[selection - 1] * quantity;
			}
			// if choice 3
			else {
				beverages_quantity[selection - 1] += quantity;
				total_cost += beverages_prices[selection - 1] * quantity;
			}
			
			printf("\nItem(s) added to cart!");
			printf("\n-------------------------------------------------------------------------");
		}
		// error handling
		else {
			printf("Invalid selection!");
		}
	}
}

// function to ask service
void prompt_checkout() {
	
	// ask for delivery service
	char checkout_choice;
	float delivery_fee = 0.0;
	
	while (checkout_choice != 'P' && checkout_choice != 'D') {
		printf("\nWould you like delivery (D) or self-pickup (P)? Enter D or P: ");
		scanf(" %c", &checkout_choice);
	
		// error handling
		if (checkout_choice != 'P' && checkout_choice != 'D') {
			printf("Invalid choice!");
		}
	}
	
	if (checkout_choice == 'D')
		delivery_fee = 3.99;
	
	// find voucher (will return a value)
	float voucher = prompt_voucher();
	
	// print receipt
	printf("\nThank you for your order! Here is your receipt.\n");
	
	printf("\n-------------------------------------------------------------------------");
	printf("\n\t BabyPanda Order Receipt\t ");
	printf("\n-------------------------------------------------------------------------");
	
	printf("\nOrder number: %d", ++order_number);
	printf("\nDate: 29 April 2024");
	
	printf("\n-------------------------------------------------------------------------");
	
	printf("\nBilling Information:");
	printf("\nName: %s", user_name);
	printf("\nContact Number: %s", user_contact);
	printf("\nAddress: %s", user_address);
	
	printf("\n-------------------------------------------------------------------------");
	
	printf("\nItems Ordered:\n");
	display_item(1); // passing by value (1) will not print the subtotal in the function
	printf("\nSubtotal: RM%.2f", total_cost);
	printf("\nDelivery Fee: RM%.2f", delivery_fee);
	printf("\nVoucher: RM%.2f", voucher);
	printf("\nTotal: RM%.2f", total_cost + delivery_fee - voucher);
	
	printf("\n-------------------------------------------------------------------------");
	printf("\nThank you for choosing BabyPanda! Hope you enjoy your meal.");
	printf("\nDont hesistate to ask us questions at (email: enquiries@babypanda.com)");
	printf("\n-------------------------------------------------------------------------");
	
	// prompt for feedback
	char feedback[500];
	printf("\n\nPlease leave your feedback (press Enter when done):\n");
	scanf(" %[^\n]s", feedback);                                                  
	printf("Thank you for your feedback!\n\n");
	printf("-------------------------------------------------------------------------");
}

// function to reset total_cost and all quantities
void reset() {
	for (i = 0; i < 3; i++) {
		main_course_quantity[i] = 0;
 	}
	
	for (i = 0; i < 3; i++) {
		desserts_quantity[i] = 0;
	}
	
	for (i = 0; i < 3; i++) {
		beverages_quantity[i] = 0;
	}
	
	total_cost = 0.0;
	
	printf("\n|                                                                       |");
	printf("\n|                                                                       |");
	printf("\n|                                                                       |");
	printf("\n-------------------------------------------------------------------------");
}

// function to find voucher
float prompt_voucher() {
	
	char choice;
	float voucher = 0.0;
	
	// voucher can only be applied if user has done 1 order
	if (order_number > 0) {
		
		while (choice != 'Y' && choice != 'N') {
			printf("Would you like to use a RM3 voucher? Enter Y or N: ");
			scanf(" %c", &choice);
			
			// error handling
			if (choice != 'Y' && choice != 'N') 
				printf("Invalid choice!");
		}
		
		// if user want voucher, determine voucher
		if (choice == 'Y')
			voucher = 3.00;
	}
	
	return voucher;
}

// function to input user information
void input_user_info() {
	
	printf("Please enter your name: ");
	scanf("%[^\n]s", user_name); 
	
	printf("Please enter your contact number: ");
	scanf(" %[^\n]s", user_contact);
	
	printf("Please enter your address: ");
	scanf(" %[^\n]s", user_address); 
	
	printf("-------------------------------------------------------------------------");
}

// function to display items in cart
void display_item(int action) {
	
	int total_items = 0;
	
	// using for loops to display each items that has quantity > 0 in the category
	for (i = 0; i < 3; i++) {
		if (main_course_quantity[i] > 0) {
			printf("- %s x %d\n", main_course[i], main_course_quantity[i]);
			total_items += main_course_quantity[i];
		}
	}
	
	for (i = 0; i < 3; i++) {
		if (desserts_quantity[i] > 0) {
			printf("- %s x %d\n", desserts[i], desserts_quantity[i]);
			total_items += desserts_quantity[i];
		}
	}
	
	for (i = 0; i < 3; i++) {
		if (beverages_quantity[i] > 0) {
			printf("- %s x %d\n", beverages[i], beverages_quantity[i]);
			total_items += beverages_quantity[i];
		}
	}
	
	// in case of no item exist
	if (total_items == 0) 
		printf("Empty\n");
		
	// only show when user enter category 4
	if (action == 0)
		printf("\nSubtotal: RM%.2f\n", total_cost);
	
	printf("-------------------------------------------------------------------------");
}

// function to display category
void display_category() {
	printf("\nHello, %s!\n", user_name);
	printf("\nPlease select a category:\n");
	printf("1. Main Course\n");
	printf("2. Desserts\n");
	printf("3. Beverages\n");
	printf("4. View Cart\n");
	printf("5. Checkout\n");
	printf("6. Exit\n");
	printf("-------------------------------------------------------------------------");
}

// function to display introduction
void display_intro() {
	printf("Welcome to BabyPanda food ordering application!");
	printf("\nAn online food ordering system that will save your time");
	printf("\nand ease your life.");
	printf("\n-------------------------------------------------------------------------\n");
}