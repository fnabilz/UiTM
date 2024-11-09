#include <stdio.h>

float totalamount(int,int,int,int);

int main() {
	
	int limasen, sepuluhsen, duapuluhsen, limapuluhsen;
	float jumlahduit;
	
	printf("Masukkan bilangan 5 sen: ");
	scanf("%d", &limasen);
	printf("Masukkan bilangan 10 sen: ");
	scanf("%d", &sepuluhsen);
	printf("Masukkan bilangan 20 sen: ");
	scanf("%d", &duapuluhsen);
	printf("Masukkan bilangan 50 sen: ");
	scanf("%d", &limapuluhsen);
	
	jumlahduit = totalamount(limasen,sepuluhsen,duapuluhsen,limapuluhsen);
	
	printf("\nJumlah duit: RM%.2f", jumlahduit);
	
	return 0;
}

float totalamount(int limasen, int sepuluhsen, int duapuluhsen, int limapuluhsen) {
	return (limasen * 0.05) + (sepuluhsen * 0.10) + (duapuluhsen * 0.20) + (limapuluhsen * 0.50);
}