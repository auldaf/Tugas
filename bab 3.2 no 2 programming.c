/*
*Write a complete C program that prompts the user for the coordinates of two 
3-D points (x1, y1, z1) and (x2, y2, z2) and displays the distance between them 
computed using the following formula:
*/
#include <stdio.h> /* definitions of printf, scanf */
#include <math.h> /* definition of sqrt */

int main()
{
	float x1,y1,z1;
	float x2,y2,z2;				/*input 6 data yang akan dimasukkan*/
	float hasil_sqrt;			/*output hasil dari rumus*/
	
	/*dapatkan angka x1,y1,z1*/
	printf("Masukkan x1: ");
	scanf("%f",&x1);
	
	printf("Masukkan y1: ");
	scanf("%f",&y1);
	
	printf("Masukkan z1: ");
	scanf("%f",&z1);
	
	/*dapatkan angka untuk x2,y2,z2*/
	printf("Masukkan x2: ");
	scanf("%f",&x2);
	
	printf("Masukkan y2: ");
	scanf("%f",&y2);
	
	printf("Masukkan z2: ");
	scanf("%f",&z2);	
	
	/*Hitung angka yang dimasukkan ke dalam rumus*/
	hasil_sqrt=sqrt (pow((x1-x2),2)+pow((y1-y2),2)+pow((z1-z2),2));
	
	printf("Hasil dari koordinat 3D= %f",hasil_sqrt);
}
