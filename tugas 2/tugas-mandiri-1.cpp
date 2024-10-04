#include <stdio.h>

int main() {
    // Mendeklarasikan variabel untuk alas dan tinggi
    float alas = 8.0;
    float tinggi = 5.0;
    float luas;

    // Menghitung luas segitiga
    luas = (alas * tinggi) / 2;

    // Menampilkan hasil
    printf("Luas segitiga dengan alas %.2f cm dan tinggi %.2f cm adalah: %.2f cm^2\n", alas, tinggi, luas);

    return 0;
}

