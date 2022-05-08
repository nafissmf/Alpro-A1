/*Nama File	: CountingSort.c*/
/*Deskripsi	: Membuat sebuah pengurutan data yang mana dengan cara menghitung jumlah
              kemunculan dari setiap data yang berada di dalam array. */
/*Pembuat	: Nafis Mufadhal - 24060121120033*/
/*Tgl pembuatan	: Jumat, 6 Mei 2022 19.30 WIB*/

#include <stdio.h>
#include <stdlib.h>

/* Fungsi counting sort ascending*/
void countingSortAsc(int A[], int k, int n)
{
    //Kamus
    int i, j;
    int B[15], C[100];

    //Algoritma
    for (i = 0; i <= k; i++)
        C[i] = 0;
    for (j = 1; j <= n; j++)
        C[A[j]] = C[A[j]] + 1;
    for (i = 1; i <= k; i++)
        C[i] = C[i] + C[i-1];
    for (j = n; j >= 1; j--)
    {
        B[C[A[j]]] = A[j];
        C[A[j]] = C[A[j]] - 1;
    }
    /*Hasil data yang telah diurutkan*/
    printf("Hasil pengurutan adalah : ");
    for (i = 1; i <= n; i++)
        printf("%d ", B[i]);
}

int main()
{
    printf("---Counting Sort Ascending---\n");
    int n, k = 0, A[15], i;
    printf("Masukkan jumlah banyaknya data: ");
    scanf("%d", &n);

    /*Perulangan untuk menginput data sebanyak n*/
    printf("Masukkan datanya yang belum terurut : \n");
    for (i = 1; i <= n; i++)
    {
        scanf("%d", &A[i]);
        if (A[i] > k) {
            k = A[i];
        }
    }
    countingSortAsc(A, k, n);
    printf("\n");
    return 0;
}

