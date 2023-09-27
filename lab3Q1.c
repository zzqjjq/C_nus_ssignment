#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define N 100
//module declaration
int Analyze(int A[], int s);
void Generate_Array(int A[], int s);

int main() {
	//Declaration
	srand(time(NULL));
	int signal_A[N];
	int	signal_B[N];//signal declared
	int A_count, B_count, Zero_Count_diff;//Zero Count
	printf("Generate array Signal A is:\n");
	Generate_Array(signal_A,N);
	printf("\nGenerate array Signal B is:\n");
	Generate_Array(signal_B,N);
	printf("\n\nSignal A");
	A_count = Analyze(signal_A,N);//return Zero Count A
	printf("\n\nSignal B");
	B_count = Analyze(signal_B,N);//return Zero count B
	Zero_Count_diff = A_count - B_count;
	printf("\n\n Zero count different between A and B: %d\n", Zero_Count_diff);
	

	return 0;
}


void Generate_Array(int A[], int s) {
	int c;// counter for generate random number
	for (c = 0; c < s; c++) {
		A[c] = rand() % 11 - rand() % 11;
		printf("%d,", A[c]);
	}
	return 0;
}

int Analyze(int A[], int s) {
	int c;
	int max = 10, min = -10;
	int Zero_count = 0;
	min = max = A[0];
	for (c = 0; c < s; c++) {
		if (A[c] < min)
			min = A[c];
		if (A[c] > max)
			max = A[c];
		if (A[c] == 0)
			Zero_count = Zero_count + 1;
	}
	printf("\nmaximum of array for signal is : %d", max);
	printf("\nminimum of array for signal is : %d", min);

	//Min and Max indices
	printf("\nindices of min is:");
	for (c = 0; c < s; c++) {
		if (A[c] == min)
		printf("%d,", c);
	}
	printf("\nindices of max is:");
	for (c = 0; c < s; c++) {
		if (A[c] == max)
		printf("%d,", c);
	}
	printf("\nNumber of zero Count: %d", Zero_count);
	return Zero_count;
}