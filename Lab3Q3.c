#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define N 10
int Max_Finder(int x1, int x2, int x3, int x4, int x5);
int main()
{
	int c;
	int x1 = 1, x2 = 2, x3 = 3, x4 = 4, x5 = 5;
	int *ip;
	int *ip1, *ip2, *ip3, *ip4, *ip5;
	int *ip6[10];
	int sum;
	int product;
	int Signal[N];
	int Prefix_Sum[N];
	srand(time(NULL));

	ip = &x1, ip = &x2, ip = &x3, ip = &x4, ip = &x5;
	printf("\nDisplay value of  x1 to x5:%d,%d,%d,%d,%d\n", x1, x2, x3, x4, x5);//i)
	printf("\nDisplay address location of  x1 to x5:%x,%x,%x,%x,%x\n", &x1, &x2, &x3, &x4, &x5);//ii)

	ip1 = &x1, ip2 = &x2, ip3 = &x3, ip4 = &x4, ip5 = &x5;
	printf("\nDisplay value of  x1 to x5 using pointer variable:%d,%d,%d,%d,%d\n", *ip1, *ip2, *ip3, *ip4, *ip5);//iii)
	sum = *ip1 + *ip2 + *ip3 + *ip4 + *ip5;//sum with pointer
	product = *ip1 * *ip2 * *ip3 * *ip4 * *ip5;//product with pointer
	printf("\nDisplay sun of  x1 to x5 using pointer variable:%d\n", sum);//iv)
	printf("\nDisplay product of  x1 to x5 using pointer variable:%d\n", product);//v)

	Max_Finder(*ip1,*ip2,*ip3,*ip4,*ip5);//max vi)

	printf("\n");
	printf("Generate 10 random value of Signal array:");
	for (c = 0; c < N; c++) {
		Signal[c] = (rand() % (200-10+1))+10;//random number signal
		ip6[c] = &Signal[c];
		printf("%d,", *ip6[c]);//vii)
	}
	printf("\n");
	printf("The Prefix_Sum values :");
	Prefix_Sum[0] = Signal[0];
	printf("%d,", *(Signal + 0)); // first number
	for (c = 1; c < N; c++) 
	{
		*(Prefix_Sum + c) = *(Prefix_Sum + c - 1) + *(Signal + c);

		printf("%d,",*(Prefix_Sum + c));// consecutive numbers viii)
	}
	printf("\n");
	return 0;
}



int Max_Finder(int x1,int x2,int x3,int x4,int x5)
{
	int c, max;
	if (x1 > x2)
		max = x1;
	else if (x2 > x3)
		max = x2;
	else if (x3 > x4)
		max = x3;
	else if (x4 > x5)
		max = x4;
	else
		max = x5;	

	printf("\nMax of  x1 to x5 using pointer variable:%d\n", max);

	return 0;
}