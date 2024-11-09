/*

	Group Members: Amnie, Alisya, Megat, Fikri
	Program: Online Food Ordering Application, "BabyPanda"
	Date: 29/4/2024

*/


#include <stdio.h>
#include <string.h>

void displayIntro();
void displayMenu();
void inputUserInfo();
char inputFood();

char userName[100], userAddress[100], userFeedback[100];
int userContact, totalOrder;

int main() {
	
	char foodSelected, service;
	int foodQuantity;
	
	
	displayIntro();
	inputUserInfo();
	displayMenu();
	
	foodSelected = inputFood();
	
	printf("\nName: %s \nAddress: %s \nContact Number: %d", userName, userAddress, userContact);
	printf("\nFood Selected: %c", foodSelected);
	
	
	return 0;
}

void inputUserInfo() {
	
	printf("\nPlease enter your name: ");
	gets(userName);
	//scanf("%19[^\n]s", userName);
	
	printf("Please enter your address: ");
	gets(userAddress);
	
	printf("Please enter your contact number: ");
	scanf("%d", &userContact);
	
	//scanf(" %[^\n]s", userAddress);
}

char inputFood() {
	
	char result;
	
	while (result != 'A' && result != 'B' && result != 'C' && result != 'D' && result != 'E') {
		printf("\nPlease choose any of food selection: ");
		scanf(" %c", &result);
		
		if (result != 'A' && result != 'B' && result != 'C' && result != 'D' && result != 'E') 
			printf("Incorrect food selection.");
	}
	
	
	return result;
}

void displayIntro() {
	/*
		Welcome to BabyPanda system!
		An online food ordering system that will save your time
		and ease your life.
		-------------------------------------------------------
		Food Selection:
		[A] - Nasi Lemak
		[B] - Nasi Goreng
		[C] - Nasi Ayam
		[D] - Nasi Kerabu
		[E] - Nasi Beriani
		-------------------------------------------------------
		Please choose any of the selected food: (prompt)
	*/
	printf("\nWelcome to BabyPanda system!");
	printf("\nAn online food ordering system that will save your time");
	printf("\nand ease your life.");
	printf("\n-------------------------------------------------------");
}

void displayMenu() {
	printf("-------------------------------------------------------");
	printf("\nFood selection:");
	printf("\n[A] - Nasi Lemak");
	printf("\n[B] - Nasi Goreng");
	printf("\n[C] - Nasi Ayam");
	printf("\n[D] - Nasi Kerabu");
	printf("\n[E] - Nasi Beriani");
	printf("\n-------------------------------------------------------");
}