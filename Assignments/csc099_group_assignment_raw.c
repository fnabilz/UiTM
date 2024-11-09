#include <stdio.h>
// function to input user information
void inputUserInformation(char name[], char contact_number[], char address[]) {
     printf("Please enter your name: ");
     scanf(" %[^\n]%*c", name);
     
     printf("Please enter your contact number: ");
     scanf(" %19[^\n]%*c", contact_number);
     
     printf("Please enter your address: ");
     scanf(" %[^\n]%*c", address);
}

// function to calculate total cost
float calculateTotalCost(float prices[], int quantities[], int size) {
    float total = 0.0;
    for (int i = 0; i < size; i++) {
         total += prices[i] * quantities[i];
    }
    return total;
}

int main() {
   // menu prices
   float main_course_prices[] = {7.60, 8.90, 9.00};
   float desserts_prices[] = {5.99, 3.50, 4.30};
   float beverages_prices[] = {2.50, 7.50, 2.40};
   
   // menu options
   char *main_course[] = {"Nasi Lemak", "Kuey Teow", "Mee Goreng"};
   char *desserts[] = {"Brownies", "Ice Cream Sundae", "Muffins"};
   char *beverages[] = {"Mineral Water (Spritzer)", "Carrot Juice", "Kopi O"};
   
   // delivery fee
  const float DELIVERY_FEE = 3.99;
  
  // greeting
  printf("Welcome to BabyPanda food ordering application!\n");
  
  // user info
  char name[100];
  char contact_number[20];
  char address[200];
  inputUserInformation(name, contact_number, address);
  
  // greeting
  printf("\nHello, %s!", name);
  
  // initialize cart
  float total_cost = 0.0;
  int quantities[9] = {0}; // Array to store quantities of menu items (3 for each category)
  // menu selection
  int choice;
  do {
     printf("\nPlease select a category:\n");
     printf("1. Main Course\n");
     printf("2. Desserts\n");
     printf("3. Beverages\n");
     printf("4. View Cart\n");
     printf("5. Checkout\n");
     printf("6. Exit\n");
     printf("\nEnter your choice: ");
     scanf("%d", &choice);
     
     if (choice >= 1 && choice <= 3) {
         switch (choice) {
             case 1:
                 printf("\nMain Course:\n");
                 for (int i = 0; i < 3; ++i) {
                     printf("%d. %s - RM%.2f\n", i + 1, main_course[i], main_course_prices[i]);
                }
                break;
             case 2:
                printf("\nDesserts:\n");
                for (int i = 0; i < 3; ++i) {
                     printf("%d. %s - RM%.2f\n", i + 1, desserts[i], desserts_prices[i]);
                 }
                 break;
             case 3:
                printf("\nBeverages:\n");
                for (int i = 0; i < 3; ++i) {
                     printf("%d. %s - RM%.2f\n", i + 1, beverages[i], beverages_prices[i]);
                 }
                 break;
        }
        int selection;
        printf("\nPlease select a menu item (1-3) or 0 to go back: ");
        scanf("%d", &selection);
        if (selection >= 1 && selection <= 3) {
            int quantity;
            printf("Enter the quantity: ");
            scanf("%d", &quantity);
            quantities[(choice - 1) * 3 + selection - 1] += quantity;
            switch (choice) {
                case 1:
                     total_cost += main_course_prices[selection - 1] * quantity;
                     break;
                case 2:
                     total_cost += desserts_prices[selection - 1] * quantity;
                     break;
                case 3:
                      total_cost += beverages_prices[selection - 1] * quantity;
                     break;
            }
            printf("Item added to cart!\n");
        } else if (selection != 0) {
            printf("Invalid menu item!\n");
        }
    } else if (choice == 4) {
        printf("\nYour Cart:\n");
        int cart_empty = 1;
        for (int i = 0; i < 3; ++i) {
            if (quantities[i * 3] > 0 || quantities[i * 3 + 1] > 0 || quantities[i * 3 + 2] > 0); {
                cart_empty = 0;
                switch (i + 1) {
                    case 1:
                        printf("Main Course:\n");
                        for (int j = 0; j < 3; ++j) {
                            if (quantities[j] > 0) {
                                 printf("- %s x %d\n", main_course[j], quantities[j]);
                               }
                        }
                        break;
                    case 2:
                        printf("Desserts:\n");
                        for (int j = 0; j < 3; ++j) {
                             if (quantities[j + 3] > 0) {
                                  printf("- %s x %d\n", desserts[j], quantities[j + 3]);
                             }
                        }
                        break;
                    case 3:
                        printf("Beverages:\n");
                        for (int j = 0; j < 3; ++j) {
                             if (quantities[j + 6] > 0) {
                                 printf("- %s x %d\n", beverages[j], quantities[j + 6]);
                              }
                         }
                         break;
                }
            }
        }
        if (cart_empty) {
            printf("Your cart is empty.\n");
        }
        printf("Subtotal: RM%.2f\n\n", total_cost);
    } else if (choice == 5) {
      // checkout
      char checkout_choice;
      printf("\nWould you like delivery (D) or self-pickup (P)? Enter D or P: ");
      scanf(" %c", &checkout_choice);
      if (checkout_choice == 'D' || checkout_choice == 'd') {
         printf("Delivery fee added: RM%.2f\n", DELIVERY_FEE);
      } else if (checkout_choice != 'P' && checkout_choice != 'p') {
          printf("Invalid choice! Defaulting to self-pickup.\n");
      }
      
        printf("\nThank you for your order! Here is your receipt.\n");
        printf("\n-------------------------------------------------------------------------");
        printf("\n\t   BabyPanda Order Receipt\t      ");
        printf("\n-------------------------------------------------------------------------");
        printf("\nOrder number: 123456789");
        printf("\nDate: 29 April 2024");
        printf("\n-------------------------------------------------------------------------");
        printf("\nBilling Information:");
        printf("\nName: %s", name);
        printf("\nContact Number: %s", contact_number);
        printf("\nAddress: %s", address);
        printf("\n-------------------------------------------------------------------------");
        printf("\nItems Ordered:");
        printf("\n-------------------------------------------------------------------------");
        printf("\nSubtotal: RM%.2f", total_cost);
        printf("\nDelivery Fee: RM%.2f", DELIVERY_FEE);
           total_cost += DELIVERY_FEE;
        printf("\nTotal: RM%.2f", total_cost);
        printf("\n-------------------------------------------------------------------------");
        printf("\nThank you for choosing BabyPanda! Hope you enjoy your meal.");
        printf("\nDont hesistate to ask us questions at (email: enquiries@babypanda.com)");
        printf("\n-------------------------------------------------------------------------");
     // feedback
     printf("\n\nPlease leave your feedback (press Enter when done):\n");
     char feedback[500];
     scanf(" %[^\n]%*c", feedback);
     printf("Thank you for your feedback!\n");
     
            return 0;
         } else if (choice != 6) {
              printf("Invalid choice!\n");
         }
     } while (choice != 6);
     return 0;
}