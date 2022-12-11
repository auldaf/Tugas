/*
*menghitung dengan rumus yang sudah ditentukan
*/
#include <stdio.h> /* definitions of printf, scanf */
#include <math.h> /* definition of sqrt */
 int main()
 {
 	float x,y;		/*input angka yang akan dimasukkan*/
 	float hasil;	/*hasil dari angka dan rumus*/
 	
 	/*input angka yang akan dimasukkan sebagai y dan x*/
 		printf("Masukkan angka x: ");
 		scanf("%f",&x);
 		
 		printf("Masukkan angka y: ");
 		scanf("%f",&y);
 		
 	/*masukkan rumus yang akan digunakan*/
 		hasil=sqrt(pow((x-y),3));
 		
 	/*output hasil dari hitungan tersebut*/
 		printf("Hasilnya adalah: %f",hasil);
 }
