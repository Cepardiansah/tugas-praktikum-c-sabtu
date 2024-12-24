#include <stdio.h>

int main() {
    int A[11] = {0};  // Array dengan 11 elemen
    int data[] = {12, 15, 7, 10, 5, 2, 17, 25, 9, 20, 35};  // Data dari dokumen
    int i, j = 0;

    // Menginput nilai genap dari data ke dalam array A
    for(i = 0; i < 11; i++) {
        if(data[i] % 2 == 0) {
            A[j] = data[i];
            j++;
        }
    }

    // Mencetak array A yang berisi nilai genap
    printf("Nilai genap yang disimpan dalam array A:\n");
    for(i = 0; i < j; i++) {
        printf("%d ", A[i]);
    }
    
    return 0;
}

