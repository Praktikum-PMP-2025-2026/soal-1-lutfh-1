/*============================================================
 *  /** EL2008 Praktikum Pemecahan Masalah dengan Pemrograman 2024/2025
 *   Modul               : 02 - Data Manipulation and External Files
 *   Hari dan Tanggal    : Rabu 22 April 2026
 *   Nama (NIM)          : Lutfi Hasan (13224091)
 *   Nama File           : soal1.c
 *   Deskripsi           : Mencari SUM, AVG, MAX, dan IDX menggunakan array dan pointer
 * */

#include <stdio.h>

void minMax(int arr[], int n, int *max, int *idx) {
    *max = arr[0];
    *idx = 0;
    for (int i = 1; i < n; i++) {
      if (arr[i] > *max) {
        *max = arr[i];
        *idx = i;
      }
    }
}

void SUM(int arr[], int n, int *tot) {
    *tot = 0;
    for(int i = 0; i < n; i++) {
      *tot = *tot + arr[i];
    }
}


int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    int mx, indeks, total;
    float r2;
    
    for(int i = 0; i < n; i++) {
      scanf("%d", &arr[i]);
    }

    minMax(arr, n, &mx, &indeks);
    SUM(arr, n, &total);

    float a = (int) total;
    r2 = a / n;


    printf("SUM %d\n", total);
    printf("AVG %.2f\n", r2);
    printf("MAX %d\n", mx);
    printf("IDX %d\n", indeks);

    return 0;
}
