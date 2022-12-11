/*
*Write statements that compute and display the absolute difference of two type 
double variables, x and y(|x - y|)
*/

/*
*program menghitung angka dan rumus yang sudah ditentukan
*/
#include <stdio.h> /* definitions of printf, scanf */
#include <math.h> /* definition Returns the absolute value of
its integer argument*/

int main()
{
	double x,y,hasil,z;
	printf("Masukkan x:");
	scanf("%lf", &x);
	
	printf ("Masukka y:");
	scanf("%lf",&y);
	z=fabs(x-y);
	
	printf("Hasilnya adalah: %lf",z);
	
	
}
