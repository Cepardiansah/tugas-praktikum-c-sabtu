#include <stdio.h>
#include <stdbool.h>

#define SIZE 11

int main() {
    int A[SIZE] = {12, 17, 10, 5, 15, 25, 11, 7, 25, 16, 19};
    int N, i;
    bool ada = false;

    printf("Masukkan bilangan integer = ");
    scanf("%d", &N);

    printf("\nArray: ");
    for (i = 0; i < SIZE; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");

    printf("Lokasi bilangan yang sama: ");
    for (i = 0; i < SIZE; i++) {
        if (A[i] == N) {
            printf("%d ", i); 
            ada = true;
        }
    }

    if (ada) {
        printf("\nADA\n");
    } else {
        printf("TIDAK ADA\n");
    }

    return 0;
}

