/*Nama File	: BubbleSort.c*/
/*Deskripsi	: Mengurutan algoritma dengan cara melakukan penukaran data secara terus menerus sampai bisa dipastikan dalam suatu iterasi tertentu tidak ada lagi perubahan/penukaran. */
/*Pembuat	: Nafis Mufadhal - 24060121120033*/
/*Tgl pembuatan	: Sabtu, 7 Mei 2022 22.00 WIB*/


#include <stdio.h>

void bubbleSort(int arr[], int n){
    // Kamus Lokal
    int i, j, temp;

    // Algoritma
    for(i = 0; i < n; i++)
    {
        for(j=0; j < n-i-1; j ++)
        {
            if(arr[j] > arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main(){
    // Kamus
    int array[100], n, i, j;

    // Algoritma
    printf("---Bubble Sort Ascending---\n");
    printf("Masukkan banyak elemen: ");
    scanf("%d", &n);
    printf("Masukkan nilai: \n");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    bubbleSort(array, n);
    printf("Hasil pengurutannya adalah \n");
    for(i = 0; i < n; i++)
    {
    printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
