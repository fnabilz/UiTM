
#include <stdio.h>

// declare constant variables
const float harga_susu = 3.50;
const float harga_kicap = 4.00;
const float harga_tepung = 4.00;
const float harga_gula = 1.80;
const float harga_sardin = 3.70;

int main()
{
	// declare variables
	int q_susu, q_kicap, q_tepung, q_gula, q_sardin;
	float t_susu, t_kicap, t_tepung, t_gula, t_sardin, total;
	
	// get input from user
	printf("Enter quality for susu: ");
	scanf("%d", &q_susu);
	
	printf("Enter quality for kicap: ");
	scanf("%d", &q_kicap);
	
	printf("Enter quality for tepung: ");
	scanf("%d", &q_tepung);
	
	printf("Enter quality for gula: ");
	scanf("%d", &q_gula);
	
	printf("Enter quality for sardin: ");
	scanf("%d", &q_sardin);
	
	// quick maths
	t_susu = q_susu * harga_susu;
	t_kicap = q_kicap * harga_kicap;
	t_tepung = q_tepung * harga_tepung;
	t_gula = q_gula * harga_gula;
	t_sardin = q_sardin * harga_sardin;
	
	total = t_susu + t_kicap + t_tepung + t_gula + t_sardin;
	
	// display data
	printf("\n\n\t\t    FRESH GROCER");
	printf("\n\t\tTaman Serene, Sepang");
	printf("\n\n\t\t\t\tQTY\t RM");
	printf("\n\t\t\t\t---\t----");
	printf("\n1 Sihat Susu Pekat Manis\t %d\t%.2f", q_susu, t_susu);
	printf("\n2 Alam Kicap Masin\t\t %d\t%.2f", q_kicap, t_kicap);
	printf("\n3 Tepung Gandum Pelita\t\t %d\t%.2f", q_tepung, t_tepung);
	printf("\n4 Gula Kasar\t\t\t %d\t%.2f", q_gula, t_gula);
	printf("\n5 Tasty Sardines\t\t %d\t%.2f", q_sardin, t_sardin);
	printf("\n\t\t\t\t\t----");
	printf("\n\n\t\t\t\tTotal\t%.2f", total);
}