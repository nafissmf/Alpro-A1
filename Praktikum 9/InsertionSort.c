/*Nama File	: InsertionSort.c*/
/*Deskripsi	: Mengurutan dengan cara membandingkan dan mengurutkan dua data pertama pada array, kemudian membandingkan data para array berikutnya apakah sudah berada di tempat semestinya. */
/*Pembuat	: Nafis Mufadhal - 24060121120033*/
/*Tgl pembuatan	: Minggu, 8 Mei 2022 12.00 WIB*/


#include <stdio.h>


void InsertionSort(int arr[], int n)
{
    //Kamus Lokal
    int i, j ,temp;

    //Algoritma
    for (i = 1; i < n; i++)
    {
        temp = arr[i];

        for (j = i-1; j >= 0 && arr[j] > temp; j--)
        {
            arr[j+1] = arr[j];
        }
        arr[j+1] = temp;
    }
}

int main()
{
    //Kamus
    int n, array[100], i , j, temp;

    //Algoritma
    printf("---Insertion Sort Ascending---\n");
    printf("Masukkan jumlah banyaknya data: ");
    scanf("%d", &n);
    printf("Masukkan nilai: \n");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    InsertionSort(array, n);
    printf("Hasil pengurutan adalah : ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
