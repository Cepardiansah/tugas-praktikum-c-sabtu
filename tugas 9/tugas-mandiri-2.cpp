#include <stdio.h>
int main() {
    char A[10] = {'S', 'T', 'T', 'M', 'A', 'N', 'D', 'A', 'L', 'A'};
    char input;
    int count = 0;

    printf("Masukkan karakter: ");
    scanf(" %c", &input);

    for (int i = 0; i < 10; i++) {
        if (A[i] == input) {
            count++;
        }
    }

    if (count > 0) {
        printf("ADA\n%d\n", count);
    } else {
        printf("TIDAK ADA\n");
    }

    return 0;
}
