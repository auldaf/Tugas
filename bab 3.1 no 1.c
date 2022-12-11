/*
*Jelaskan masalah input dan output dan tulis algoritme untuk program yang menghitung gaji kotor karyawan berdasarkan jam kerja dan tarif per jam
*/
#include<stdio.h> /*printf,scanf definitions*/

float
main(void)
{
		float  tarif;			/*input tarif kerja per jam nya*/
		float jam_kerja;		/*input waktu kerja*/
		float gaji_karyawan;	/*output gaji karyawan*/
		
		/* input tarif kerja*/
		printf ("Masukkan tarif kerja per-jam: ");
		scanf ("%f", &tarif);
		
		/*input jam kerja karyawan*/
		printf ("Maukkan lama jam kerja: ");
		scanf("%f",&jam_kerja);
		
		/*hitung jumlah gaji karyawan tersebut*/
		gaji_karyawan=tarif*jam_kerja;
		
		/*output gaji karyawan tersebut*/
		printf ("Gaji karyawan: %.2f",gaji_karyawan);
}

