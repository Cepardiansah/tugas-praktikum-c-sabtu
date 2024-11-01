#include <stdio.h>

int main() {
    int jamMasuk, jamKeluar, lamaKerja;

    // Input jam masuk dan jam keluar
    printf("Masukkan jam masuk: ");
    scanf("%d", &jamMasuk);
    printf("Masukkan jam keluar: ");
    scanf("%d", &jamKeluar);

    // Menghitung lama bekerja
    if (jamKeluar >= jamMasuk) {
        lamaKerja = jamKeluar - jamMasuk;
    } else {
        lamaKerja = (12 - jamMasuk) + jamKeluar;
    }

    // Output lama bekerja
    printf("Lama bekerja %d jam\n", lamaKerja);

    return 0;
}

