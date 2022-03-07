/*Nama File	: luasBujursangkar.c*/
/*Deskripsi	: Menghitung luas bujursangkar*/
/*Pembuat	: Nafis Mufadhal - 24060121120033*/
/*Tgl pembuatan	: Sabtu, 05-03-2022 20:35 WIB*/

#include <stdio.h>
#include <stdlib.h>



int main()
{
	/*Kamus*/
	int S; //variabel sisi
	int L; //variabel luas

	/*Algoritma*/
	printf("Sisi : ");
	scanf("%d", &S);
	//Luas=Sisi*Sisi
	L=S*S;

	printf("Luas : %d", L);

	return 0;
}
