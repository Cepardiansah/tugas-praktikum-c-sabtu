#include <stdio.h>
#include <math.h>

int main() {
    // Deklarasi variabel
    float alas = 4.0; // panjang sisi alas
    float tinggi = 5.0; // panjang sisi tinggi
    float miring; // panjang sisi miring

    // Menghitung sisi miring menggunakan rumus Pythagoras
    miring = sqrt((alas * alas) + (tinggi * tinggi));

    // Menampilkan hasil
    printf("Panjang sisi miring segitiga siku-siku adalah: %.2f cm\n", miring);

    return 0;
}

