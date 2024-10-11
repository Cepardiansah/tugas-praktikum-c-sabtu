#include <stdio.h>
#include <math.h>

int main() {
    float alas, tinggi, sisiMiring;

    // Input sisi alas dan tinggi segitiga
    printf("Masukkan panjang sisi alas segitiga (cm): ");
    scanf("%f", &alas);
    printf("Masukkan panjang sisi tinggi segitiga (cm): ");
    scanf("%f", &tinggi);

    // Menghitung sisi miring menggunakan Teorema Pythagoras
    sisiMiring = sqrt((alas * alas) + (tinggi * tinggi));

    // Menampilkan hasil
    printf("Panjang sisi miring segitiga: %.2f cm\n", sisiMiring);

    return 0;
}

