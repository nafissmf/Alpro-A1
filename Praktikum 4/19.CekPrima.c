/*Nama File	    : FaktorBil.c*/
/*Deskripsi	    : Mengecek bilangan integer sembarang N termasuk bilangan prima atau tidak*/
/*Pembuat	    : Nafis Mufadhal-24060121120033*/
/*Tgl pembuatan	: [Selasa, 15 Maret 2022  11.15 WIB]*/


#include <stdio.h>
int main()
{
    //Kamus
    int N,i,check;
    //Algoritma
    check = 0;
    printf("Cek Bilangan Prima \n");
    printf("Masukkan nilai N : ");
    scanf("%d", &N);
    if (N<=1) {
        printf("%d bukan angka Prima");
    }
    else {
        for (i=2; i<=N; i++) {
            if (N%i == 0) {
                check++;
            }
        }
    if (check==1) {
        printf("%d merupakan angka prima \n", N);
    }
    else {
        printf("%d bukan angka prima \n", N);
    }
    }
    return 0;
}
