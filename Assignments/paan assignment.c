/*
	Title: Panama Hotel
	Description: Ease customers to select for hotel services and ease employer to update thing in the array
	Written by: Ahmad Danish Farhan bin Ahmad Zawani/Muhammmad Izzuddin bin Roslan
	Date: 10/3/2024
	Group: PI009E05B
*/

#include <stdio.h>
#include <string.h>

// Function prototype
int selector(int options);
int preface(void);
int checkin(void);
int service(void);
int facilities(void);
int quantity();
float pricing();
void storing(const char selection[], const int quantity[], const float price[]);
void calcdisplay(char finalselection[8][60], int finalqty[], float finalprice[]);

int main(void)
{
    // Initialization
    int chosen = preface();

    switch (chosen)
    {
        case 1:
            checkin();
            break;
        case 2:
            service();
            break;
        case 3:
            facilities();
            break;
        case 4:
            printf("\n\n\n\n\n\n\n\t\t\tProgram stopped...\n\n\n\n\n\n\n\n");
            return 0;
        default:
        {
            printf("Unexpected error occured!!!\n");
            return 0;
        }
    }

    return 0;
}

int preface(void)
{
    int option = 5;

    printf("-----------------------------------------------------------------\n");
    printf("|\t\t\tPanama Hotel Service\t\t\t|\n");
    printf("-----------------------------------------------------------------\n");
    printf("|\t\t\t\t\t\t\t\t|\n");
    printf("|\t[1] Room Reservation\t\t[2] Room Service\t|\n");
    printf("|\t\t\t\t\t\t\t\t|\n");
    printf("|\t[3] Hotel Facilities\t\t[4] Total Bill\t\t|\n");
    printf("|\t\t\t\t\t\t\t\t|\n");
    printf("|\t[5] Exit program\t\t\t\t\t|\n");
    printf("|\t\t\t\t\t\t\t\t|\n");
    printf("-----------------------------------------------------------------\n");
    printf("\n");

    selector(option);
}

int checkin(void)
{
	int option = 3;

	printf("-----------------------------------------------------------------\n");
	printf("|\t\t\tRoom Reservation\t\t\t|\n");
	printf("-----------------------------------------------------------------\n");
    printf("|\t\t\t\t\t\t\t\t|\n");
	printf("|\t[1] Room of 2\t\t\t[2] Room of 4\t\t|\n");
    printf("|\t\t\t\t\t\t\t\t|\n");
	printf("|\t[3] Go back\t\t\t\t\t\t|\n");
    printf("|\t\t\t\t\t\t\t\t|\n");
	printf("-----------------------------------------------------------------\n");
    printf("\n");
	
	int choosen = selector(option);
    if (choosen == 3)
    {
        preface();
    }
    else
    {
        quantity();
        pricing();
    }
    // selected(rlist[choosen - 1]);
    checkin();
}

int service(void)
{
	int option = 5;

	printf("-----------------------------------------------------------------\n");
	printf("|\t\t\tRoom Service\t\t\t\t|\n");
	printf("-----------------------------------------------------------------\n");
    printf("|\t\t\t\t\t\t\t\t|\n");
	printf("|\t[1] Breakfast\t\t\t[2] Lunch\t\t|\n");
    printf("|\t\t\t\t\t\t\t\t|\n");
	printf("|\t[3] Dinner\t\t\t[4] Go back\t\t|\n");
    printf("|\t\t\t\t\t\t\t\t|\n");
	printf("-----------------------------------------------------------------\n");
    printf("\n");
	
	int choosen = selector(option);
    if (choosen == 4)
    {
        preface();
    }
    else
    {
        quantity();
        pricing();
    }

    service();
}

int facilities(void)
{
	int option = 3;
    char name[3][60] = {"Spa","Fitness Gym","Bicycle Rental"};

	printf("-----------------------------------------------------------------\n");
	printf("|\t\t\tHotel Facilities\t\t\t|\n");
	printf("|---------------------------------------------------------------|\n");
    printf("|\t\t\t\t\t\t\t\t|\n");
	printf("|\t[1] Spa\t\t\t\t[2] Fitness Gym\t\t|\n");
    printf("|\t\t\t\t\t\t\t\t|\n");
	printf("|---------------------------------------------------------------|\n");
    printf("|\t\t\t\t\t\t\t\t|\n");
	printf("|\t[3] Bicycle Rental\t\t[4] Go back\t\t|\n");
    printf("|\t\t\t\t\t\t\t\t|\n");
	printf("-----------------------------------------------------------------\n");
    printf("\n");
	
	int chosen = selector(option);
    if (chosen == 4)
    {
        preface();
    }
    else
    {
        storing(name[chosen], quantity(), pricing());
    }

    facilities();
}

// Allows user to choose their desired option (Code recycled for other functions)
int selector(int options)
{
	int choice = 0;

	do
	{
        printf("Please select: ");
		
		if (scanf("%d", &choice) != 1 || choice < 1 || choice > options)
		{
			printf("Invalid value!!!\n");
            while (getchar() != '\n'); // Clears any remenance in the buffer
		}
	}
	while (choice < 1 || choice > options);
	
	return choice;
}

int quantity()
{
	int quantity[10];

	do
	{
        printf("Enter quantity: ");
		
		if (scanf("%d", &quantity[0]) != 1 || quantity[0] < 1)
		{
			printf("Invalid value!!!\n");
            while (getchar() != '\n'); // Clears any remenance in the buffer
		}
	}
	while (quantity[0] < 1);
	
	return quantity;
}

float pricing()
{
	float price[10] = {0};

	do
	{
        printf("Enter price: ");
		
		if (scanf("%f", &price[0]) != 1 || price[0] < 1)
		{
			printf("Invalid value!!!\n");
            while (getchar() != '\n'); // Clears any remenance in the buffer
		}
	}
	while (price[0] < 1);
	
	return price;
}

void storing(const char selection[], int (*quantity)[], float (*price)[])
{
    int choice = 8;
    char selected[choice][60];
    int amount[choice];
    float pricing[choice];

    for (int i = 0; i < choice; i++)
    {
        strcpy(selected[i], selection[i]);
        amount[i] = quantity[i];
        pricing[i] = price[i];

    }
    calcdisplay(selected, amount, pricing);
}

void calcdisplay(char finalselection[8][60], int finalqty[], float finalprice[])
{
    float sum = 0;
    float total = 0;

    printf("Selected\t\t\tQuantity\t\t\tPrice\n");

    for (int i = 0; i < 8; i++)
    {
        sum = finalprice[i] * finalqty[i];
        printf("%d. %s %d %f\n", i + 1, finalselection[i], finalqty[i], sum);
        total += sum;
    }

    printf("\t\t\t\t\t\t\tFinal total: %.2f", sum);
}