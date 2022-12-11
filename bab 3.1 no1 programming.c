/*
 * Compute the sum and average of two numbers.
 */
#include <stdio.h> /* printf, scanf definitions */
int
main(void)
{
 double one, two;	 /* input - numbers to process */
 double sum;		 /* output - sum of one and two */
 double average;	 /* output - average of one and two */
 
 /* Get two numbers. */
 	printf("masukkan angka: ");
 	scanf("%lf",&one);
 
	printf("masukkan angka: ");
 	scanf("%lf",&two);
 	
 /* Compute sum of numbers. */
 	sum=one+two;
 
 /* Compute average of numbers. */
 	average=(one+two)/2;
 
 /* Display sum and average. */
	printf("Jumlah: %lf \n",sum);
 	printf("Rata-rata: %lf",average);
 
 return (0);
}
