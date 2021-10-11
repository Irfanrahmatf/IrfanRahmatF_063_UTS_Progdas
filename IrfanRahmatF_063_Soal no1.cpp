#include <stdio.h>

int main()
{
int umur;
		printf("validasi kategori dari 0 sampai 100 tahun\n");
		printf("masukkan umur anda :");
		scanf("%i",&umur);
		printf("umur anda :",umur);
		
		if (umur <0){
		printf("masukan anda salah\n");}
		else if (umur>=0,umur<1){
		printf("bayi\n");}
		else if (umur>=1,umur<=3){
		printf("balita\n");}
		else if (umur>=3,umur<=5){
		printf("balita\n");}
		else if (umur>=5,umur<=12){
		printf("Anak-anak\n");}
		else if (umur>=12,umur<=17){
		printf("Remaja\n");}
		else if (umur>=17,umur<=30){
		printf("Pemuda\n");}
		else if (umur>=30,umur<=60){
		printf("Dewasa\n");}
		else if (umur>=60,umur<=100){
		printf("Lansia\n");}
}
