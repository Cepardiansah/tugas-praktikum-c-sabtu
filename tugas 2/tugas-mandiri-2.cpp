#include <stdio.h>
#include <math.h>

int main() {
    // Mendeklarasikan variabel untuk diameter, jari-jari, dan volume
    float diameter = 15.0;
    float jari_jari = diameter / 2;
    float volume;

    // Menghitung volume bola dengan rumus V = (4/3) * ? * r^3
    volume = (4.0 / 3.0) * M_PI * pow(jari_jari, 3);

    // Menampilkan hasil
    printf("Volume bola dengan diameter %.2f cm adalah: %.2f cm^3\n", diameter, volume);

    return 0;
}


