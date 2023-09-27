#include<stdio.h>
#include<math.h>
int main() {
		//Declaration variable
		const int D = 25000000; // distance in meter
		const int S = 3 * pow(10,8); // Speed of light m/s
		const int t = 1; // Trans time
		float t1, t2, t3; // subtotal of each file trans time
	    float C;//total trans time
		float P;// Propogation time

		P = (float)D / (float)S; // Propogation time = 0.083333s
		printf("Propagation time is %f\n", P);
		t1 = (3*8)/(float)t + P; //3MB file size
		printf("transmission time for 3MB required(s):%f s\n", t1);
		t2 = (18*8)/(float)t + P;//18MB file size
		printf("transmission time for 18MB required(s):%f s\n", t2);
		t3 = (15.75*8)/(float)t + P;//15.75MB file size
		printf("transmission time for 15.75MB required(s):%f s\n", t3);

		C = t1 + t2 + t3; // Total_time trans
		printf("total transmission time required:%f s\n", C);

		return 0;

}