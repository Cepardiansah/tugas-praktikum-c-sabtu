#include <stdio.h>

int main() {
    int suhuCelcius;
    float suhuFahrenheit, suhuReamur;

    // Input suhu dalam Celcius
    printf("Masukkan suhu dalam Celcius: ");
    scanf("%d", &suhuCelcius);

    // Menghitung suhu dalam Fahrenheit
    suhuFahrenheit = (suhuCelcius * 9.0 / 5.0) + 32;

    // Menghitung suhu dalam Reamur
    suhuReamur = suhuCelcius * 4.0 / 5.0;

    // Menampilkan hasil
    printf("Suhu dalam Fahrenheit: %.2f °F\n", suhuFahrenheit);
    printf("Suhu dalam Reamur: %.2f °Re\n", suhuReamur);

    return 0;
}

