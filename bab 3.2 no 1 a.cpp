/*
*menghitung hasil dari rumus yang telah diberikan
*/
#include <stdio.h> /* definitions of printf, scanf */
#include <math.h> /* definition of sqrt */

int main()
{
	/*input angka u,v,w*/
	float u; 
	float v;
	float w;
	float hasil_sqrt; /*output hasil akar*/
	
	/*input angka u*/
	printf("Masukkan angka u=");
	scanf("%f",&u);
	
	/*input angka v*/
	printf("Masukkan angka v=");
	scanf("%f",&v);
	
	/*input angka w*/
	printf("Masukkan angka w=");
	scanf("%f",&w);
	
	/*input rumus yang telah ditentukan*/
	hasil_sqrt=sqrt(u+v)*pow(w,2);

	/*output hasil*/
	printf("Hasilnya adalah: %.2f",hasil_sqrt);
}
