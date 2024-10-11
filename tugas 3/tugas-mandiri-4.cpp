#include <stdio.h>

int main() {
    int bilangan;

    // Input bilangan bulat positif
    printf("Masukkan bilangan bulat positif: ");
    scanf("%d", &bilangan);

    // Memeriksa apakah bilangan positif
    if (bilangan <= 0) {
        printf("Silakan masukkan bilangan bulat positif.\n");
    } else {
        // Memeriksa ganjil atau genap
        if (bilangan % 2 == 0) {
            printf("Bilangan %d adalah GENAP.\n", bilangan);
        } else {
            printf("Bilangan %d adalah GANJIL.\n", bilangan);
        }
    }

    return 0;
}

