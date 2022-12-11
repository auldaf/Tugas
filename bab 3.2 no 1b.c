/*
*hitung hasil dari rumus yang di sediakan
*/
#include <stdio.h> /* definitions of printf, scanf */
#include <math.h> /* definition of sqrt */
	int main()
	{
		float x,y; 		/*input angka yang akan digunakan yaitu x dan y*/
		float hasil;	/*output dari hasil rumus tersebut*/
		
		/*input angka yang akan digunakan*/
			printf("Masukkan angka X: ");
			scanf("%f", &x);
			
			printf("Masukkan angka Y: ");
			scanf("%f", &y);
			
		/*masukkan rumus yang akan digunakan*/
			hasil=log(pow(x,2));
			
		/*ouput hasil*/
		printf("Hasil nya adalah: %f",hasil);
	}

