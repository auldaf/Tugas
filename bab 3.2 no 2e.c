/*
*program menghitung angka dan rumus yang sudah ditentukan
*/
#include <stdio.h> /* definitions of printf, scanf */
#include <math.h> /* definition of sqrt */

int main()
{
	double a;							/*input angka a*/
	a= sqrt(ceil(fabs(-7.4)));			/*input rumus yang akan digunakan*/
	printf("Hasilnya adalah= %lf",&a);	/*output hasil dari rumus dan ngka yang sudah ditentukan*/
}
