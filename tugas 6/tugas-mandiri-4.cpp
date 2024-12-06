#include <stdio.h>

int main() {
    int kecepatan = 2; // meter/detik
    int waktu = 100; // detik
    int jarak = kecepatan * waktu; // rumus: jarak = kecepatan * waktu
    
    printf("Jarak yang ditempuh setelah 100 detik adalah %d meter\n", jarak);
    return 0;
}

