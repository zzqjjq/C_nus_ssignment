#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main() {
	//Declaration
	int c;//A counter for generate random number
	int i;//A counter for zero count
	int a;//A counter from index 0 ~ 49
	int b;//A counter from index 50 ~ 99 
	int t;//B counter for zero count 
	int l;//B counter from index 0 ~ 49
	int k;//B counter from index 50 ~ 99 
	int min, max;//declare A min and max
	int minb, maxb;//declare B min and max
	int d1, d2;// difference between max and min for signal A and B respectively
	int signal_A[100],Zero_Bias_A[100], signal_B[100], Zero_Bias_B[100];//signal declared
	float p;//percentage difference 0 count for A and B
	srand(time(NULL));
	//random numger generate 
	printf("Generate array Signal A is:\n");
	for (c = 0; c <= 99; c++) {
		signal_A[c] = rand() % 11 - rand() % 11;
		printf("%d,", signal_A[c]);
	}
	printf("\nGenerate array Signal B is:\n");
	for (c = 0; c <= 99; c++) {
		signal_B[c] = rand() % 11 - rand() % 11;
		printf("%d,", signal_B[c]);
	}
	//max and min output
	min = max = signal_A[0];//set min and max to 1st signalA value
	for (c = 0; c <= 99; c++) {

		if (signal_A[c] < min)
			min = signal_A[c];

		if (signal_A[c] > max)
			max = signal_A[c];
	}
	printf("\n\nmaximum of array for signal A is : %d", max);
	printf("\nminimum of array for signal A is : %d", min);
	

	minb = maxb = signal_B[0];//set min and max to 1st signalA value
	for (c = 0; c <= 99; c++) {

		if (signal_B[c] < minb)
			minb = signal_B[c];

		if (signal_B[c] > maxb)
			maxb = signal_B[c];
	}
	printf("\nmaximum of array for signal B is : %d\n", maxb);
	printf("minimum of array for signal B is : %d\n", minb);
	

	//zero bias output
	printf("\nZero bias array for signal A is :\n");
	for (c = 0; c <= 99; c++)
	{
		Zero_Bias_A[c] = signal_A[c];
		if (signal_A[c] < 0)
			Zero_Bias_A[c] = 0;
		printf("%d,", Zero_Bias_A[c]);
	}

	printf("\n\nZero bias array for signal B is :\n");
	for (c = 0; c <= 99; c++)
	{
		Zero_Bias_B[c] = signal_B[c];
		if (signal_B[c] < 0)
			Zero_Bias_B[c] = 0;
		printf("%d,", Zero_Bias_B[c]);
	}


	//Display zero indices
	printf("\n\nZero at indices for signal A:\n");
	for (c = 0; c <= 99; c++)
	{
		if (Zero_Bias_A[c] == 0)
			printf("%d,", c);
	}
	printf("\n\nZero at indices for signal B :\n");
	for (c = 0; c <= 99; c++)
	{
		if (Zero_Bias_B[c] == 0)
			printf("%d,", c);
	}
	//Display zero count
	printf("\n\nTotal Zero Count for signal A:");
	i = 0;
	for (c = 0; c <= 99; c++) {
		if (Zero_Bias_A[c] == 0) {
			i++;
    }
	}
	printf("%d,", i);
	printf("\nTotal Zero Count for signal B:");
	t = 0;
	for (c = 0; c <= 99; c++) {
		if (Zero_Bias_B[c] == 0) {
			t++;
	}
	}
	printf("%d,", t);
	//Display zero count from 0 - 49
	a = 0;
	printf("\nTotal Zero Count from index 0 to 49 for signal A :");
	for (c = 0; c <= 49; c++) {
		if (Zero_Bias_A[c] == 0) {
			a++;
		}
	}
	printf("%d,", a);

	l = 0;
	printf("\nTotal Zero Count from index 0 to 49 for signal B :");
	for (c = 0; c <= 49; c++) {
		if (Zero_Bias_B[c] == 0) {
			l++;
		}
	}
	printf("%d,", l);
	//Display zero count from 50 - 99
	b = 0;
	printf("\nTotal Zero Count from index 50 to 99 for signal A:");
	for (c = 50; c <= 99; c++) {
		if (Zero_Bias_A[c] == 0) {
			b++;
		}
	}
	printf("%d,", b);

	k = 0;
	printf("\nTotal Zero Count from index 50 to 99 for signal B:");
	for (c = 50; c <= 99; c++) {
		if (Zero_Bias_B[c] == 0) {
			k++;
		}
	}
	printf("%d,", k);
	//A and B Zero count percentage difference
	p = ((float)i - (float)t) / (float)t * 100;
	printf("\n\nZero Count Percentage difference of signal A and B:");
	printf("%0.3f%%\n\n", p);

	//Display signal A or B with more zero
	printf("Signal wtih more zero from 0~49 indices:\n");
	if (l < a)
		printf("Singal A:");
	if (a < l)
		printf("Singal B:");
	if (a == l)
		printf("They has same count of 0");
	for (c = 0; c <= 49; c++) {
	if (l < a) 
	printf("%d,", Zero_Bias_A[c]);
	if (a < l)
	printf("%d,", Zero_Bias_B[c]);
	}
	printf("\nSignal wtih more zero from 50~99 indices:\n");
	if (k < b)
		printf("Singal A:");
	if (b < k)
		printf("Singal B:");
	if (b == k)
		printf("They has same count of 0");
	for (c = 50; c <= 99; c++) {
		if (k < b)
			printf("%d,", Zero_Bias_A[c]);
		if (b < k)
			printf("%d,", Zero_Bias_B[c]);
	}
	//Difference of max and min for A and B
	d1 = max - maxb;
	d2 = min - minb;
	printf("\n\nDifference between max values is : %d", d1);
	printf("\nDifference between min values is : %d", d2);

	return 0;
} 