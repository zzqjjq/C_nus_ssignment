#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<stdbool.h>
#define P 100

//module declaration
void Generate_Database(struct computer q);
void Print_Database(struct computer q);
void Analyze(struct computer q);
struct computer 
{
	float Cost;
	int brand;
	int Ram;
	bool GPU;
	float Database_c[P];
	int Database_r[P];
	int Database_b[P];
	int Database_G[P];
};
struct computer d;// declare global struct

int main()
{
	srand(time(NULL));
	Print_Database(d);
	Analyze(d);

	return 0;
}

void Generate_Database(struct computer q)
{
	int c;// counter for generate random number
	for (c = 0; c < 100; c++) {
		d.brand = rand() % 6;
		d.Database_b[c] = d.brand;
	}
	for (c = 0; c < 100; c++) {
		d.Cost = (5000 - 500 + 1) * (((float)rand()) / (float)(RAND_MAX))+500;
		d.Database_c[c] = d.Cost;
	}
	for (c = 0; c < 100; c++){
		d.Ram = (rand() % 6) + 2;
		d.Ram = pow(2, d.Ram);
		d.Database_r[c] = d.Ram;
		}
		
	for (c = 0; c < 100; c++) {
		d.GPU = rand() % 2 + 0;
		d.Database_G[c] = d.GPU;

	}
	return 0;
}
void Print_Database(struct computer q)
{
	int c;// counter for generate random number
	Generate_Database(d);
	printf("Brand number (Item 1 to 5):");
	for (c = 0; c < 5; c++) {
		printf("%d,", d.Database_b[c]);
	}
	printf("\n");
	printf("Cost (Item 1 to 5):");
	for (c = 0; c < 5; c++) {
		printf("%.2f,", d.Database_c[c]);
	}
	printf("\n");
	printf("Ram size (Item 1 to 5):");
	for (c = 0; c < 5; c++) {
	    printf("%d,", d.Database_r[c]);
	}
	printf("\n");
	printf("GPU (Item 1 to 5):");
	for (c = 0; c < 5; c++) {
		printf("%d,", d.Database_G[c]);
	}
	return 0;
}
		
		
		void Analyze(struct computer q)
	{
		int c;
		float minc;
		int ming, minb, minr;
		int mine;
		Generate_Database(d);
		minc = d.Database_c[0];
		mine = 0;
		for (c = 0; c < 100; c++)
		{
			if (d.Database_c[c] < minc && d.Database_G[c] == 1)
		{   
			mine = c;
			minc = d.Database_c[c];
			ming = d.Database_G[c];
			minb = d.Database_b[c];
			minr = d.Database_r[c];
		}
		}
		printf("\n\nCheapest item's price with GPU:%.2f",minc);//price
		printf("(With Brand: %d, ,CPU: %d, and Ram: %d,)",minb,ming,minr);

		printf("\nCheapest item's index with GPU:%d\n", mine);//index for answer check
	return 0;
    }