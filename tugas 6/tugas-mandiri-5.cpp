#include <stdio.h>

int main() {
    double uang = 1000000; // jumlah awal dalam rupiah
    double bunga = 0.02; // bunga 2% per bulan

    for (int bulan = 1; bulan <= 10; bulan++) {
        uang += uang * bunga; // tambahkan bunga pada uang
        printf("Jumlah uang setelah bulan %d: Rp. %.2f\n", bulan, uang);
    }
    return 0;
}

