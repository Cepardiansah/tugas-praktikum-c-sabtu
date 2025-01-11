#include <stdio.h>
#include <stdbool.h>

#define SIZE 11 

void tampilkanArray(int arr[], int ukuran) {
    for (int i = 0; i < ukuran; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void putarKiri(int arr[], int ukuran) {
    int pertama = arr[0];
    for (int i = 0; i < ukuran - 1; i++) {
        arr[i] = arr[i + 1];
    }
    arr[ukuran - 1] = pertama;
}

bool arraySama(int arr1[], int arr2[], int ukuran) {
    for (int i = 0; i < ukuran; i++) {
        if (arr1[i] != arr2[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    int A[SIZE] = {12, 15, 7, 13, 2, 17, 9, 29, 35, 24, 11};
    
    printf("Array A: ");
    tampilkanArray(A, SIZE);

    putarKiri(A, SIZE);
    printf("Array A setelah diputar ke kiri: ");
    tampilkanArray(A, SIZE);

    int C[SIZE] = {15, 7, 13, 2, 17, 9, 29, 35, 24, 11, 12};
    
    if (arraySama(A, C, SIZE)) {
        printf("Array A dan Array C sama.\n");
    } else {
        printf("Array A dan Array C tidak sama.\n");
    }

    return 0;
}

