/*
*Dalam menghitung gaji kotor, perubahan apa yang harus Anda buat untuk memperpanjang algoritme daftar gaji dalam Latihan Periksa Mandiri 1 untuk memasukkan jam lembur yang harus dibayar pada
1,5 kali tarif per jam normal karyawan? Asumsikan bahwa jam lembur adalah dimasukkan secara terpisah.
*/
#include<stdio.h> /*printf,scanf definitions*/
#define lembur 1.5
float
main(void)
{
		float  tarif;			/*input tarif kerja per jam nya*/
		float jam_kerja;		/*input waktu kerja*/
		float gaji_karyawan;	/*output gaji karyawan*/
		float jam_lembur;		/*input jam lembur*/
		float gaji_lembur;		/*output gaji lembur karyawan*/
		
		/* input tarif kerja*/
		printf ("Masukkan tarif kerja per-jam: ");
		scanf ("%f", &tarif);
		
		/*input jam kerja karyawan*/
		printf ("Masukkan lama jam kerja: ");
		scanf("%f",&jam_kerja);
		
		/*jika pegawai lembur masukkan jam lemburnya*/
		printf ("Masukkan jumlah jam kerja lembur karyawan: ");
		scanf("%f", &jam_lembur);
		
		/*hitung gaji karyawan untuk lemburnya*/
		gaji_lembur=lembur*tarif*jam_lembur;
		
		/*hitung jumlah gaji karyawan tersebut*/
		gaji_karyawan=(tarif*jam_kerja)+(gaji_lembur);
		
		/*output gaji karyawan tersebut*/
		printf ("Gaji karyawan: %.2f",gaji_karyawan);
		
		return(0);
	}
