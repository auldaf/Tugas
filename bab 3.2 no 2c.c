/*
*program menghitung angka dan rumus yang sudah ditentukan
*/
#include <stdio.h> /* definitions of printf, scanf */
#include <math.h> /* definition of sqrt */

int main()
{
	double a;						/*input angka a*/
	a= floor(-7.5) * pow(3.0, 2.0);	/*input rumus yang akan digunakan*/
	printf("Hasilnya adalah= %lf",&a);	/*output hasil dari rumus dan ngka yang sudah ditentukan*/
}
