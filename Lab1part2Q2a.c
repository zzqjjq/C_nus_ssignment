#include<stdio.h>
#include<math.h>
int main() {
	//Declaration variable
	const int F = 20*8; // File size 20MB in bits
	const int D = 25000000; // distance in meter
	const int S = 3 * pow(10, 8); // Speed of light m/s
	float P;// Propogation time
	float t, b1, b2, b3, b4, C1, C2, C3, C4, C; // Trans time, Bandwidth and Total time
	P = (float)D / (float)S; // Propogation time = 0.083333s

	printf("Key in Bandwidth required(1Mbps):");
	scanf_s("%f", &b1);//input bandwidth
	printf("Key in Bandwidth required(5Mbps):");
	scanf_s("%f", &b2);//input bandwidth
	printf("Key in Bandwidth required(7.5Mbps):");
	scanf_s("%f", &b3);//input bandwidth
	printf("Key in Bandwidth required(10Mbps):");
	scanf_s("%f", &b4);//input bandwidth

	t = F / b1;//transmission time
	C1 = P + t; // sub_Total_time 
	printf("Total upload time is with 1Mbps %f s\n", C1);
	t = F / b2;//transmission time
	C2 = P + t; // sub_Total_time 
	printf("Total upload time is with 5Mbps %f s\n", C2);
	t = F / b3;//transmission time
	C3 = P + t; // sub_Total_time 
	printf("Total upload time is with 7.5Mbps %f s\n", C3);
	t = F / b4;//transmission time
	C4 = P + t; // sub_Total_time 
	printf("Total upload time is with 10Mbps %f s\n", C4);

	C = C1 + C2 + C3+ C4;//total time
	printf("Total upload time is %f s\n", C);

	return 0;

}