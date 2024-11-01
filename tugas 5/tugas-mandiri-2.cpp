#include <stdio.h>

int main() {
    int kode;
    char jenis;
    float harga, hargaSetelahDiskon, diskon;

    // Menerima masukan dari pengguna
    printf("Masukkan Kode: ");
    scanf("%d", &kode);
    printf("Masukkan Jenis (A/B/C): ");
    scanf(" %c", &jenis); // Spasi sebelum %c untuk mengabaikan karakter newline
    printf("Masukkan Harga: ");
    scanf("%f", &harga);

    // Menentukan diskon berdasarkan jenis
    switch (jenis) {
        case 'A':
            diskon = 0.10; // 10% untuk jenis A
            break;
        case 'B':
            diskon = 0.15; // 15% untuk jenis B
            break;
        case 'C':
            diskon = 0.20; // 20% untuk jenis C
            break;
        default:
            printf("Jenis tidak valid. Harap masukkan A, B, atau C.\n");
            return 1; // Keluar dari program jika jenis tidak valid
    }

    // Menghitung harga setelah diskon
    hargaSetelahDiskon = harga * (1 - diskon);

    // Menampilkan hasil
    printf("Jenis barang %c mendapat diskon = %.0f%%, Harga setelah didiskon = %.2f\n", jenis, diskon * 100, hargaSetelahDiskon);

    return 0;
}
