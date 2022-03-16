/*Nama File	    : FaktorBil.c*/
/*Deskripsi	    : Menentukan faktor-faktor bilangan integer sembarang N*/
/*Pembuat	    : Nafis Mufadhal-24060121120033*/
/*Tgl pembuatan	: [Selasa, 15 Maret 2022  10.55 WIB]*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Kamus
    int N,i;

    //Algoritma
    printf("Faktor Bilangan \n");
    printf("Masukkan nilai faktor atau N : ");
    scanf("%d", &N);
    if (N<=0) {
        printf("N harus positif");
    }
    else {
        printf("Faktor dari bilangan %d yaitu \n", N);
        for(i=1; i<=N; i++) {
            if (N%i == 0) {
                printf("%d\n", i);
            }
        }
    }
    return 0;
}
